#include <iostream>
using namespace std;

void modifyValue(int &num) {
    num = 10;
    cout << "Inside function: " << num << endl;
}

int main() {
    int number = 5;
    modifyValue(number);
    cout << "After function call: " << number << endl;
}