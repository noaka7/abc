#include <iostream>
using namespace std;

typedef long long ll;

int main() {
  int N;
  ll S, D;
  cin >> N >> S >> D;

  string ans = "No";
  ll X, Y;
  for (int i = 0; i < N; i++) {
    cin >> X >> Y;
    if (X < S && D < Y) {
      ans = "Yes";
      break;
    }
  }
  cout << ans;

  return 0;
}
