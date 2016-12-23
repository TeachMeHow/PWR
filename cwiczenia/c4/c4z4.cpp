#include <conio.h>
#include <stdio.h>
#include <iostream>

#define N 10
int main() {
  int table[10];
  for (int c = 0;  c < 10;  c++) {
    std::cin >> table[c];
  }
  for (int i = 0; i < 10; i++) {
    for (int a = 0; a < 10; a++) {
      printf("%i ", table[a] );
    }
    for (int b = 0; b < 10-1; b++) {
      table[9-b]=table[9-1-b];
    }
    std::cout << std::endl;
  }
  _getch();
  return 0;
}
