#include <stdio.h>
int main() 
{
    int n, i, j;
    long long bdg; // Changed from long to long long
    printf("Enter Budget and Number of Items\n"); // Input the total number of items and the budget
    scanf("%lld%d",&bdg,&n); // Changed %l to %lld for long long
    long long dupbd=bdg;
    int cost[n]; // Array to store cost of the items
    printf("Enter Items Cost:\n");
    for(i=0;i<n;i++) 
	{
        scanf("%d",&cost[i]);
    }
    printf("Sorting The Cost-->\n");
    int tmp;
    for(i=0;i<(n-1);i++) 
	{
        for(j=0;j<(n-i-1);j++) 
		{
            if(cost[j]>cost[j+1]) 
			{
                // Swap the elements
                tmp=cost[j];
                cost[j]=cost[j+1];
                cost[j+1]=tmp;
            }
        }
    }
    int item=0;
    for(i=0;i<n;i++) 
	{
        bdg=bdg-cost[i];
        if(bdg<=0) 
		{
            break;
        } 
		else 
		{
            item++;
        }
    }
    printf("The Number Of Items Bought In The Given Budget %lld is %d\n",dupbd,item); // Changed %l to %lld for long long
    return 0;
}

