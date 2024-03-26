#include <stdio.h>
int i,j;
int CommonElements(int arr1[], int arr2[], int size1, int size2);
int main() 
{
    int size1, size2;
    printf("Enter the size of the first array: ");
    scanf("%d",&size1);
    printf("Enter the elements of the first array:\n");
    int arr1[size1];
    for(i=0;i<size1;i++) 
	{
        scanf("%d",&arr1[i]);
    }
    printf("\n");
    printf("Enter the size of the second array: ");
    scanf("%d",&size2);
    printf("\n");
    printf("Enter the elements of the second array: ");
    int arr2[size2];
    for(i=0;i<size2;i++)
	{
        scanf("%d",&arr2[i]);
    }
    int commCount=CommonElements(arr1, arr2, size1, size2);
    printf("Number of common elements: %d\n",commCount);
    return 0;
}
int CommonElements(int arr1[], int arr2[], int size1, int size2) 
{
    int c= 0;
    for(i=0;i<size1;i++) 
	{
        for(j=0;j<size2;j++) 
		{
            if(arr1[i]==arr2[j]) 
			{
                c++;
                break; 
            }
        }
    }
    return c;
}

