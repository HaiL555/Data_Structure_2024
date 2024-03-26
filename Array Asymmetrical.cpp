#include <stdio.h>
#include <stdlib.h>
int i,j,flag;
int main()
{
	printf("Enter Rows and Columns of Arrray: ");
	int r,c;
	scanf("%d%d",&r,&c);
		int size=r*c;
		int ar[r][c];
		printf("Enter Array Elements: ");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&ar[i][j]);
			}
		}
	int ar2[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			ar2[i][j]=ar[j][i];
		}
	}
	printf("Original Matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",ar[i][j]);
		}
		printf("\n");
	}
	printf("Transpode Matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",ar2[i][j]);
		}
		printf("\n");
	}
	 for(i=0;i<r;i++) 
	 {
        for(j=0;j<c;j++) 
		{
            if(ar[i][j]!=ar2[i][j]) 
			{
                flag=1;
                break;
            }
        }
        if (flag==1) 
        
            break;
        }
    if (flag==1) 
	{
        printf("The matrix is asymmetric.\n");
    } 
	else 
	{
        printf("The matrix is symmetric.\n");
    }
    return 0;
}
