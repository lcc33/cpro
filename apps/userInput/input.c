#include <stdio.h>
#include <string.h>
int main()
{
  char name[30] = "";
  int age = 0;
  float cgpa = 0;
  char grade;

  printf("How old are you: ");
  scanf("%d", &age);

  printf("What is your cgpa: ");
  scanf("%f", &cgpa);

  printf("what was your grade in math: ");
  scanf(" %c", &grade);

  getchar();
  printf("What is your name: ");
  fgets(name, 30, stdin);
  name[strlen(name) -1] = '\0';

  printf("My name is %s\n", name);
  printf("I am %d years old \n", age);
  printf("I have a %.1f cgpa\n", cgpa);
  printf("I had an %c in maths last semester\n", grade);
  return 0;
}