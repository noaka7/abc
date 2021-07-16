#include <iostream>
using namespace std;

int abs(int a) { return a < 0 ? -a : a; }
int min(int a, int b) { return a < b ? a : b; }

int main() {
  int N, K, ans = 0;
  cin >> N >> K;
  int x[N];
  for (int i = 0; i < N; i++) {
    cin >> x[i];
    ans += min(x[i], abs(x[i] - K));
  }
  cout << (ans << 1);

  return 0;
}
