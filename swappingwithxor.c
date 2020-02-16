#include <stdio.h>
int swap (int x,int y)
{
  x ^= y;
  y ^= x;
  x ^= y;
  printf("The first number after swapping : %d\n",x);
  printf("The second number after swapping : %d",y);
}

int main()
{
  int num1,num2;
  printf("Enter the first number : ");
  scanf("%d",&num1);
  printf("Enter the second number : ");
  scanf("%d",&num2);
  printf("The first number : %d\n",num1);
  printf("The second number : %d\n",num2);
  swap(num1,num2);    
}
