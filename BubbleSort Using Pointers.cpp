#include <stdio.h>
#include <stdlib.h>
void sort(int arr[],int *p);  //Declaration of the Function 
int i,j;
int main()  //Main function , the program execution starts from here
{
	int n;  //Asking number of elements in the Array from the user
	printf("Enter Number Of Elements in Array: ");
	scanf("%d",&n);
	int *arr=(int *)malloc(n*sizeof(int));
	if(arr==NULL)
	{
		printf("No Space Is Available:\n");
	}
	else
	{
	printf("Enter Array Elements:\n");    
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);  //Entering  elements inside the array
	}
	sort(arr,&n);
	}
}
void sort(int arr[],int *p)  //Function for sorting of the array
{
	printf("Enter 1 to sort in Ascending Order\nEnter 2 to sort in Descending Order\n");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
		
	case 1:
	int j,tmp; //tmp is a variable which stores the value of the element and sorts
	printf("The Original Array is: ");
	for(i=0;i<*p;i++)
	{
		printf("%d ",arr[i]);  //This Loop prints the original array
	}
	printf("\n");
	for(i=0;i<(*p-1);i++) 
	{
		for(j=0;j<(*p-1-i);j++)
		{
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j+1];
				arr[j+1]=arr[j];  //Sorting is Done here
				arr[j]=tmp;
			}
		}
	}
	printf("The Array In Ascending Orer Is: ");
	for(i=0;i<*p;i++)
	{
		printf("%d ",arr[i]);  //This Loop prints the sorted array
	}
	break;
	
	case 2:
	printf("The Original Array is: ");
	for(i=0;i<*p;i++)
	{
		printf("%d ",arr[i]);  //This Loop prints the original array
	}
	printf("\n");
	for(i=0;i<(*p-1);i++) 
	{
		for(j=0;j<(*p-1-i);j++)
		{
			if(arr[j]<arr[j+1])
			{
				tmp=arr[j+1];
				arr[j+1]=arr[j];  //Sorting is Done here
				arr[j]=tmp;
			}
		}
	}
	printf("The Array In Descending Order Is: ");
	for(i=0;i<*p;i++)
	{
		printf("%d ",arr[i]);  //This Loop prints the sorted array
	}
	break;
}
}

