#include <stdio.h>
void sort(int arr[],int n);  //Declaration of the Function to sort the array
void Bsearch(int arr[],int n,int a,int d);  // Decalration of Function which Performs Binary search in the Sorted Array
int i,j;
int main()  //Main function , the program execution starts from here
{
	int n,MAX;
	printf("Enter Array Size: ");
	scanf("%d",&MAX);   //Asking number of elements in the Array from the user
	printf("Enter Number Of Elements in Array: ");
	scanf("%d",&n);
	int arr[n];
	if(MAX>n)
	{
	printf("Enter Array Elements:\n");    
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);  //Entering  elements inside the array
	}
	sort(arr,n);
	}
	else
	{
		printf("Array SIZE cannot be Smaller that Number of Elements You want to Fill(+_+)\n");
	}
}
void sort(int arr[],int n)  //Function for sorting of the array
{
	printf("Enter 1 to sort in Ascending Order\nEnter 2 to sort in Descending Order\n");
	int ch;
	int a,d;
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	a=1;
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
	printf("\n");
	break;
	
	case 2:
	d=1;
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
	printf("\n");
	break;
	}
	Bsearch(arr,n,a,d);
}
void Bsearch(int arr[],int n,int a,int d)
{
	printf("Did you Sort In Ascending Order Or In Descending Order(a/d): ");
	char ad;
	scanf(" %c",&ad);
	int bkey;
	if(ad=='a' && a==1 ||ad=='A' && a==1)
	{
	printf("Enter Element to Search: ");
	scanf("%d",&bkey);
	int mid,left=0,right=n;
	mid=(left+right)/2;
	while(left<=right)
	{
		if(bkey==arr[mid])
		{
			printf("Element Found At INDEX: %d\n",mid);
			break;
		}
		else if(bkey>arr[mid])
		{  
        left=mid+1;
    	}
    	else
    	{
    		right=mid-1;
		}
		mid=(left+right)/2; 
	}
}
else if(ad=='d' && d==1||ad=='D' && d==1 )
{
	printf("Enter Element to Search: ");
	scanf("%d",&bkey);
	int mid,left=0,right=n;
	mid=(left+right)/2;
	while(left<=right)
	{
	if(arr[mid]==bkey)
	{
		printf("Element Found At INDEX: %d",mid);
		break;
	}
	else if(arr[mid]<bkey)
	{
		right=mid-1;
	}
	else
	{
		left=mid+1;
	}
	mid=(left+right)/2; 
	}
}
else
{
	printf("Jhooth bolo Baar Baar Jhooth Bolo (T_T) \n");
}
}

