#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void read(string &text, size_t &pad, char &a);
void print(string &text, char a, size_t pad);

int main()
{
  string text;
  size_t pad;
  char a;
  read(text, pad, a);
  print(text, a, pad);

  _getch();
  return 0;

}
void read(string &text, size_t &pad, char &a)
{
  cout << "What padding size do you want? ";
  cin >> pad;
  cout << endl;
  cout << "What do you want to frame your text in? ";
  cin >> a;
  cout << endl;
  cout << "Please enter text you want to frame: ";
  cin >> text;
  cout << endl << endl;
}
void print(string &text, char a, size_t pad)
{
  int row(0);
  row = 3 + 2*pad;
  string spaces(text.size(), ' ');
  string padding(pad, ' ');
  string second = a + padding + spaces + padding +a;
  string third = a + padding + text + padding + a;
  string first(second.size(), a);
  for(size_t i = 0; i < row; i++)
  {
    if(i == 0 || i == row - 1)
    {
      cout << first << endl;
    }
    else if(i != pad + 1)
    {
      cout << second << endl;
    }
    else if(i == pad + 1)
    {
      cout << third << endl;
    }
  }

}
