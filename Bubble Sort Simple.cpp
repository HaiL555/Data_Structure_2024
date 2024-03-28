#include <stdio.h>
void sort(int arr[],int *p);  //Declaration of the Function 
int i,j;
int main()  //Main function , the program execution starts from here
{
	int n,MAX;
	printf("Enter Array Size: ");
	scanf("%d",&MAX);   //Asking number of elements in the Array from the user
	printf("Enter Number Of Elements in Array: ");
	scanf("%d",&n);
	if(MAX>n)
	{
	int arr[n];
	printf("Enter Array Elements:\n");    
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);  //Entering  elements inside the array
	}
	printf("Enter 1 to sort in Ascending Order\nEnter 2 to sort in Descending Order\n");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
		
	case 1:
	int j,tmp; //tmp is a variable which stores the value of the element and sorts
	printf("The Original Array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);  //This Loop prints the original array
	}
	printf("\n");
	for(i=0;i<(n-1);i++) 
	{
		for(j=0;j<(n-1-i);j++)
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
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);  //This Loop prints the sorted array
	}
	break;
	
	case 2:
	printf("The Original Array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);  //This Loop prints the original array
	}
	printf("\n");
	for(i=0;i<(n-1);i++) 
	{
		for(j=0;j<(n-1-i);j++)
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
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);  //This Loop prints the sorted array
	}
	break;
}
}
	else
	{
		printf("Array SIZE cannot be Smaller that Number of Elements You want to Fill(+_+)\n");
	}
}
