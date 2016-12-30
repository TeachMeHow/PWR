#include <iostream>
#include <iomanip>
#include <ios>
#include <algorithm>
#include <conio.h>

using namespace std;

int main()
{
  //ask for grades
  cout << "Please enter your midterm and final exam grades: ";
  cout << endl;
  double midterm, finalexam;
  cin >> midterm >> finalexam;
  cout << "Please enter all of your homework grades: ";
  double sum(0), x;
  size_t count(0);
  while(cin >> x)
  {
    sum += x;
    ++count;
  }
  streamsize prec = cout.precision();
  cout << "Your final grade is: " << setprecision(prec)
  << 0.2*midterm + 0.4*finalexam
  + 0.4*(sum/count) << setprecision(prec) << endl;

  _getch();
  return 0;
}
