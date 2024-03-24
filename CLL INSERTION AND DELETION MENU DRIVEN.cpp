#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};

int main() 
{
    struct node *head, *newnode, *tmp;
    head = NULL;
    printf("Do you want to insert a node (y/n): ");
    char ch;
    scanf(" %c", &ch);
    while (ch == 'y' || ch == 'Y') 
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL) 
        {
            printf("No Space Available...Bye Bye\n");
            break;
        }
        printf("Enter the Value of the node: ");
        int val;
        scanf("%d", &val);
        newnode->data=val;
        if (head == NULL) 
        {
            head = newnode;
            newnode->next = head; // Points back to itself to form a circular list
        } 
        else 
        {
            printf("1. Insert at the beginning\n");
            printf("2. Insert at the end\n");
            printf("3. Insert after a specific element\n");
            printf("Enter your choice: ");
            int choice;
            scanf("%d", &choice);

            switch (choice) 
            {
                case 1: // Insertion At The Beginning
                    {
                        newnode->next = head;
                        tmp = head;
                        while (tmp->next != head) 
                        {
                            tmp = tmp->next;
                        }
                        tmp->next = newnode;
                        head = newnode;
                    }
                    break;

                case 2: // Insertion At the End
                    {
                        tmp = head;
                        while (tmp->next != head) 
                        {
                            tmp = tmp->next;
                        }
                        tmp->next = newnode;
                        newnode->next = head;
                    }
                    break;

                case 3: // Insertion After a Specific Element
                    {
                        printf("Enter the element to insert after: ");
                        int value;
                        scanf("%d", &value);
                        tmp = head;
                        while (tmp->next != head && tmp->data != value) 
                        {
                            tmp = tmp->next;
                        }
                        if (tmp->data != value) 
                        {
                            printf("Element not found(T_T)\n");
                            free(newnode);
                            break;
                        }
                        newnode->next = tmp->next;
                        tmp->next = newnode;
                    }
                    break;

                default:
                    printf("Invalid choice.\n");
                    free(newnode);
                    break;
            }
        }
        printf("Do you want to continue (y/n): ");
        scanf(" %c", &ch);
    }
    // Print the circular linked list
    if (head != NULL) 
    {
        printf("The Circular Linked list is: ");
        tmp = head;
        do 
        {
            printf("%d ", tmp->data);
            tmp = tmp->next;
        } while (tmp != head);
        printf("\n\n");
    }

    // Deletion part
    printf("Do you Want to Delete A Node(y/n): ");
    char del;
    scanf(" %c", &del);
    while (del == 'y' || del == 'Y') 
    {
        if (head == NULL) 
        {
            printf("No Node Present In the Linked List\n");
            break;
        } 
        else 
        {
            printf("1. Deletion at the beginning\n");
            printf("2. Deletion at the end\n");
            printf("3. Deletion of a specific element\n");
            printf("Enter your choice: ");
            int cho;
            scanf("%d", &cho);
            switch (cho) 
            {
                case 1: // Deletion at The Beginning
                    {
                        tmp = head;
                        while (tmp->next != head) 
                        {
                            tmp = tmp->next;
                        }
                        tmp->next = head->next;
                        free(head);
                        head = tmp->next;
                    }
                    break;

                case 2: // Deletion at the End
                    {
                        tmp = head;
                        while (tmp->next->next != head) 
                        {
                            tmp = tmp->next;
                        }
                        free(tmp->next);
                        tmp->next = head;
                    }
                    break;

                case 3: // Deletion of a Specific Element
                    {
                        printf("Enter the element to delete: ");
                        int value;
                        scanf("%d", &value);
                        tmp = head;
                        while (tmp->next != head && tmp->next->data != value) 
                        {
                            tmp = tmp->next;
                        }
                        if (tmp->next->data != value) 
                        {
                            printf("Element not found.\n");
                            break;
                        }
                        struct node *temp = tmp->next;
                        tmp->next = temp->next;
                        free(temp);
                    }
                    break;

                default:
                    printf("Invalid choice.\n");
                    break;
            }
        }
        printf("Do you Want to Delete A Node(y/n): ");
        scanf(" %c", &del);
    }
    // Print the circular linked list after deletion
    if (head != NULL) 
    {
        printf("The Circular Linked list after deletion is:\n");
        tmp = head;
        do 
        {
        	printf("The Value Is:%d\n", tmp->data);
        	printf("The Next Is:%p\n", tmp->next);
            tmp = tmp->next;
        } while (tmp != head);
        printf("\n\n");
    }
    return 0;
}
