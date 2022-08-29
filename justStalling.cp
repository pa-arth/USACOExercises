#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std; 
using ll = long long;

ll fact(ll n) {

     return (n==0) || (n==1) ? 1 : n* fact(n-1);
}

int main() {

  int n;
  int z = 1; 

  int oldLarger = 0;
  int subtrAmt;

  cin >> n;

  ll a[n];
  ll b[n];

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }

  sort(a, a + n);
  sort(b, b + n);

  ll ans; 
  ll subtr;

  ans = fact(n);

  int larger = 0;

  for (int j = 0; j < n; ++j) {

    for (int i = 0; i < n; i++) {

      if (a[i] > b[j]) {
        ++larger;
      }

    }

     if (j == 0) subtrAmt = larger;
     else subtrAmt = oldLarger - larger;

    if (j == 0) subtr = fact(n-z);
    else subtr -= fact(n-z);
    
  
    if (z < n)  ++z; 

    ans = ans - (subtrAmt * subtr);
    if (oldLarger ==1) ans+= subtr;
    oldLarger = larger;
    larger = 0;
  }

  cout << ans << endl;


} 