#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insert(struct node **head, int item);
void deleteNode(struct node **head);
int main() 
{
    struct node *front = NULL;
    int data;
    char choice = 'y';  //choice to insert or not
    while (choice == 'y' || choice == 'Y')
    {
        printf("Enter data to insert: ");
        scanf("%d", &data);
        insert(&front, data);
        printf("Do you want to insert more data? (y/n): ");
        scanf(" %c", &choice); 
    }
    if (front != NULL) 
    {
        printf("Front element: %d\n", front->data);
    } 
    else 
    {
        printf("The linked list is empty\n");
    }
    printf("Do you want to Delete(y/n): ");
    char c;
    scanf(" %c", &c);
    while (c == 'y' || c == 'Y')
    {
        deleteNode(&front);
        printf("Do you want to continue Deleting(y/n): ");
        scanf(" %c", &c);
    }
    printf("Remaining elements in the list: "); // Print remaining elements in the list
    struct node *temp = front;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insert(struct node **head, int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) 
    {
        printf("OVERFLOW\n");
        return;
    }
    ptr->data = item;
    ptr->next = NULL;
    if (*head == NULL)
    {
        *head = ptr;
    } 
    else
    {
        struct node *temp = *head;
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
}

void deleteNode(struct node **head)
{
    if (*head == NULL)
    {
        printf("Underflow\n");
        return;
    }
    struct node *temp = *head;
    *head = (*head)->next;
    printf("Deleted element: %d\n", temp->data);
    free(temp);
}

