#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> V;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == 2) {
      V.pop_back();
    } else {
      int y;
      cin >> y;
      if (x == 0) {
        V.push_back(y);
      } else {
        cout << V[y] << endl;
      }
    }
  }

  return 0;
}
