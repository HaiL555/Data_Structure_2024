#include <stdio.h>
#include <stdlib.h>
void Sort(int ar[],int n);
void Sevensmall(int ar[],int n);
int i,j;
int main()
{
	int MAX,n;
	printf("Enter MAX Elements: ");
	scanf("%d",&MAX);
	int *ar=(int *)malloc(MAX*sizeof(int));
	if(ar==NULL)
	{
		printf("NO SPACE\n");
	}
	else
	{
	printf("Enter Number of Elements: ");
	scanf("%d",&n);
	if(n>MAX)
	{
		printf("N > MAX (NO)\n");
	}
	else
	{
		printf("Enter Array Elements:\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&ar[i]);
		}
		Sort(ar,n);
	}
}
}
void Sort(int ar[],int n)
{
	printf("Original Array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	printf("\n");
	printf("Sorting....\n");
	int tmp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-1-i);j++)
		{
			if(ar[j]>ar[j+1])
			{
				tmp=ar[j+1];
				ar[j+1]=ar[j];
				ar[j]=tmp;
			}	
		}
	}
	printf("Sorted Array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	printf("\n");
	Sevensmall(ar,n);
}
void Sevensmall(int ar[],int n)
{
	if(n>=7)
	{
	printf("7th Smallest Element = %d",ar[6]);
	}
	else
	{
		printf("Array Dos not Contain 7 Elements\n");
	}
}
