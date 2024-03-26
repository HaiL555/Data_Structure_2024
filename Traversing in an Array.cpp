#include <stdio.h>
int i,n;
void display(int arr[]); //Declaration of the display() funtion
	int main()
	{
		printf("Enter Number Of Elements In Array:\n"); //inputs size of the array
		scanf("%d",&n);
		int ar[n];
		printf("Enter %d Elements:\n",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&ar[i]);  //User inputs the elemnts in the array
		}
		display(ar);
	}
	void display(int arr[])
	{
		printf("The Array Elements Are: ");
		for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);  //Prints the value stored in all the indexes of  the array 
		}
	}

