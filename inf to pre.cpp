#include <stdio.h>
#include <string.h>

int main() {
    char inf[100]; // Original infix expression
    printf("Enter Expression: ");
    scanf("%s", inf);
    char pre[100]; // To store the prefix expression
    char st[100]; // Stack to hold operators temporarily
    int top = -1; // Top of the stack
    int i, j, k;
    // Reverse the infix expression
    char rev_inf[100];
    strcpy(rev_inf, inf);
    strrev(rev_inf);
    // Convert infix to prefix
    for (i = 0, j = 0; rev_inf[i] != '\0'; i++)
	 {
        char ch = rev_inf[i];
        if ((ch >= 'A' && ch <= 'H') || ch == '%') 
		{
            pre[j++] = ch;
        } else if (ch == ')') 
		{
            st[++top] = ')';
        } else if (ch == '(')
		 {
            while (top != -1 && st[top] != ')') {
                pre[j++] = st[top--];
            }
            if (top != -1) {
                top--; // Pop ')'
            }
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            while (top != -1 && st[top] != ')' && ((ch == '*' || ch == '/') ? (st[top] == '*' || st[top] == '/') : 1)) {
                pre[j++] = st[top--];
            }
            st[++top] = ch;
        }
    }
    // Pop 
    while (top != -1) 
	{
        pre[j++] = st[top--];
    }
    // Reverse 
    pre[j] = '\0';
    strrev(pre);
    printf("Infix: %s\n", inf);
    printf("Prefix: %s\n", pre);
    return 0;
}

