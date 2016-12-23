#include <conio.h> // getch
#include <stdio.h> // printf scanf
int main() {
  char a [80];
  int b;
  float c;
  printf("Word: ");
  scanf("%79s", &a);
  printf("Integer: ");
  scanf("%i", &b);
  printf("Float: ");
  scanf("%f", &c);
  printf("%s %i %f",a,b,c);
  getch();
  return 0;
}
