#include <stdio.h>
int main()
{
	int size,value,top=-1;
	printf("Enter size: ");
	scanf("%d",&size);
	int st[size];
	int max=size-1;
	printf("Do you want to Play with Stack(y/n): ");
	char ch;
	scanf(" %c",&ch);
	while(ch=='y'||ch=='Y')
	{
	if(top==max)
	{
		printf("Jagah Nahi hai Kal aana (T_T)\n");
	}
	else if (top==-1)
	{
		top=top+1;
		printf("Enter value: ");
		scanf("%d",&value);
		st[top]=value;
	}
	else
	{
		printf("Enter value: ");
		scanf("%d",&value);
		top=top+1;
		st[top]=value;
		
	}
	printf("Do you want to continue Inserting(y/n): ");
	scanf(" %c",&ch);
	}
printf("Stack Elements are: ");
int i;
for(i=0;i<top+1;i++)
{
	printf("%d ",st[i]);
}
}
