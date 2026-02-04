#include <iostream> // include iostream library into ur code
using namespace std;

int main()
{
  // switch
  switch (10)
  {
  case 1:
    cout << "Sunday";
    break;
  case 2:
    cout << "Monday";
    break;
  case 3:
    cout << "Tuesday";
    break;
  case 4:
    cout << "Wednesday";
    break;
  case 5:
    cout << "Thursday";
    break;
  case 6:
    cout << "Friday";
    break;
  case 7:
    cout << "Saturday";
    break;

  default:
    cout << "No day found";
    break;
  }
}