#include <iostream>
#include <conio.h>

int main() {
  int a = _getch();
  int b;
  if (!(a<48)&&a<=57) {
    b=0;
  } else if (!(a<65)&&a<=90) {
    b=1;
  } else if (!(a<97&&a<=122)) {
    b=2;
  }
  switch (b) {
    case 0: std::cout << "Number" << std::endl;
    break;
    case 1: std::cout << "Upper case" << std::endl;
    break;
    case 2: std::cout << "Lower case" << std::endl;
    break;
  }
  _getch();
  return 0;
}
