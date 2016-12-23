#include <conio.h>
#include <iostream>

int main(){
  int a,min,max;
  char x;
  std::cout << "Please enter a number: ";
  std::cin >> min;
  do {
    std::cout << "Are you finished? \n(t) Yes \n(n) No\n" << std::endl;
    std::cin >> x;
    std::cout << "Please enter a number: ";
  } while(x != 't');
  std::cout << "Min: " << min << "\nMax: " << max << std::endl;
  _getch();
  return 0;
}
