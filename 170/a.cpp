#include <iostream>
using namespace std;

int main() {
  int ans;
  for (int x, i = 1; i <= 5; i++) {
    cin >> x;
    if (0 == x) {
      ans = i;
    }
  }
  cout << ans;

  return 0;
}
