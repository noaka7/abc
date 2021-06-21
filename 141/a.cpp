#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;

  if ("Sunny" == S) {
    cout << "Cloudy";
  } else if ("Cloudy" == S) {
    cout << "Rainy";
  } else if ("Rainy" == S) {
    cout << "Sunny";
  }

  return 0;
}
