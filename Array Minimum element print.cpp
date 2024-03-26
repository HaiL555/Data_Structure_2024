#include <stdio.h>
	int sort(int a [],int n)
	{
		int max=a[0],min=a[0],i;
		for(i=0;i<n;i++)
		{
		if(a[i]<min)
			{
  				min=a[i];
			}
		}
		printf("The Minimum Element is : %d",min);
	}
	int main()
	{
		int n;
		printf("Enter  Number Of Elements of array: ");
		scanf("%d",&n);
		int a[n],i;
		for(i=0;i<n;i++)
		{
		printf("Enter Array elements: ");
		scanf("%d",&a[i]);
		}
		int p=sort(a,n);
	}
