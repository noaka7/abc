#include <iostream>
using namespace std;

#define MAX 1000001

int main() {
  int N, ans = 0;
  int A[MAX] = {};
  cin >> N;
  for (int i, n = 0; n < N; n++) {
    cin >> i;
    A[i]++;
  }

  for (int i = 1; i < MAX; i++) {
    if (0 < A[i]) {
      if (1 == A[i]) {
        ans++;
      }
      for (int j = i + i; j < MAX; j += i) {
        A[j] = 0;
      }
    }
  }
  cout << ans;

  return 0;
}
