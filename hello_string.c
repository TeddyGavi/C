#include<stdio.h>

int main(void)
{
  char name[25];
  printf("Enter a string: %s", name);
  scanf("%s", name);
  printf("Your name is: %s", name);
  return 0;
}
