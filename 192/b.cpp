#include <ctype.h>
#include <iostream>
using namespace std;

bool is_hard_to_read(string S) {
  for (int i = 0; i < S.length(); i++) {
    if ((0 == i % 2 && isupper(S[i])) || (0 != i % 2 && islower(S[i]))) {
      return false;
    }
  }
  return true;
}

int main() {
  string S;
  cin >> S;

  if (is_hard_to_read(S)) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}
