#include <stdio.h>
int main()
 {
    int i;
    char exp[100];
    char st[100];
    printf("Enter Parentheses: ");
    scanf("%s", exp); 
    int top = -1;
    for (i = 0; exp[i] != '\0'; i++) 
	{
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{') 
		{
            if (top==(100-1))
			 {
                printf("Overflow\n");
            }
            top++;
            st[top] = exp[i];
        } 
		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		 {
            if (top == -1) 
			{
                printf("Underflow\n");
                return 0; // Exit the program in case of underflow
            } 
			else if ((exp[i] == ')' && st[top] == '(') || (exp[i] == ']' && st[top] == '[') || (exp[i] == '}' && st[top] == '{')) 
			{
                top--;
            } 
			else
			 {
                printf("Parentheses not Balanced\n");
                return 0; // Exit the program if parentheses are not balanced
            }
        }
    }
    
    if (top == -1) 
	{
        printf("Balanced\n");
    } 
	else 
	{
        printf("Not Balanced\n");
    }
}

