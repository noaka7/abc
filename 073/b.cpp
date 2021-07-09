#include <iostream>
using namespace std;

int main() {
  int N, ans = 0;
  cin >> N;
  for (int l, r, n = 0; n < N; n++) {
    cin >> l >> r;
    ans += r - l + 1;
  }
  cout << ans;

  return 0;
}
