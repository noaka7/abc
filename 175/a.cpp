#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;

  bool R1 = 'R' == S[0];
  bool R2 = 'R' == S[1];
  bool R3 = 'R' == S[2];

  if (R1 && R2 && R3) {
    cout << 3;
  } else if ((R1 && R2) || (R2 && R3)) {
    cout << 2;
  } else if (R1 || R2 || R3) {
    cout << 1;
  } else {
    cout << 0;
  }

  return 0;
}
