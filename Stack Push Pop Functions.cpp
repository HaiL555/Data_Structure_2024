#include <stdio.h>
int push(int st[], int top, int value, int n);
int pop(int st[], int top);
void display(int st[], int top) ;
int main()
{
  int n, value, top = -1, choice;
  printf("Enter size of the stack: ");
  scanf("%d", &n);
  int st[n]; // Declare the stack array (using st instead of stack)
  char c;
  printf("Do you want to push or pop(y/n): ");
  scanf(" %c", &c);
  while (c=='y' || c=='Y') 
  {
    printf("\nEnter 1 to Push Element\n");
    printf("Enter 2 to Pop Element\n");
    printf("Enter 3 to Exit\n");
    int ch;
    scanf("%d",&ch);
    printf("\n");
    switch(ch) 
	{
      case 1: // Push
        printf("Enter value to push: ");
        scanf("%d", &value);
        top = push(st, top, value, n);
        break;
        
      case 2: // Pop
        top = pop(st, top);
        break;
        
      case 3: // Exit
        printf("Exiting...\n");
        break;
        
      default:
        printf("Invalid choice\n");
    }
      printf("Do you want to continue(y/n): ");
      scanf(" %c", &c);
    }
  if (top >= 0) 
  {
    display(st, top);
  } 
  else 
  {
    printf("Stack is empty.\n");
  }
  return 0;
}

int push(int st[], int top, int value, int n)
 {
  if (top >= n - 1) 
  {
    printf("Stack Overflow\n");
  } 
  else 
  {
    top++;
    st[top] = value;
    printf("Pushed element: %d\n", value);
  }
  return top;
}

// Function to pop a value from the stack.
int pop(int st[], int top)
 {
  if (top == -1)
   {
    printf("Stack Underflow\n");
  } 
  else 
  {
    printf("Popped element: %d\n", st[top]);
    top--;
  }
  return top;
}

// Function to display the elements of the stack
void display(int st[],int top) 
{
  printf("Stack: ");
  for (int i = 0; i <= top; i++) 
  {
    printf("%d ", st[i]);
  }
  printf("\n");
}


