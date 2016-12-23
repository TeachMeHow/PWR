#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
int main() {
  std::string a;
  int b;
  float c;
  std::cout << "Word: " ;
  std::getline(std::cin, a);
  std::cout << "Integer: " ;
  std::cin >> b;
  std::cout << "Float: " ;
  std::cin >> c;
  std::cout << a << " " << b << " " << c << std::endl;
  getch();
  return 0;
}
