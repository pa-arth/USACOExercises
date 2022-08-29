#include <iostream>
#include <set>

using namespace std;

int main() {
  
  int n; 
  int ans;
  char c;
  set <char> s;

  freopen("whereami.in", "r", stdin);
  freopen("whereami.out", "w", stdout);
  
  cin >> n;

  for (int i = 0; i < n; ++i) {

    cin >> c;
    s.insert(c);
  }

  cout << s.size() << endl;

} 