#include <iostream>
using namespace std;

class studentClass
{
public:
  int matricNum;
  string name;
  void displayInfo()
  {
    cout << "Matriculation Number: " << (matricNum << endl;
    cout << "Name: " << name << endl;
  }
};

int main()
{
  studentClass student1;

  cout << "Enter your matriculation number: ";
  cin >> student1.`matricNum;
  cout << "Enter your name: ";
  cin >> student1.name;
  student1.displayInfo();

  cout << endl
       << "Another student" << "\n\n";

  studentClass student2;
  cout << "Enter your matriculation number: ";
  cin >> student2.matricNum;
  cout << "Enter your name: ";
  cin >> student2.name;
  student2.displayInfo();
}