// Codeforces Exercise
// A20J Ladder 11 - Young Physicist
// Diff. lvl - 1
// Aleksandra Stupiec

#include <iostream>
using namespace std;

int main()
{
  int n;
  int x, y, z;
  int x1, y1, z1;
  cin >> n;
  cin >> x >> y >> z;
  
  for(int i = 0; i < n-1; i++) {
    cin >> x1 >> y1 >> z1;
    x = x+x1;
    y = y+y1;
    z = z+z1;
  }

  if (x == 0 && y == 0 && z == 0) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
}