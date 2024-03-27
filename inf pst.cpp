#include <stdio.h>
#include <string.h>
int main()
{
    char inf[100]; // Original infix expression
    printf("Enter Expression: ");
    scanf("%s",inf);
    char pst[100]; // To store the postfix expression
    char st[100]; // Stack to hold operators temporarily
    int top = -1; // Top of the stack
    int i, j;
    for (i = 0, j = 0; inf[i] != '\0'; i++) 
	{
        char ch = inf[i];
        if ((ch >= 'A' && ch <= 'H') || ch == '%') 
		{
            pst[j++] = ch;
        } 
		else if (ch == '(') 
		{
            st[++top] = '(';
        }
		 else if (ch == ')') 
		 {
            while (top != -1 && st[top] != '(')
			 {
                pst[j++] = st[top--];
            }
            if (top != -1) 
			{
                top--; // Pop '('
            }
        } 
		else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		 {
            while (top != -1 && st[top] != '(' && ((ch == '*' || ch == '/') ? (st[top] == '*' || st[top] == '/') : 1))
			 {
                pst[j++] = st[top--];
            }
            st[++top] = ch;
        }
    }
    // Pop remaining operators from the stack
    while (top != -1) 
	{
        pst[j++] = st[top--];
    }
    pst[j] = '\0'; // Null-terminate the postfix expression
    printf("Infix expression: %s\n", inf);
    printf("Postfix expression: %s\n", pst);
    return 0;
}


