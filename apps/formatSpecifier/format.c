#include <stdio.h>
#include <stdbool.h>

void operation()
{
  int num1 = 10;
  int num2 = 100;
  int num3 = -1000;

  printf("%+d\n", num1);
  printf("%+d\n", num2);
  printf("%+d\n", num3);
}
int main()
{
  char name[] = "aizen";
  char grade = 'A';
  int age = 21;
  float price = 13.923;
  double pi = 3.1415937394;
 
  printf("%s\n", name);
  printf("%c\n", grade);
  printf("%04d\n", age);
  printf("%.f\n", price);
  printf("%.lf\n", pi);

  operation();
  return 0;
}
