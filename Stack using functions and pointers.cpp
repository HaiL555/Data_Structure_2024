#include <stdio.h>
void push(int *st, int **top, int value, int n);
void pop(int **top, int *st);
void display(int *st, int *top);
int main()
 {
    int n, value;
    printf("Enter size of the stack: ");
    scanf("%d", &n);
    int st[n]; // Declare the stack array as 'st'
    int *top = st - 1; // Pointer to the top of the stack
    char ch;
    printf("Do you want to push or pop(y/n):");
    scanf(" %c", &ch); // Enter choice
    while (ch == 'y' || ch == 'Y') 
	{
        printf("Enter 1 to Push Element\n");
        printf("Enter 2 to Pop Element\n");
        printf("Enter 3 to Exit\n");
        int c;
        scanf("%d", &c);
        switch (c) 
		{
            case 1: // Push
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(st, &top, value, n);
                break;
                
            case 2: // Pop
                pop(&top, st);
                break;
                
            case 3: // Exit
                ch = 'n'; // Modify ch to exit the loop
                printf("Exiting...\n");
                break;
                
            default:
                printf("Invalid choice\n");
        }
            printf("Do you want to continue(y/n): ");
            scanf(" %c", &ch);
        }
            display(st, top);    // Displays tack elements
    return 0;
}
void push(int *st, int **top, int value, int n)
 {
    if (*top == st + n - 1) 
	{
        printf("Stack Overflow\n");
    }
	 else 
	 {
        ++(*top);
        **top = value;
        printf("Pushed element: %d\n", value);
    }
}

void pop(int **top, int *st)
 {
    if (*top < st) 
	{
        printf("Stack Underflow\n");
    } 
	else 
	{
        printf("Popped element: %d\n", **top);
        --(*top);
    }
}
void display(int *st, int *top)
 {
    printf("Stack: ");
    for (int *ptr = st; ptr <= top; ptr++)
	 {
        printf("%d ", *ptr);
    }
    printf("\n");
}


