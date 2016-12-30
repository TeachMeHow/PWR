#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void read(string &text, size_t &vpad, size_t &hpad ,char &a);
void print(string &text, size_t &vpad, size_t &hpad ,char &a);

int main()
{
  string text;
  size_t vpad, hpad;
  char a;
  read(text, vpad, hpad, a);
  print(text, vpad, hpad, a);

  _getch();
  return 0;

}
void read(string &text, size_t &vpad, size_t &hpad ,char &a)
{
  cout << "What vertical padding size do you want? ";
  cin >> vpad;
  cout << "What horizontal padding size do you want? ";
  cin >> hpad;
  cout << endl;
  cout << "What do you want to frame your text in? ";
  cin >> a;
  cout << endl;
  cout << "Please enter text you want to frame: ";
  gets(text);
  cout << endl << endl;
}
void print(string &text, size_t &vpad, size_t &hpad ,char &a)
{
  int row(0);
  row = 3 + 2*vpad;
  string spaces(text.size(), '.');
  string padding(hpad, '.');
  string second = a + padding + spaces + padding +a;
  string third = a + padding + text + padding + a;
  string first(second.size(), a);
  for(size_t i = 0; i < row; i++)
  {
    if(i == 0 || i == row - 1)
    {
      cout << first << endl;
    }
    else if(i != vpad + 1)
    {
      cout << second << endl;
    }
    else if(i == vpad + 1)
    {
      cout << third << endl;
    }
  }

}
