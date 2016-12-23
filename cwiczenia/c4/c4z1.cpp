#include <stdio.h>
#include <conio.h>
#include <iostream>

int main() {
  int table[10];
  printf("%s\n", "Please enter 10 numbers:" );
  for (int i = 0; i < 10; i++) {
    std::cin >> table[i];
  }
  for (int i = 9; i >= 0; i--) {
    printf("%i ", table[9-i] );
  }
  _getch();
  return 0;
}
