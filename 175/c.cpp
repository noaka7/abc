#include <iostream>
using namespace std;

typedef long long ll;

ll walking_takahashi(ll X, ll K, ll D) {
  X = X < 0 ? -X : X;
  if (K <= X / D) { // K * D <= X
    return X - K * D;
  }
  K -= X / D; // K remainder
  X %= D;
  if (0 == K % 2) {
    return X;
  } else {
    return D - X;
  }
}

int main() {
  ll X, K, D;
  cin >> X >> K >> D;
  cout << walking_takahashi(X, K, D);

  return 0;
}
