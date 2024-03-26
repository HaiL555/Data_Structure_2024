#include <stdio.h>
int main() 
{
    int n,ch,e;  // n (size), ch (choice), e (element)
    printf("Enter Size Of Queue: ");
    scanf("%d",&n);
    if(n<=0) 
	{
        printf("Invalid size\n");
    }
    int q[n];
    int front=-1;
    int rear=-1;
    do 
	{
        printf("Enter 1 For Enqueue\n Enter 2 For Dequeue\n Enter 3 To Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch) 
		{
            case 1:
                // Enqueue 
                if(rear==(n-1))
				{
                    printf("Overflow\n");
                } 
				else 
				{
                    if(front==-1) 
					{
                        front=0;
                    }
                    rear++;
                    printf("Enter element to enqueue: ");
                    scanf("%d",&e);
                    q[rear]=e;
                    printf("Inserted element: %d\n",e);
                }
                break;
                
            case 2:
                // Dequeue
                if(front==-1||front>rear) 
				{
                    printf("Underflow\n");
                } 
				else 
				{
                    e=q[front];
                    front++;
                    printf("Dequeued element: %d\n", e);
                }
                break;
                
            case 3:
                printf("Quitting...\n");
                break;
                
            default:
                printf("Invalid choice\n");
        }
    }while (ch!=3);
    
    if(front==-1)// Displaying Queue Contents
	 {
        printf("Queue is empty.\n");
    } 
	else 
	{
        printf("Queue contents: ");
        for (int i = front; i <= rear; i++) 
		{
            printf("%d ", q[i]);
        }
        printf("\n");
    }
}
