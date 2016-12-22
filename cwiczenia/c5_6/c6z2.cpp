#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <new>
#include "c6z2.h"
using namespace std;

int main()
{
  int n, choice = -1;
  int * tab = NULL;
  printf("How big do you want your array to be?");
  scanf("%i", &n);
  tab = new int [n];
  if(tab == NULL)
  {
    printf("Error");
    return 1;
  }
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
  printf("What do you want to do now?\n\
  1) Change array size\n\
  2) Add a cell at the end\n\
  3) Insert a cell in between\n\
  4) Delete chosen cell\n");
  while(choice != 0)
  {
    scanf("%i", &choice);
    switch(choice)
    {
      case 1 : tab = size_change(tab, n);
      read(tab, n);
      break;
      case 2 : tab = add_cell(tab, n);
      read(tab, n);
      break;
      case 3 : tab = append_cell(tab, n);
      read(tab, n);
      break;
      case 4 : tab = delete_cell(tab,n);
      read(tab, n);
      break;
    }
    ;
  }
  delete [] tab;
  _getch();
  return 0;
}
