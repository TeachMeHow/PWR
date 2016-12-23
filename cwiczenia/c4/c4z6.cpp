#include <conio.h>
#include <stdio.h>
#include <iostream>

#define SIZE 10
int main()
{
  // give 10 numbers
  // print 10 numbers
  float tab[SIZE];
  printf("%s\n", "Please enter 10 real numbers: " );
  for (float* p=tab; p<tab+SIZE; p++)
  {
    scanf("%f\n", p);
    //std::cin >> *p;
  }
  for (float* p = tab; p < tab+SIZE; p++) {
    std::cout << *p << ' ';
  }
_getch();
return 0;

}
