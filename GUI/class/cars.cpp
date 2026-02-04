#include <iostream>
#include <string.h>
using namespace std;

class CarClass
{
public:
  string name;
  string company;
  int year;

  CarClass(string x, string y, int z);
};

CarClass::CarClass(string x, string y, int z)
{
  name = x;
  company = y;
  year = z;
}
int main()
{

  CarClass car("Lambo
    ", "Omoooo", 2040);
  cout << car.name << endl
       << car.company << endl
       << car.year << endl;

  int scores[5] = {85, 90, 78, 92, 88}; // Initialization [cite: 178]
  int sum = 0;

  for (int i = 0; i < 5; i++)
  {
    sum += scores[i]; // Add each element to sum
  }

  cout << "Total Sum: " << sum << endl;
  return 0;
}