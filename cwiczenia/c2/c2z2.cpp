#include <iostream>
#include <conio.h>
#include <stdio.h>

int main() {
  int a;
  int b=0;
    do {
      printf("Please type an integer between 100 and 200: ");
      std::cin >> a;
    if (a < 150 && !(a < 100)) {
    std::cout << "Small" << std::endl;
    break;
  } else if (!(a <150) && a < 175) {
    std::cout << "Medium" << std::endl;
    break;
  } else if( !(a < 175) && a < 200) {
    std::cout << "Big" << std::endl;
    break;
  } else {
    std::cout << "You have typed a wrong number!" << std::endl;
    b=1;
  }
} while (b=1);
  getch();
}
