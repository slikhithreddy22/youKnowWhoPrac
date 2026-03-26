#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> V;
  for (int i = 0; i < n; i++) {
    int j;
    cin >> j;
    V.emplace_back(j);
  };
  int ele;
  cin >> ele;
  V.erase(V.begin() + ele - 1);
  for (int x : V) {
    cout << x << " ";
  }
  cout << endl;
  int ele1, ele2;
  cin >> ele1 >> ele2;
  V.erase(V.begin() + ele1 - 1, V.begin() + ele2 - 1);
  for (int x : V) {
    cout << x << " ";
  }
  cout << endl;
}
