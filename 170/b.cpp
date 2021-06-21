#include <iostream>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;

  if (0 == Y % 2 && Y <= 4 * X && Y >= 2 * X) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}
