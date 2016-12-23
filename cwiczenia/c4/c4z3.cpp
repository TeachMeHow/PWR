#include <conio.h>
#include <stdio.h>
#include <iostream>

bool AreSame(float a[]);
int main() {
  float table[10];
  printf("%s ", "Please enter 10 numbers:");
  for (int i = 0; i < 10; i++) {
    std::cin >> table[i];
  }
  if (AreSame(table) == true) printf("%s\n", "There are at least 2 identical numbers.");
  else printf("%s\n", "There are no identical numbers." );
  _getch();
  return 0;
}
bool AreSame (float a[]){
  int b,c;
  for (int i = 0; i < 9; i++) {
    b = a[i];
     for (i = i+1; i < 10; i++) {
       c=a[i];
       if (b == c) break;
     }
     if (b == c) return true;
  }
  return false;
}
