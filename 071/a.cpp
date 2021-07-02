#include <iostream>
using namespace std;

int abs(int n) { return n < 0 ? -n : n; }

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  if (abs(x - a) < abs(x - b)) {
    cout << "A";
  } else {
    cout << "B";
  }

  return 0;
}
