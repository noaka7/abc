#include <iostream>
using namespace std;

int main() {
  int X, N;
  int p[102] = {};
  cin >> X >> N;
  for (int i, n = 0; n < N; n++) {
    cin >> i;
    p[i] = 1;
  }

  for (int i = 0; i <= 50; i++) {
    if (!p[X - i]) {
      cout << X - i;
      break;
    }
    if (!p[X + i]) {
      cout << X + i;
      break;
    }
  }

  return 0;
}
