#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> evenNumbers = {2, 4, 6, 8, 10};

  evenNumbers.push_back(12);
  for (int num: evenNumbers)
  {
    cout << num << endl;
  }
}