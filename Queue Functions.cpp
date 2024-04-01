#include <stdio.h>
int i,j,n;
void Enqueue(int front,int rear,int q[],int n);
void Dequeue(int front,int rear,int q[],int n);
int main()
{
	printf("Enter Number Of elements in Queue: ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Not Valid\n");
	}
	int q[n];
	int front=-1;
	int rear=-1;
	Enqueue(front,rear,q,n);
}
void Enqueue(int front,int rear,int q[],int n)
{
	printf("Do you Want to insert an element in Queue(y/n): ");
	char c;
	scanf(" %c",&c);
	while(c=='y'||c=='Y')
	{
	if(rear==(n-1))
	{
		printf("Overflow\n");
	}
	else
	{
	if(rear==-1)
	{
		front=0;
	}
		rear++;
		printf("Enter Element to Insert: ");
		int e;
		scanf("%d",&e);
		q[rear]=e;
	}
	printf("Do you Want to Continue inserting elements in Queue(y/n): ");
	scanf(" %c",&c);
	}
	if(front==-1)
	{
		printf("Queue is Empty\n");
	}
	else
	{
	printf("The Queue Is: ");
	for(i=front;i<=rear;i++)
	{
	printf("%d ",q[i]);	
	}
	printf("\n");
	}
	Dequeue(front,rear,q,n);
}
void Dequeue(int front,int rear,int q[],int n)
{
	printf("Do you Want to Delete an element from Queue(y/n): ");
	char ch;
	scanf(" %c",&ch);
	while(ch=='y'||ch=='Y')
	{
		if(front==-1)
		{
			printf("Underflow\n");
		}
		else
		{
		int e1;
		e1=q[front];
        front++;
        printf("Deleted element: %d\n", e1);	
		}
	printf("Do you Want to Continnue Deleting from Queue(y/n): ");
	scanf(" %c",&ch);		
	}
	if(front==-1)
	{
		printf("Exiting\n");
	}
	else
	{
	printf("The Queue Is: ");
	for(i=front;i<=rear;i++)
	{
	printf("%d ",q[i]);	
	}
	}
}
	
