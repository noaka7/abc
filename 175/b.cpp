// Since N≤100, it is possible try all tuples (i,j,k) and check if it forms a
// triangle. Three sides of length a, b and c forms a triangle if and only if
//   a+b>c,
//   b+c>a and
//   c+a>b,
// so you can solve this problem by checking the following two conditions: (Li,
// Lj and Lk are all different, and) Li, Lj and Lk satisfies the condition
// above.

// The total time complexity is O(N^3).

// Just an aside, if you sort L firsthand and assume that they satisfy
// L1≤L2,⋯,≤LN, the only triangular inequality that has to be check is that
// Li+Lj>Lk.

#include <cstdlib>
#include <iostream>
using namespace std;

int compar(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int main() {
  int N, ans;
  int A[100];
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  qsort(A, N, sizeof(int), compar);

  ans = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      if (A[i] == A[j]) {
        continue;
      }
      for (int k = j + 1; k < N; k++) {
        if (A[j] == A[k]) {
          continue;
        }
        if (A[i] + A[j] > A[k]) {
          ans++;
        }
      }
    }
  }
  cout << ans;

  return 0;
}
