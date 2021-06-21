#include <iostream>
using namespace std;

int main() {
  string S, ans;
  cin >> S;

  ans = "Yes";
  for (int i = 0; i < S.length(); i++) {
    if ((0 == i % 2 && 'L' == S[i]) || (0 != i % 2 && 'R' == S[i])) {
      ans = "No";
      break;
    }
  }
  cout << ans;

  return 0;
}
