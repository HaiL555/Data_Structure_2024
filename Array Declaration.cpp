#include <stdio.h>
#include <stdlib.h>
void declaration();
void sort(int arr[]);
int main()
{
	printf("Do you want To Declare An Array(y/n): ");
	char c;
	scanf("%c",&c);
	if(c=='y'||c=='Y')
	{
		declaration();
	}
	else
	{
		printf("<<<EXITING PROGRAM>>>");
	}
}
void declaration()
{
	printf("Enter 1 for Dynamic Declaration of Array\n");
	printf("Enter 2 for Static Declaration of Array\n");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("You Chose Dynamic..\n");
			int MAX,n;
			printf("Enter Array Max Size: ");
			scanf("%d",&MAX);
			printf("Enter No. Of Elements you want to Enter: ");
			scanf("%d",&n);
			if(MAX<n)
			{
				printf("MAX cannot be smaller than UB");
			}
			else
			{
				printf("Enter %d Elements:\n",n);
				int i;
				int *ar=(int *)malloc(MAX*sizeof(int));
				if(ar==NULL)
				{
					printf("NO Space\n..");
				}
				else
				{
				for(i=0;i<n;i++)
				{
					scanf("%d",&ar[i]);
				}
				printf("Array Elements Are:\n");
				for(i=0;i<n;i++)
				{
					printf("%d\n",ar[i]);
				}
				}
			}
			break;
			
			case 2:
				printf("You Chose Static..\n");
				int arr[50];
				printf("Enter Number of Elements you want to enter out of 50\n");
				int lim;
				scanf("%d",&lim);
				printf("Enter %d Elements:\n",lim);
				int i;
				for(i=0;i<lim;i++)
				{
					scanf("%d",&arr[i]);
				}
				printf("Array Elements Are:\n");
				for(i=0;i<lim;i++)
				{
					printf("%d\n",arr[i]);
				}
				break;
				
				default:
				printf("Invalid Choice...");	
	}
}

