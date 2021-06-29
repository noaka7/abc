#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int A[N] = {};
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A[a]++;
  }

  int B[N] = {};
  if (N & 1) {
    B[0] = 1;
  }
  for (int i = N & 1 ? 2 : 1; i < N; i += 2) {
    B[i] = 2;
  }

  int ans = 0;
  bool consistent = true;
  for (int i = 0; i < N; i++) {
    if (A[i] != B[i]) {
      consistent = false;
      break;
    }
  }
  if (consistent) {
    ans = 1;
    N >>= 1;
    for (int i = 0; i < N; i++) {
      ans = (ans << 1) % 1000000007;
    }
  }
  cout << ans;

  return 0;
}
