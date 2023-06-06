#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double a, b;
  cin >> a >> b;
  cout << fixed <<setprecision(2) << "Ket qua chinh xac la: " << a/b; 
  cout << "\nThuong la: " << (int)a/(int)b;
  cout << "\nDu la: "<< ((int)a)% ((int)b);
  return 0;
}
