#include <iostream>
#include <list>
using namespace std;

typedef long long ll;

int main() {
  ll N;
  cin >> N;
  list<ll> A;
  for (ll a, n = 0; n < N; n++) {
    cin >> a;
    A.push_back(a);
  }

  A.sort();

  ll b = 0, c = 0;
  ll greatest = A.back();
  A.pop_back();
  while (!A.empty()) {
    if (A.back() == greatest) {
      b = A.back();
      A.pop_back();
      break;
    }
    greatest = A.back();
    A.pop_back();
  }
  if (!A.empty()) {
    greatest = A.back();
    A.pop_back();
  }
  while (!A.empty()) {
    if (A.back() == greatest) {
      c = A.back();
      break;
    }
    greatest = A.back();
    A.pop_back();
  }
  cout << b * c;

  return 0;
}
