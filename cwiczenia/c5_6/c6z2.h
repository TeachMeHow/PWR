#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <new>
using namespace std;

void read(int*tab, int  size)
{
  for(size_t i = 0; i < size; i++)
  printf("%i ", *(tab + i));
}
int* append_cell(int* tab, int &n)
{
  int p, number;
  cout << "Where do you want to insert your cell? ";
  cin >> p;
  cout << "What do you want to insert? ";
  cin >> number;
  int size = n+1;
  int *t = new int [size];
  for(size_t i = 0, j = 0; i<n; i++, j++)
  {
    if(j == p)
    {
      t[j] = number;
      ++j;
    }
    t[j] = tab[i];
  }
  ++n;
  delete [] tab;
  tab = t;
  return t;
}

int* add_cell(int* tab, int&n)
{
  n++;
  int *t = new int [n];
  for(size_t i = 0; i< n; i++)
  {
    if(i == n-1)
    cin >> t[i];
    else
    t[i] = tab[i];
  }
  delete [] tab;
  tab = t;
  return t;
}
int* size_change(int* tab, int &n)
{
  int a;
  scanf("%i", &a);
  n += a;
  int*t = new int [n];
  if(n<0)
  {
    for(size_t i = 0; i < n; i++)
    {
      *(t + i) = *(tab + i);
    }
  }
  else if (n>0)
  {
    for(size_t i = 0; i < n-a; i++)
    {
      *(t + i) = *(tab + i);
    }
    for(size_t i = n - a; i<n; i++)
    {
      *(t+i) = i;
    }
  }
  delete [] tab;
  tab = t;
  return t;
}
int* delete_cell(int* tab, int &n)
{
  --n;
  int p;
  int *t = new int [n];
  cin >> p;
  for(size_t i = 0; i<n+1; i++)
  {
    if(i != p-1) t[i] = tab[i];
  }
  delete [] tab;
  tab =t;
  return t;
}
