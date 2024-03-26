#include <stdio.h>
#include <stdlib.h>
void display(int ar[],int n);
void rev(int ar[],int n);
int i,j;
int main()
{
	printf("Enter MAX array Size: ");
	int MAX;
	scanf("%d",&MAX);
	int *ar=(int *)malloc(MAX*sizeof(int));
	if(ar==NULL)
	{
		printf("NO SPACE (T-T)\n");
	}
	else
	{
		printf("Enter Number Of Elements: ");
		int n;
		scanf("%d",&n);
		printf("Enter Array Elements:\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&ar[i]);
		}
		display(ar,n);
		rev(ar,n);
	}
}
void display(int ar[] ,int n)
{
	printf("Original Array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	printf("\n");
}
void rev(int ar[],int n)
{
	printf("Original Array: ");
	for(i=(n-1);i>=0;i--)
	{
		printf("%d ",ar[i]);
	}
}
