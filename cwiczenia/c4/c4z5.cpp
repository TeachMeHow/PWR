#include <conio.h>
#include <stdio.h>
#include <iostream>

int main()
{
  char c;
  int n;
  double f;
  char * x;
  int * y;
  double * z;
  x = &c;
  y = &n;
  z = &f;
  for (int i = 0; i < 3; i++)
  {
    switch (i) {
      case 0:
      printf("%s\n", "Please enter a character: " );
      std::cin >> *x;
      std::cout << '\n';
      break;
      case 1:
      printf("%s\n", "Please enter an integer: " );
      std::cin >> *y;
      std::cout << '\n';
      break;
      case 2:
      printf("%s\n", "Please enter a real number: " );
      std::cin >> *z;
      std::cout << '\n';
      break;
  }

}
printf("%c %i\n", *x, x );
std::cout << *y << ' '<< int(y) << '\n';
std::cout << *z << ' '<< int(z) << '\n';

  _getch();
  return 0;
}
