#include <stdio.h>
int MAX,n,i,j;
void fillar(int ar[]);
void Lsearch(int ar[]);
int main()
{
	printf("Enter Max Size Of Array: ");
	scanf("%d",&MAX);
	printf("Enter number of elements in the Array: ");
	scanf("%d",&n);
	int ar[n];
	fillar(ar);
	Lsearch(ar);
}
void fillar(int ar[])
{
	if(n>MAX)
	{
		printf("Elements To be Filled in the Array Cannot be Greater than Size of the Array\n");
	}
	else
	{
		printf("Enter %d Elements:\n",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&ar[i]);
		}
	}
}
void Lsearch(int ar[])
{
	int num,ind=0;
	printf("Enter The Number That You Want To Search: ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(ar[i] == num)
		{
			printf("The Array Is: ");
			for(j=0;j<n;j++)
			{
				printf("%d ",ar[j]);
			}
			printf("\n");
			printf("Element Found: %d\n",ar[i]);
			printf("Found At INDEX: %d\n",ind);
		}
		else
		{
			ind++;
		}
	}
}

