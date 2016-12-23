#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
 int main() {
   int a,b;
   std::cout << "Please enter two numbers: ";
   std::cin >> a;
   std::cout << " ";
   std::cin >> b;
   std::cout << "\n";
   std::cout << "Sum: " << a + b << std::endl;
   std::cout << "Multiplication: " << a * b << std::endl;
   double c = pow(a,b);
   printf("Power: %f\n", c);
   printf("Sqrt of a: %f\n", sqrt(a) );
   getch();
   return 0;

 }
