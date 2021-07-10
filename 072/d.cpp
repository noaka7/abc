#include <iostream>
using namespace std;

void swap(int &x, int &y) {
  x ^= y;
  y ^= x;
  x ^= y;
}

int main() {
  int N, ans = 0;
  cin >> N;
  int p[N + 1];
  for (int i = 1; i <= N; i++) {
    cin >> p[i];
  }

  for (int i = 1; i <= N; i++) {
    if (p[i] != i) {
      continue;
    }
    if (i + 1 <= N && p[i] != i + 1 && p[i + 1] != i) {
      swap(p[i], p[i + 1]);
      ans++;
    } else if (0 < i - 1 && p[i] != i - 1 && p[i - 1] != i) {
      swap(p[i], p[i - 1]);
      ans++;
    }
  }
  cout << ans;

  return 0;
}
