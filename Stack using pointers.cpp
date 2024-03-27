#include <stdio.h>
int main() {
    int n, value, c;
    printf("Enter size of the stack: ");
    scanf("%d", &n);
    int st[n]; // Declare the stack array as 'st'
    int *top = st-1;
    char ch;
    printf("Do you want to push or pop(y/n): ");
    scanf(" %c", &ch); // Enter choice
    while (ch == 'y' || ch == 'Y') 
	{
        printf("Enter 1 to Push Element\n");
        printf("Enter 2 to Pop Element\n");
        printf("Enter 3 to Exit\n");
        scanf("%d", &c);
        switch (c) 
		{
            case 1: // Push
                if (top == st + n - 1)
				 {
                    printf("Stack Overflow\n");
                } 
				else 
				{
                    printf("Enter value to push: ");
                    scanf("%d", &value);
                    ++top; // Increment top pointer to next empty position
                    *top = value; // Set value at new top
                    printf("Pushed element: %d\n", value);
                }
                break;
                
            case 2: // Pop
                if (top < st) 
				{
                    printf("Stack Underflow\n");
                }
				 else 
				{
                    value = *top; // Get value at current top
                    --top; // Decrement top pointer
                    printf("Popped element: %d\n", value);
                }
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
    // Display remaining stack elements
    printf("Stack: ");
    for (int *ptr = st; ptr <= top; ptr++) 
	{
        printf("%d ",*ptr);
    }
    printf("\n");
    return 0;
}

