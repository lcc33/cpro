#include <iostream>
using namespace std;

int main()
{
  // pointers
  int fruit = 10;
  int *ptr = &fruit; // ptr now holds the memory address of fruit

  cout << ptr << endl;  // Output: 0x7ffd... (the memory address)
  cout << *ptr << endl; // Output: 10 (Dereferencing: "Go to the address and get the value")

  *ptr = 20; // Changes the original 'fruit' variable to 20

  // references

  int original = 5;
  int &ref = original; // 'ref' is now an alias for 'original'

  ref = 10; // This changes 'original' to 10 because they are the same [cite: 79]

  cout << original << endl; // Output: 10 [cite: 80, 85]
}