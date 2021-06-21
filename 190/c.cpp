#include <iostream>
using namespace std;

struct choice {
  int a = 0;
  int b = 0;
};

int count(bool *D, int N, struct choice *C, int M) {
  int ans = 0;
  for (int i = 0; i < M; i++) {
    int a = C[i].a;
    int b = C[i].b;
    if (D[a] && D[b]) {
      ans++;
    }
  }
  return ans;
}

int main() {
  int N, M, K, ans = 0;
  cin >> N >> M;

  struct choice C[M]; // conditions
  for (int i = 0; i < M; i++) {
    cin >> C[i].a >> C[i].b;
  }

  cin >> K;
  struct choice V[K]; // votes
  for (int i = 0; i < K; i++) {
    cin >> V[i].a >> V[i].b;
  }

  for (int n = 0; n < (1 << K); n++) {
    bool D[N + 1] = {}; // dishes
    for (int k = 0; k < K; k++) {
      int v = n & (1 << k); // mask
      int i = v ? V[k].a : V[k].b;
      D[i] = 1;
    }
    int sum = count(D, N + 1, C, M);
    if (ans < sum) {
      ans = sum;
    }
  }
  cout << ans;

  return 0;
}
