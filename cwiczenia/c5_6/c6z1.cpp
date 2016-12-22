#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  int * tab;
  printf("How big do you want your array to be?");
  scanf("%i", &n);
  tab = (int*) calloc(n, sizeof(int));
  int * w = tab;
  for(size_t i(0); i<n; i++, w++)
  {
    *w = i;
  }
  printf("\n");
  w = tab;
  for(; w-tab < n; w++)
  {
    printf("%i\n", *w);
  }
  free(tab);
  _getch();
  return 0;
}
