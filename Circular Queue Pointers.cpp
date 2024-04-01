#include <stdio.h>
#include <stdlib.h>
void enqueue(int item, int n, int *front, int *rear, int *q);
void display(int n, int *front, int *rear, int *q);
void dequeue(int n, int *front, int *rear, int *q);
int i,j;
int main()
 {
    printf("Enter Size\n");
    int n;
    scanf("%d", &n);
    int q[n];
    int front = -1;
    int rear = -1;
    char c = 'y';
    while (c == 'y' || c == 'Y') {
        printf("Enter 1 for Enqueue\n");
        printf("Enter 2 for Dequeue\n");
        printf("Enter 3 for Display\n");
        printf("Enter 4 for Exit\n");
        printf("Enter choice: ");
        int choice;
        scanf("%d", &choice);
        switch (choice) 
		{
            case 1:
                printf("Enter element to enqueue: ");
                int item;
                scanf("%d", &item);
                enqueue(item, n, &front, &rear, q);
                break;
                
            case 2:
                dequeue(n, &front, &rear, q);
                break;
                
            case 3:
                display(n, &front, &rear, q);
                break;
                
            case 4:
                printf("Exiting...\n");
                return 0;
                
            default:
                printf("Invalid Choice");
                break;
        }
    }
}

void enqueue(int item, int n, int *front, int *rear, int *q) 
{
    if ((*rear + 1) % n == *front)
	 {
        printf("Queue is Already Full.\n");
        return;
    }
    if (*front == -1)
	 {
        *front = 0;
    }
    *rear = (*rear + 1) % n;
    q[*rear] = item;
}

void dequeue(int n, int *front, int *rear, int *q) 
{
    if (*front == -1) 
	{
        printf("Queue is Empty\n");
        return;
    }
    int item = q[*front];
    if (*front == *rear) 
	{
        *front = -1;
        *rear = -1;
    } 
	else 
	{
        *front = (*front + 1) % n;
    }
    printf("Dequeued: %d\n", item);
}

void display(int n, int *front, int *rear, int *q) 
{
    if (*front == -1) 
	{
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue contents: ");
    if (*front <= *rear)
	 {
        for (i = *front; i <= *rear; i++)
		 {
            printf("%d ", q[i]);
        }
    }
	 else 
	 {
        for (i = *front; i < n; i++)
		 {
            printf("%d ", q[i]);
        }
        for (i = 0; i <= *rear; i++) 
		{
            printf("%d ", q[i]);
        }
    }
    printf("\n");
}

