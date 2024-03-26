#include <stdio.h>

int i;

void insert(int ar[] , int *n , int MAX);

void deletion(int ar[] , int MAX ,int **n);

int main()

{

int n,MAX;

printf("Enter MAX value of Array: ");

scanf("%d",&MAX);

int ar[MAX];

printf("Enter No. of Elements In The Array: ");

scanf("%d",&n);

if(MAX<n)

{

printf("No. Of Elements to be inserted cannot be greater than the MAX Size..");

}

else

{

printf("Enter Array Elements:\n");

for(i=0;i<n;i++)

{

scanf("%d",&ar[i]);

}

printf("Array Elements Are: ");

for(i=0;i<n;i++)

{

printf("%d ",ar[i]);

}

printf("\n");

insert(ar,&n,MAX);

}

}

void insert(int ar[] , int *n, int MAX)

{

printf("Do you Want to insert an Element?(y/n): ");

char ins;

scanf(" %c",&ins);

if(ins=='y'||ins=='Y')

{

char c;

int ch;

printf("Make your selection...but beware the consequences\n");

printf("Enter 1 to Insert Element in the Beginning\n");

printf("Enter 2 to Insert Element in The End\n");

printf("Enter 3 to Insert Element At a Particular Location\n");

scanf("%d",&ch);

switch(ch)

{

case 1: //Insertion At the Beginning

printf("You Entered Insertion At the Beginning..\n");

printf("Enter Element to Enter: ");

int data;

scanf("%d",&data);

for(i=*n;i>0;i--)

{

ar[i]=ar[i-1];

}

++(*n);

ar[0]=data;

printf("Array After Insertion At Beginning: ");

for(i=0;i<*n;i++)

{

printf("%d ",ar[i]);

}

printf("\n");

printf("Value Of n is now: %d",*n);

printf("\n");

printf("Do you Want to Delete an Element(y/n): ");

scanf(" %c",&c);

if(c=='y'||c=='Y')

{

deletion(ar , MAX , &n);

}

else if(c=='n'||c=='N')

{

printf("Exiting....");

}

else

{

printf("INVALID CHOICE (T-T)");

}

break;

case 2: //Insertion At the End

printf("You Entered Insertion At the End..\n");

printf("Enter Element to Enter: ");

scanf("%d",&data);

ar[(*n)]=data;

++(*n);

printf("Array After Insertion At End: ");

for(i=0;i<*n;i++)

{

printf("%d ",ar[i]);

}

printf("\n");

printf("Value Of n is now: %d",*n);

printf("\n");

printf("Do you Want to Delete an Element(y/n): ");

scanf(" %c",&c);

if(c=='y'||c=='Y')

{

deletion(ar , MAX , &n);

}

else if(c=='n'||c=='N')

{

printf("Exiting....");

}

else

{

printf("INVALID CHOICE (T-T)");

}

break;

case 3: //Insertion At Particular Location

printf("You Entered Insertion At a Particular Location..\n");

int loc;

printf("Enter the position where you want to insert the element: ");

scanf("%d",&loc);

if(loc<0||loc>*n)

{

printf("Invalid position.Sorry(T-T)\n");

}

else

{

printf("Enter Element to Insert: ");

scanf("%d",&data);

for(i=*n;i>loc;i--)

{

ar[i]=ar[i - 1];

}

ar[loc]=data;

++(*n);

printf("Array After Insertion At Particular Position Is: ");

for (int i = 0; i < *n; i++)

{

printf("%d ",ar[i]);

}

printf("\n");

printf("Value Of n is now : %d\n",*n);

printf("\n");

}

printf("Do you Want to Delete an Element(y/n): ");

scanf(" %c",&c);

if(c=='y'||c=='Y')

{

deletion(ar , MAX , &n);

}

else if(c=='n'||c=='N')

{

printf("Exiting....");

}

else

{

printf("INVALID CHOICE (T-T)");

}

break;

default:

printf("INVAlID...");

break;

}

}

else

{

deletion(ar , MAX , &n);

}

}

void deletion(int ar[] , int MAX ,int **n)

{

int ch,i;

printf("Make your selection...but beware the consequences\n");

printf("Enter 1 to Delete Element in the Beginning\n");

printf("Enter 2 to Delete Element in The End\n");

printf("Enter 3 to Delete Element At a Particular Location\n");

scanf("%d",&ch);

switch(ch)

{

case 1: //Deletion From the Beginning

printf("You Entered Deletion At the Beginning..\n");

if(*n==0)

{

printf("Array is empty. Nothing to delete.\n");

}

else

{

printf("Element at the Beginning Is: %d\n",ar[0]);

printf("Are you sure you want to delete? (y/n): ");

char c;

scanf(" %c",&c);

if(c=='y'||c=='Y')

{

// Shift elements to the left

for(i = 0; i < **n - 1; i++)

{

ar[i]=ar[i + 1];

}

(**n)--;

printf("Element Deleted from the beginning.\n");

printf("Array After Deletion From the Beginning: ");

for (int i=0;i<**n;i++)

{

printf("%d ",ar[i]);

}

printf("\n");

printf("Value Of n is now : %d",**n);

}

else if(c=='n'||c=='N')

{

printf("Will Not Delete. Exiting...\n");

}

else

{

printf("INVALID CHOICE (T-T)\n");

}

}

break;

case 2: //Deletion From the End

printf("You Entered Deletion At the End..\n");

if(**n==0)

{

printf("Array is empty. Nothing to delete.\n");

}

else

{

printf("Element at the End Is: %d\n",ar[**n - 1]);

printf("Are you sure you want to delete?(y/n): ");

char c;

scanf(" %c",&c);

if(c=='y'||c=='Y')

{

(**n)--;

printf("Element deleted from the end.\n");

printf("Array After Deletion From the End: ");

for (int i=0;i<**n;i++)

{

printf("%d ",ar[i]);

}

printf("\n");

printf("Value Of n is now : %d",**n);

}

else if(c=='n'||c=='N')

{

printf("Will Not Delete. Exiting...\n");

}

else

{

printf("INVALID CHOICE (T-T)\n");

}

}

break;

case 3: //Deletion From a Prticular Location

printf("You Entered Deletion At a Particular Location..\n");

if(**n==0)

{

printf("Array is empty. Nothing to delete.\n");

}

else

{

int loc;

printf("Enter the position of the element you want to delete: ");

scanf("%d",&loc);

if (loc<0||loc>=**n)

{

printf("Invalid position. Element not found.\n");

}

else

{

printf("Element at position %d Is: %d\n",loc,ar[loc]);

printf("Are you sure you want to delete? (y/n): ");

char c;

scanf(" %c",&c);

if(c=='y'||c=='Y')

{

// Shift elements to the left

for(i=loc;i<**n-1; i++)

{

ar[i]=ar[i + 1];

}

(**n)--;

printf("Element deleted from position %d.\n", loc);

for (int i=0;i<**n;i++)

{

printf("%d ",ar[i]);

}

printf("\n");

printf("Value Of n is now : %d",**n);

}

else if(c=='n'||c=='N')

{

printf("Will Not Delete. Exiting...\n");

}

else

{

printf("INVALID CHOICE (T-T)\n");

}

}

}

break;

default:

printf("INVALID CHOICE (T-T)\n");

break;

}

}
