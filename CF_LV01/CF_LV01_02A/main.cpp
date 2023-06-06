#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double a, b;
  cin >> a >> b;
  cout << "Thu nhap binh quan: ";
  cout<<fixed <<setprecision(2) << (a+b)/2;
  return 0;
}
