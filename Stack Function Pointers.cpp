#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
void push(struct node **top);
void pop(struct node **top);
void display(struct node *top);
int main() 
{
    struct node *top = NULL; // Initialize stack top to Null
    char ch;
    printf("Do you want to Play with Stack(y/n): ");
    scanf(" %c", &ch);
    while (ch == 'y' || ch == 'Y') 
	{
        printf("Do you want to insert or pop a node(i/p): ");
        char c;
        scanf(" %c", &c); // Read user choice for operation
        if (c == 'i' || c == 'I') 
		{
            push(&top);
        } 
		else if (c == 'p' || c == 'P')
		 {
            pop(&top);
        } 
		else 
		{
            printf("Invalid choice.\n");
        }

        printf("Do you want to continue (y/n): "); //to continue
        scanf(" %c", &ch);
    }
    display(top); // To Display stack
    return 0;
}

// Function to push a new node onto the stack
void push(struct node **top) 
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) 
	{
        printf("No Space Available... Bye Bye\n");
        return;
    }
    printf("Enter the Value of the node: ");
    scanf("%d", &newnode->data);
    newnode->next = *top;
    *top = newnode; // Update top to the new node
}

// Function to pop the top node from the stack
void pop(struct node **top) 
{
    if (*top == NULL) 
	{
        printf("Stack is empty(Underflow)\n");
    } 
	else 
	{
        struct node *tmp = *top;
        *top = (*top)->next; // Move top to the next node
        printf("Popped element: %d\n", tmp->data);
        free(tmp); // Free the memory of the popped node
    }
}
// Function to display the stack contents
void display(struct node *top) 
{
    printf("Stack elements: ");
    while (top != NULL)
	 {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

