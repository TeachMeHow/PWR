#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int m_strlen(char * tab);
char * m_toupper(char * tab);
char * m_strcpy(char * dst, char * src);

int main()
{
  char tab[100];
  char tab2[100];
  gets(tab);
  cout << '\n' << m_strlen(tab) << '\n';
  m_toupper(tab);
  cout << tab << '\n';
  m_strcpy(tab2, tab);
  cout << tab2;

  _getch();
  return 0;
}

int m_strlen(char * tab)
{
  int i(0);
  char * w = tab;
  for(; *w != '\0'; w++, i++);
  return i;
}
 char *m_toupper(char *tab)
 {
   char * w = tab;
   while(*w != '\0')
   {
     if(*w + 1 > 'a' && *w  -1 < 'z')
     {
       *w -= 32;
     }
     w++;
   }
   return w;
 }
char * m_strcpy(char * dst, char * src)
{
  char * w = src;
  char * p = dst;
  if(*w == '\0')
  {
    cout << "STRING EMPTY";
    exit (EXIT_FAILURE);
  }

    while(*w !='\0'){
    *p = *w;
    p++;
    w++;
  }
  return p;
}
