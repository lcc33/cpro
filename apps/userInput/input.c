#include <stdio.h>

int main()
{
  char name[30] = "";
  int age = 0;
  float cgpa = 0;
  char grade;

  printf("What is your name: ");
  scanf("%s", name);

  printf("How old are you: ");
  scanf("%d", &age);

  printf("What is your cgpa: ");
  scanf("%f", &cgpa);

  printf("what was your grade in math: ");
  scanf(" %c", &grade);

  printf("%s\n", name);
  printf("%d\n", age);
  printf("%f\n", cgpa);
  printf("%c\n", grade);
  return 0;
}