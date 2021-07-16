#include <iostream>
using namespace std;

int main() {
  int A, B, C, D, E, F;
  cin >> A >> B >> C >> D >> E >> F;

  int S = 0, W = 0;
  float density, max = 0;
  for (int a = 0; a < F; a += 100 * A) {
    for (int water, b = 0; b < F; b += 100 * B) {
      water = a + b;
      if (F < water) {
        break;
      }
      if (0 == water) {
        continue;
      }
      for (int c = 0; c < F; c += C) {
        for (int sugar, d = 0; d < F; d += D) {
          sugar = c + d;
          if (F < sugar || F < water + sugar) {
            break;
          }
          if (E * water < sugar * 100) {
            continue;
          }
          density = (sugar * 100.0) / (water + sugar);
          if (max <= density) {
            max = density;
            W = water;
            S = sugar;
          }
          // end loops
        }
      }
    }
  }
  cout << W + S << " " << S;

  return 0;
}
