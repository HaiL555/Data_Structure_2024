#include <stdio.h>
#include <stdlib.h>
void display(int *arr, int size);
int main() 
{
    int n, i;
    printf("Enter Number Of Elements In Array:\n");
    scanf("%d",&n);
    int *ar=(int *)malloc(n*sizeof(int)); // Dynamically allocate memory for the array
    if (ar==NULL) //If no space is available
	{ 
        printf("Memory allocation failed.\n");
    }
    printf("Enter %d Elements:\n",n);
    for (i=0;i<n;i++) 
	{
        scanf("%d",&ar[i]); // Store elements using pointer notation
    }
    display(ar, n); // Pass pointer and size to display function
    return 0;
}
void display(int *arr, int size) 
{
    printf("The Array Elements Are: ");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

