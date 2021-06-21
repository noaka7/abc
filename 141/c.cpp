#include <iostream>
using namespace std;

typedef long long ll;

int main() {
  int N, Q;
  ll K;
  cin >> N >> K >> Q;

  ll A[N + 1] = {};
  for (int a, q = 0; q < Q; q++) {
    cin >> a;
    A[a]++;
  }

  for (int i = 1; i <= N; i++) {
    if (0 < A[i] + K - Q) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}
