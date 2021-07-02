#include <iostream>
using namespace std;

#define AB_SIZE 26
#define ASCII_SHIFT 97

int main() {
  string S;
  cin >> S;

  int ab[AB_SIZE] = {};
  for (char c : S) {
    // cout << "c " << c - ASCII_SHIFT << endl;
    ab[c - ASCII_SHIFT] = 1;
  }
  char smallest = 0;
  for (int i = 0; i < AB_SIZE; i++) {
    if (0 == ab[i]) {
      smallest = i + ASCII_SHIFT;
      break;
    }
  }
  if (0 == smallest) {
    cout << "None";
  } else {
    cout << smallest;
  }

  return 0;
}
