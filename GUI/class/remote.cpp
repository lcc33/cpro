#include <iostream>
using namespace std;

// 1. THE ABSTRACT CLASS (The "Blank" Template)
class RemoteControl
{
public:
  // This '= 0' makes it a Pure Virtual Function.
  // It's like a sticky note saying: "ADD CODE HERE LATER".
  virtual void pressPowerButton() = 0;
};

// 2. THE CHILD CLASS (The "Actual" Remote)
class SamsungRemote : public RemoteControl
{
public:
  // We "fill in the blank" here. This is called Overriding.
  void pressPowerButton()
  {
    cout << "Samsung TV: Sending infrared signal 001... TV ON!" << endl;
  }
};

class SonyRemote : public RemoteControl
{
public:
  // Sony fills the blank with their own specific code.
  void pressPowerButton()
  {
    cout << "Sony TV: Sending bluetooth signal XB7... TV ON!" << endl;
  }
};

int main()
{
  // ERROR: RemoteControl myRemote;
  // You can't do this! You can't buy a "generic" remote that does nothing.
  string input;
  SamsungRemote mySamsung; // This works because the blank is filled!
  cout << "SamSung Power YES/NO?: ";
  cin >> input;
  if (input == "yes")
  {
    mySamsung.pressPowerButton();
  }
  else
  {
    cout << "power stays off" << endl;
  }

  SonyRemote mySony; // This also works!
  cout << "Sony Power YES/NO?: ";
  cin >> input;
  if (input == "no")
  {
    cout << "power stays off" << endl;
  }
  else
  {
    mySony.pressPowerButton();
  }
  return 0;
}