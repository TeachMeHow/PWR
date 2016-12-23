#include <iostream>
#include <conio.h>
#include <stdio.h>

int main() {
  int a;
  printf("Please type an integer between 100 and 200: ");
  std::cin >> a;
  if (a < 150) {
    std::cout << "Small" << std::endl;
  } else if (a < 175) {
    std::cout << "Medium" << std::endl;
  } else {
    std::cout << "Big" << std::endl;
  }
  getch();
}
