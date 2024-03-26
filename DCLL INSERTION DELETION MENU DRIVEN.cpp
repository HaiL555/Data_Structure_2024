#include <stdio.h>
#include <stdlib.h>
struct node 
{
    struct node *prev;   //Structure to create a node containing prev of node, next of node and the data in the node.
    int data;
    struct node *next;  //pointer type next which is of type struct node
};
int main() 
{
    struct node *head,*newnode,*tmp,*ptmp;   //pointer type head,newnode,tmp which are of type struct node.
    int count=0, loc;
    head=NULL;   //Initially head is empty
    printf("Do you want to insert a node (y/n): ");    //Asks the user wether he wants to enter a node or not
    char ch;
    scanf("%c",&ch);
    while(ch=='y'||ch=='Y')   
	{
        newnode=(struct node *)malloc(sizeof(struct node));  //Checks wether memory is avaiable for the insertion of node
        if(newnode==NULL) 
		{
            printf("No Space Available...Bye Bye\n");
        }
        printf("Enter the Value of the node: ");
        scanf("%d",&newnode->data);
        if (head==NULL)   //If no node is present in the Doubly circular linked list
		{
            newnode->prev=newnode;
            newnode->next=newnode;
            head=newnode;
        } 
		else
		{
			printf("1. Insert at the beginning\n");    
            printf("2. Insert at the end\n");
            printf("3. Insert after a specific element\n");
            printf("4. Insert after a specific location number\n");
            printf("Enter your choice: ");   //Asks the user for his choice
            int choice;
            scanf("%d",&choice);
            switch(choice) 
			{
                case 1:  //Insertion At The Beginning
                	
                    newnode->next=head;
                    newnode->prev=head->prev;
                    head->prev->next=newnode;
                    head->prev=newnode;
                    head=newnode;
                    break;
                    
                case 2:   //Insertion At the End
                	
                    newnode->next=head;
                    newnode->prev=head->prev;
                    head->prev->next=newnode;
                    head->prev=newnode;
                    break;
                    
                case 3:  //Insertion After a Specific Element
                	
                    printf("Enter the element to insert after: ");
                    int value;
                    scanf("%d",&value);
                    tmp=head;
                    while(tmp!=NULL && tmp->data!=value) /*checks till tmp is not NULL or tmp data is
				                                           not equal to value*/
					{
                        tmp=tmp->next;
                    }
                    if(tmp!=NULL) 
			//checks if tmp holds a valid memory address, and it's safe to access the value tmp is pointing to. 
					{
                        newnode->next=tmp->next;
                        newnode->prev=tmp;
                        tmp->next->prev=newnode;
                        tmp->next=newnode;
                    } 
					else 
					{
                        printf("Element not found(T_T)\n");
                    }
                    break;
                    
                case 4: //Insertion After a Specefic Location Number 
                
                    printf("Enter the location number from Indexing of 0: ");
    				scanf("%d",&loc);
    				count=0;
    				tmp=head;
    				while(tmp!=NULL && count<loc) 
					{
        			count++;
        			tmp=tmp->next;
   					}
    				if(tmp!=NULL) 
					{
       				newnode->next=tmp->next;
        			newnode->prev=tmp;
       				tmp->next->prev=newnode;
        			tmp->next=newnode;
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
        printf("Do you want to continue (y/n): ");  //Asks the user if he wants to continue Inserting
        scanf(" %c",&ch);
    }
    tmp=head;
    printf("The Doubly Circular Linked list is: ");
    do 
	{
        printf("%d ",tmp->data);   //Traverses through the list and prints the List
        tmp=tmp->next;
    } while(tmp!=head);
    printf("\n\n");
    printf("Do you Want to Delete A Node(y/n): ");
    char del;
    scanf(" %c",&del);   //Asks the user if he wants to delete a node from the list
    while(del=='y'||del=='Y') 
	{
        if(head==NULL)   // if no node is present in the list
		{
            printf("No Node Present In the Linked List\n");
        } 
		else if(head->next==head) //If only One Node is Present
		{
            free(head);
            printf("Deleted the Only Existing Node..\n");
            head = NULL;
        } 
		else 
		{
           	printf("1. Deletion at the beginning\n");
            printf("2. Deletion at the end\n");
            printf("3. Deletion of a specific element\n");
            printf("Enter your choice: ");
            int cho;
            scanf("%d", &cho);  //Asks user for his choice
            switch (cho) 
			{
                case 1:  //Deletion of Node At The Beginning
                    tmp=head;
                    head=head->next;
                    head->prev=tmp->prev;
                    tmp->prev->next=head;
                    free(tmp);
                    break;
                    
                case 2: //Deletion of Node At The End
                    tmp=head->prev;
                    head->prev=tmp->prev;
                    tmp->prev->next=head;
                    free(tmp);
                    break;
                    
                case 3:
                //Asks the user the value to delete the node containing that value
                printf("Enter the element to delete: "); 
                int value;
  				scanf("%d", &value);
				if (head!=NULL && head->data==value) 
				{ //If value foung at head or first node
				tmp=head->next;
				tmp->prev=head->prev;
				head->prev->next=tmp;
				free(head);
				head=tmp;
    			}
				tmp=head;
    			while(tmp!=NULL && tmp->data!=value)  
				{ //if found somewhere else other than head
			    ptmp=tmp;
        		tmp=tmp->next;
   				}
   				ptmp->next=tmp->next;
   				tmp->next->prev=ptmp;
    			break;
                    
                default:
                //If user choses Wrong Choice
                printf("Invalid choice.\n"); 
                    
            }
        }
        printf("Do you Want to Delete A Node(y/n): "); //Asks user if he wants to continue deleting
        scanf(" %c",&del);
    }
    tmp=head;
    printf("The Doubly Circular Linked List After Deletion is:\n");
    do 
	{
		printf("The Prev Is: %p\n",tmp->prev);
        printf("The Value Is: %d\n",tmp->data);  //Traverses the entire linked List And Prints it.
        printf("The Next Is: %p\n",tmp->next);
        tmp=tmp->next;
    } while(tmp!=head);
    printf("\n\n");
    return 0;
}
