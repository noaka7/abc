#include <iostream>
using namespace std;

int main() {
  string s, ans;
  cin >> s;

  for (int i = 1; i <= s.length(); i++) {
    if (i & 1) {
      ans.push_back(s[i - 1]);
    }
  }
  cout << ans;

  return 0;
}
