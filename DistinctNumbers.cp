#include <iostream>
#include <set>

using namespace std; 

int main() {
  
  set <int> s;
  int n;
  int val;
  int ans;
  cin >> n;

  for (int i = 0; i < n; ++i) {

    cin >> val;
    s.insert(val);

  }

  for (int i : s) {
    ++ans;
  }

  cout << ans << endl;

} 