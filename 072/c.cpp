#include <iostream>
#include <list>
using namespace std;

int main() {
  int N;
  cin >> N;
  list<int> A;
  for (int a, n = 0; n < N; n++) {
    cin >> a;
    A.push_back(a - 1);
    A.push_back(a);
    A.push_back(a + 1);
  }

  A.sort();

  int count = 1, max = 1, pre = -2;
  for (int a : A) {
    if (a == pre) {
      count++;
    } else {
      if (max < count) {
        max = count;
      }
      pre = a;
      count = 1;
    }
  }
  cout << max;

  return 0;
}
