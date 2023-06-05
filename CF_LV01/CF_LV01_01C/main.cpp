#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double r;
  cin >> r;
  cout<<fixed <<setprecision(2) << r*r*3.14;
  return 0;
}
