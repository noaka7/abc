#include <iostream>
using namespace std;

#define MAX 100000

int main() {
  int N, ans;
  int A[MAX], P[MAX], X[MAX];
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> A[i] >> P[i] >> X[i];
  }

  ans = -1;
  for (int i = 0; i < N; i++) {
    if ((A[i] < X[i]) && (ans < 0 || P[i] < ans)) {
      ans = P[i];
    }
  }
  cout << ans;

  return 0;
}
