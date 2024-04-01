#include <stdio.h>
#include <stdlib.h>
int i;
int front = -1;
int rear = -1;
int main() 
{
    printf("Enter Size\n");
    int n;
    scanf("%d", &n);
    int q[n];
    int choice, item;
    char c = 'y';
    while (c == 'y' || c == 'Y') 
	{
        printf("Enter 1 for Enqueue\n");
        printf("Enter 2 for Dequeue\n");
        printf("Enter 3 for Display\n");
        printf("Enter 4 for Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch (choice) 
		{
            case 1:
                printf("Enter element to enqueue: ");
                scanf("%d", &item);
                if ((rear + 1) % n == front) 
				{
                    printf("Queue is Already Full.\n");
                    break;
                }
                if (front == -1) 
				{
                    front = 0;
                }
                rear = (rear + 1) % n;
                q[rear] = item; 
                break;
                
            case 2:
                if (front == -1) 
				{
                    printf("Queue is Empty\n");
                    break;
                }
                item = q[front]; 
                if (front == rear)
				 {
                    front = -1;
                    rear = -1;
                } 
				else 
				{
                    front = (front + 1) % n;
                }
                printf("Dequeued %d from the queue.\n", item);
                break;
                
            case 3:
                if (front == -1) 
				{
                    printf("Queue is empty.\n");
                    break;
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
                    for (i = 0; i<=rear; i++) 
					{
                        printf("%d ", q[i]);
                    }
                }
                printf("\n");
                break;
                
            case 4:
                printf("Exiting...\n");
                return 0;
                
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    }

}

