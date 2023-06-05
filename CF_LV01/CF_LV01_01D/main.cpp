#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double a, b, c, d; cin >> a >> b >>c >> d;
  cout<<fixed <<setprecision(2) << (a+b+c+d)/4;
  return 0;
}
