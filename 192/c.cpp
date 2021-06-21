#include <algorithm>
#include <iostream>
using namespace std;

int g1(int x) {
  string s;
  s = to_string(x);
  sort(begin(s), end(s), greater<char>());
  return stoi(s);
}

int g2(int x) {
  string s;
  s = to_string(x);
  sort(begin(s), end(s));
  return stoi(s);
}

int f(int x) { return g1(x) - g2(x); }

int main() {
  int N, K;
  cin >> N >> K;

  for (int i = 0; i < K; i++) {
    N = f(N);
  }
  cout << N;

  return 0;
}
