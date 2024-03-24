#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
int main() 
{
    struct node *head,*newnode,*tmp,*prevnode,*ptmp;
    int count=0,loc;
    char ch;
    head=NULL;
    printf("Do you want to insert a node (y/n): ");
    scanf("%c",&ch);
    while (ch=='y'||ch=='Y') 
	{
        newnode=(struct node *)malloc(sizeof(struct node));
        if(newnode==NULL)
		 {
            printf("No Space Available... Bye Bye\n");
            break;
        }
        printf("Enter the Value of the node: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL) 
		{
            head=newnode;
        } 
		else 
		{
            printf("1. Insert at the beginning\n");
            printf("2. Insert at the end\n");
            printf("3. Insert after a specific element\n");
            printf("4. Insert after a specific location number\n");
            printf("Enter your choice: ");
            int choice;
            scanf("%d",&choice);
            switch (choice) 
			{
                case 1: // Insertion At The Beginning Of LL
                    newnode->next=head;
                    head=newnode;
                    break;

                case 2: // Insertion At the End
                    tmp=head;
                    while(tmp->next!=NULL) {
                    	
                        tmp=tmp->next;
                    }
                    tmp->next=newnode;
                    break;

                case 3: // Insertion After a Specific Element
                    printf("Enter the element to insert after: ");
                    int value;
                    scanf("%d",&value);
                    tmp=head;
                    while(tmp!=NULL && tmp->data!=value) 
					{
                        tmp=tmp->next;
                    }
                    if (tmp!=NULL) 
					{
                        newnode->next=tmp->next;
                        tmp->next=newnode;
                    } else 
					{
                        printf("Element not found(T_T)\n");
                    }
                    break;

                case 4: // Insertion After a Specific Location Number
                    printf("Enter the location number from Indexing of 0: ");
                    scanf("%d",&loc);
                    count=0;
                    tmp=head;
                    while(tmp!=NULL && count<loc) 
					{
                        count++;
                        prevnode=tmp;
                        tmp=tmp->next;
                    }
                    if(tmp!=NULL) 
					{
                        newnode->next=tmp;
                        if(loc==0)
						{
                            head=newnode;
                        } 
						else 
						{
                            prevnode->next=newnode;
                        }
                    } 
					else 
					{
                        printf("Invalid location(Y_Y).\n");
                    }
                    break;

                default:
                    printf("Invalid choice.\n");
            }
        }
        printf("Do you want to continue (y/n): ");
        scanf(" %c",&ch);
    }
    tmp=head;
    printf("The Singly Linked list is: ");
    while (tmp!=NULL) 
	{
        printf("%d ",tmp->data);
        tmp=tmp->next;
    }
    printf("\n\n");
    printf("Do you Want to Delete A Node(y/n): ");
    char del;
    scanf(" %c",&del);
    while(del=='y'||del=='Y') 
	{
        if(head==NULL) 
		{
            printf("No Node Present In the Linked List\n");
        } 
		else 
		{
            printf("1. Deletion at the beginning\n");
            printf("2. Deletion at the end\n");
            printf("3. Deletion after a specific element\n");
            printf("Enter your choice: ");
            int cho;
            scanf("%d",&cho);
            switch (cho) 
			{
                case 1: // Deletion of Node At The Beginning
                    tmp=head;
                    head=head->next;
                    free(tmp);
                    break;

                case 2: // Deletion of Node At The End
                    tmp=head;
                    while (tmp->next->next!=NULL) 
					{
                        tmp=tmp->next;
                    }
                    free(tmp->next);
                    tmp->next=NULL;
                    break;

                case 3: // Deletion after a Specific Element
                    printf("Enter the element to delete after: ");
                    int value;
                    scanf("%d",&value);
                    tmp=head;
                    while(tmp!=NULL && tmp->data!=value) 
					{
                        tmp=tmp->next;
                    }
                    if(tmp!=NULL && tmp->next!=NULL) 
					{
                        struct node *tmpnxt=tmp->next;
                        tmp->next=tmpnxt->next;
                        free(tmpnxt);
                    } 
					else 
					{
                    tmp=head;
					while(tmp->next!=NULL)
					{
						ptmp=tmp;
						tmp=tmp->next;
					}
						free(tmp);
						ptmp->next=NULL;
					}	
                	break;

                default:
                    printf("Invalid choice.\n");
            }
        }
        printf("Do you Want to Delete A Node(y/n): ");
        scanf(" %c",&del);
    }
    tmp=head;
    printf("The Singly Linked List After Deletion is:\n");
    while(tmp!=NULL) 
	{
        printf("The Value Is:%d\n",tmp->data);
        printf("The Next Is :%p\n",tmp->data);
        tmp=tmp->next;
    }
    printf("\n\n");
    return 0;
}
