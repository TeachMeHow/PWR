#include <conio.h>
#include <iostream>

int main() {
  int count;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> count;
    for (int i = 0; i < count; i++) {
      std::cout << "-";
    }
    _getch();
    return 0;
}
