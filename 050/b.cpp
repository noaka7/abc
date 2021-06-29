#include <iostream>
using namespace std;

int main() {
  int N, T_sum = 0;
  cin >> N;
  int T[N + 1];
  for (int i = 1; i <= N; i++) {
    cin >> T[i];
    T_sum += T[i];
  }

  int M;
  cin >> M;
  int P[M], X[M];
  for (int i = 0; i < M; i++) {
    cin >> P[i];
    cin >> X[i];
    cout << T_sum - T[P[i]] + X[i] << endl;
  }

  return 0;
}
