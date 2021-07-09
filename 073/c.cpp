#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
  int N;
  cin >> N;
  unordered_set<int> A;
  for (int a, n = 0; n < N; n++) {
    cin >> a;
    if (A.count(a)) {
      A.erase(a);
    } else {
      A.insert(a);
    }
  }
  cout << A.size();

  return 0;
}
