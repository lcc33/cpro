#include <stdio.h>
#include <math.h>

void condition()
{
  int myAge = 221;
  int bossAge = 40;
  int level = 12;
  if (myAge > bossAge)
  {
    printf("I am way older than the boss");
  }
  else
  {
    printf("The boss is older than me");
  }

  if (level<= 20){
    level++;
    printf("\n You have leveled up to %d", level);
  }
  else
  {
    printf("\n You have reached the maximum level");
  }
}

int main()
{
  int x = 2;
 int y = 10;
  int z = 1;
  printf("%d\n", z);
  z = x + y;
  printf("%d\n  ", z);
  int sub = y - x;
  printf("%d\n  ", sub);
  int multiple = x * y;
  printf("%d\n  ", multiple);
  int div = y % 6;
  printf("%d\n ", div);

  condition();

  return 0;
}
