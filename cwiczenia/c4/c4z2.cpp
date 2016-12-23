#include <conio.h>
#include <stdio.h>
#include <iostream>

float sum(float a[], int size);
float average(float a[], int size);
int main() {
  float table[10];
  printf("%s\n", "Please enter 10 real numbers: ");
  for (int i = 0; i < 10; i++) {
    std::cin >> table[i];
  }
  std::cout << sum(table, 10) << std::endl;
  std::cout << average(table, 10) << std::endl;
  _getch();
  return 0;
}
float sum(float a[], int size) {
  float b = 0;
  for (int i = 0; i < size; i++) {
    b += a[i];
  }
  return b;
}
float average(float a[], int size) {
  float b = 0;
  b = sum(a,size)/10;
  return b;
}
