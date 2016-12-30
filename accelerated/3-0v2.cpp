#include <iostream>
#include <iomanip>
#include <ios>
#include <algorithm>
#include <conio.h>
#include <vector>

using namespace std;

int main()
{
  //ask for grades
  cout << "Please enter your midterm and final exam grades: ";
  cout << endl;
  double midterm, finalexam;
  cin >> midterm >> finalexam;
  cout << "Please enter all of your homework grades: ";
  double x;
  vector<double> homework;
  while(cin >> x)
  {
    homework.push_back(x);
  }
  sort(homework.begin(), homework.end());
  typedef vector<double>::size_type vec_sz;
  vec_sz size = homework.size();
  if(size == 0)
  {
    cout << "You have not entered any grades. Please try again."
    << endl;
    return 1;
  }
  vec_sz mid = size/2;
  double median = size % 2 == 0 ? (homework[mid] + homework[mid-1])/2
  : homework[mid];
  streamsize prec = cout.precision();
  cout << "Your final grade is: " << setprecision(3)
  << 0.2*midterm + 0.4*finalexam
  + 0.4*median << setprecision(prec) << endl;

  _getch();
  return 0;
}
