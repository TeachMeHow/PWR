#include <conio.h>
#include <iostream>

int main() {
  int i=1;
  while (i<101) {
    std::cout << i*2 << " ";
    i++;
  }
  _getch();
  return 0;
}
