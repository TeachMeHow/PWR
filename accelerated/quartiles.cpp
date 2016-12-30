#include <iostream>
#include <iomanip>
#include <ios>
#include <algorithm>
#include <conio.h>
#include <vector>

using namespace std;

int main()
{
  double x;
  double qlow, median, qhigh;
  vector<double> gset;
  while(cin >> x)
  {
    gset.push_back(x);
  }
  typedef vector<double>::size_type vec_sz;
  vec_sz size = gset.size();
  if(size == 0)
  {
    cout << "Please enter more numbers. Try again." << endl;
    return 1;
  }
  sort(gset.begin(), gset.end());
  vec_sz mid = size/2;
  median = size % 2 == 0 ? (gset[mid] + gset[mid-1])/2 : gset[mid];
  
  vector<double> lset(gset.begin(), gset.begin() + mid);
  vector<double> hset(gset.begin() + mid + 1, gset.end());

  size = lset.size();
  mid = size/2;
  qlow = size % 2 == 0 ? (lset[mid] + lset[mid-1])/2 : lset[mid];
  qhigh = size % 2 == 0 ? (hset[mid] + hset[mid-1])/2 : hset[mid];
  cout << "Q1: " << qlow << '\n' << "Q2: " << median << '\n' << "Q3: " << qhigh << '\n';

  _getch();
  return 0;
}
