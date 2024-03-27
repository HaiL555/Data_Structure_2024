#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
int main() 
{
    struct node *top = NULL; // Initialize stack top pointer
    struct node *newnode;
   printf("Do you want to Play with Stack(y/n): ");
   char ch;
   scanf(" %c",&ch);
    while (ch == 'y' || ch == 'Y') 
	{
        printf("Do you want to insert or pop a node(i/p): ");
        char c;
        scanf(" %c",&c); // Read user choice for operation
        if (c=='i'||c=='I') 
		{
            // Insertion
            newnode=(struct node *)malloc(sizeof(struct node));
            if (newnode == NULL) 
			{
                printf("No Space Available... Bye Bye\n");
                break;
            }
            printf("Enter the Value of the node: ");
            scanf("%d", &newnode->data);
            newnode->next = top;
            top = newnode; // Update top to the new node
        } 
		else if (c== 'p'|| c=='P') 
		{
            // Pop
            if (top == NULL)
			 {
                printf("Stack is empty(Under the Flow)\n");
            } 
			else
			 {
                struct node *tmp = top;
                top = top->next; // Move top to the next node
                printf("Popped element: %d\n", tmp->data);
                free(tmp); // Free the memory of the popped node
            }
        } 
		else 
		{
            printf("Invalid choice.");
        }
        printf("Do you want to continue (y/n) ");// Ask if the user wants to continue
        scanf(" %c", &ch);
    }

    //display the stack contents
    printf("Stack elements: ");
    struct node *first = top;
    while (first!= NULL) 
	{
        printf("%d ",first->data);
        first=first->next;
    }
    printf("\n");
    return 0;
}

