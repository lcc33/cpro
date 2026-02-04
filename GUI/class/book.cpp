#include <iostream>
#include <string>
using namespace std;

class BookClass
{
public:
  string title;
  string author;
  int year;

  void displayBookInfo()
  {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
  };
};

int main()
{
  BookClass book1;

  cout << "Enter the book title: ";
  getline(cin, book1.title);
  cout << "Enter the author name: ";
  getline(cin, book1.author);
  cout << "Enter the publication year: ";
  cin >> book1.year;
  book1.displayBookInfo();

  cout << "Another book" << endl;

  BookClass book2;

  cout << "Enter the author name: ";
  getline(cin, book2.author);
  cout << "Enter the book title: ";
  getline(cin, book2.title);
  cout << "Enter the publication year: ";
  cin >> book2.year;
  book2.displayBookInfo();
}