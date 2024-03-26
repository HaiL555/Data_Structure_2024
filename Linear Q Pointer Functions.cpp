#include <stdio.h>
#include <stdlib.h>
void enqueue(int *q, int *rear, int *front, int size, int e);
int dequeue(int *q, int *front, int *rear);
void display(int *q, int front, int rear);
int main() 
{
    int n, ch, e;
    printf("Enter Queue size: ");
    scanf("%d",&n);
    if (n <= 0) 
	{
        printf("Invalid size...\n");
        return 1;
    }
    int *q=(int *)malloc(n*sizeof(int)); // Allocate memory for the queue
    if(q==NULL) 
	{
        printf("Memory allocation failed.\n");
        return 1;
    }
    int front=-1,rear=-1;
    do {
        printf("\nEnter 1 For Enqueue\n Enter 2 For Dequeue\n Enter 3 To Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);
        switch (ch) 
		{
            case 1:
                printf("Enter element to enqueue: ");
                scanf("%d",&e);
                enqueue(q,&rear,&front,n,e);
                break;
                
            case 2:
                dequeue(q,&front,&rear);
                break;
                
            case 3:
                printf("Quitting...\n");
                break;
                
            default:
                printf("Invalid choice\n");
        }
    } while (ch!=3);
    display(q,front,rear);
}

// if queue is full
int isFull(int *q, int rear, int size)
 {
    return rear==size-1;
}

//if queue is empty
int isEmpty(int front) 
{
    return front == -1;
}

// Function to Insert
void enqueue(int *q, int *rear, int *front, int size, int e)
 {
    if (isFull(q, *rear, size)) 
	{
        printf("Overflow\n");
        return;
    }
    if (*front == -1) 
	{
        *front = 0;
    }
    (*rear)++;
    q[*rear] = e;
    printf("Inserted element: %d\n", e);
}
// Function to dequeue an element
int dequeue(int *q, int *front, int *rear)
 {
    if (isEmpty(*front)) 
	{
        printf("Underflow\n");
        return -1; // Indicate error or a special value for underflow
    }
    int e = q[*front];
    (*front)++;
    if (*front > *rear) 
	{  // Reset front and rear if queue becomes empty
        *front = *rear = -1;
    }
    printf("Dequeued element: %d\n", e);
    return e;
}

// Function to display the queue contents
void display(int *q, int front, int rear) 
{
    if (isEmpty(front)) 
	{
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue contents: ");
    for (int i = front; i <= rear; i++) 
	{
        printf("%d ", q[i]);
    }
    printf("\n");
}

