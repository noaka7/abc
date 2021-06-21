#include <iostream>
#include <unordered_set>
using namespace std;

typedef long long ll;

int main() {
  ll N;
  cin >> N;

  unordered_set<ll> set;
  for (ll a, n = 2; n * n <= N; n++) {
    a = n * n;
    while (a <= N) {
      set.insert(a);
      a *= n;
    }
  }
  cout << N - set.size();

  return 0;
}
