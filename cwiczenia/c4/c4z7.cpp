#include <conio.h>
#include <stdio.h>
#include <iostream>

#define SIZE 5
float sum(float tab[SIZE]);
float avg(float tab[SIZE]);
int main()
{
  float a;
  float b;
  float tab[SIZE];
  for (float* p=tab;p<tab+SIZE; p++) {
    //printf("%s: ", i);
    scanf("%f\n", p );
  }
  printf("%f\n", sum(tab));
  printf("%f\n", avg(tab));
  _getch();
  return 0;
}
float sum(float tab[SIZE])
{
  float a;

  for(float* p=tab; p<tab+SIZE; p++)
  {
    a+=*p;
  }
  return a;
}
float avg(float tab[SIZE])
{
  float b = sum(tab);
  b = b/SIZE;
  return b;
}
