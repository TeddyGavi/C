#include<stdio.h>

int main(void)
{
  char name[25];
  int num;
  printf("Type a number: \n");
  scanf("%d", &num);
  printf("Your number is: %d", num);

  scanf("%s", &name);
  printf("Your name is: %s", name);
  return 0;
}
