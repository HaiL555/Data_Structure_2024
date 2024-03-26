#include <stdio.h>
int main()
 {
    int n,i,j,value,top=-1;
    printf("Enter size of the stack: ");
    scanf("%d", &n);
    int st[n]; // Declare the stack array
    printf("Do you want to push or pop(y/n): ");
     char ch;
    scanf(" %c",&ch); //enter choice
    while (ch == 'y' || ch == 'Y')
	 { 
    printf("Enter 1 to Push Element\n");
    printf("Enter 2 to Pop Element\n");
    printf("Enter 3 to Exit\n");
        printf("Enter your operation choice: ");
        int c;
        scanf("%d",&c);
        switch (c) 
		{
            case 1: // Push 
                if (top == n - 1) 
				{
                    printf("Stack Overflow\n");
                } 
				else 
				{
                    printf("Enter value to push: ");
                    scanf("%d", &value);
                    top++;
                    st[top]=value;
                    printf("Pushed element: %d\n", value);
                }
                break;
                
            case 2: // Pop 
                if (top == -1) 
				{
                    printf("Stack Underflow\n");
                } 
				else 
				{
                    value = st[top];
                    top--;
                    printf("Popped element: %d\n", value);
                }
                break;
                
            case 3: // Exit
                printf("Exiting...\n");
                break;
                
            default:
                printf("Invalid choice\n");
        }
        printf("Do you want to continue(y/n): ");
        scanf(" %c", &ch); //Enter again choice
    }
    printf("Stack: ");
    for(i=0;i<=top;i++)
    {
    	printf("%d ",st[i]);
	}
    return 0;
}
