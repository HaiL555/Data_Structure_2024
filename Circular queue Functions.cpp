#include <stdio.h>
#include <stdlib.h>
void enqueue(int item, int n,int q[]);
void display(int n,int q[]);
void dequeue(int n,int q[]);
int front = -1,rear=-1,i;
int main() 
{
    printf("Enter Size\n");
    int n;
    scanf("%d", &n);
    int q[n];
    char c='y';
    while(c == 'y' || c == 'Y') 
	{
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
                enqueue(item, n,q);
                break;
                
            case 2:
				dequeue(n,q);
                break;
                
            case 3:
                display(n,q);
                break;
                
            case 4:
                printf("Exiting...\n");
                return 0;
                break;
                
            default:
                printf("Invalid Choice");
                break;
        }
    }
}

void enqueue(int item, int n,int q[]) 
{
    if ((rear + 1)%n == front)
	 {
        printf("Queue is Already Full.\n");
        return;
    }
    if (front == -1) 
	{
        front = 0;
    }
    rear = (rear + 1) % n;
    q[rear] = item;
}

void dequeue(int n,int q[]) 
{
    if (front == -1)
	 {
        printf("Queue is Empty\n");
    }
    int item = q[front];
    if (front == rear) 
	{
        front = -1;
        rear = -1;
    } 
	else 
	{
        front = (front + 1) % n;
    }
    printf("Dequed: %d",item);
}

void display(int n,int q[])
 {
    if (front == -1)
	 {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue contents: ");
    if (front <= rear)
	 {
        for (i = front; i <= rear; i++)
		 {
            printf("%d ", q[i]);
        }
    } 
	else 
	{
        for (i = front; i < n; i++) 
		{
            printf("%d ", q[i]);
        }
        for (i = 0; i <= rear; i++)
		 {
            printf("%d ", q[i]);
        }
    }
    printf("\n");
}


