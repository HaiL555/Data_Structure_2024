#include <stdio.h>
int main() 
{
  int n;
  printf("Enter the total number of elements: ");
  scanf("%d", &n);
  int ar[n];
  printf("Enter the array elements: ");
  for (int i = 0; i < n; i++) 
  {
    scanf("%d", &ar[i]);
  }
  int min = ar[0] + ar[1];    // Taking Min sum of the firs 2 elements initially
  for (int i = 0; i < n; i++) 
  {
    for (int j = i + 1; j < n; j++) 
	{
      int Sum = ar[i] + ar[j];
      if (Sum < min) 
	  {
        min = Sum;
      }
    }
  }
  printf("The minimum sum of any two elements is: %d\n", min);
  return 0;
}
