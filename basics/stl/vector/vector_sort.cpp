#include <algorithm>
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
    V.push_back(x);
  }
  sort(V.begin(), V.end());
  for (int y : V) {
    cout << y << " ";
  }
  cout << endl;
}
