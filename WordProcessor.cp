#include <iostream>
#include <cctype>
#include <array>
using namespace std;

int main(void) {
  
  freopen ("word.in", "r", stdin);
  freopen ("word.out", "w", stdout);

  int n;
  int s;
  int count = 0;
  string sub;
  int len = 0;
  int i = 0;

  cin >> n;
  cin >> s;
  
  string arr[n] ;


  for (int z = 0; z < n; ++z) {
    if (arr[z] != " ") cin >> arr[z];
  }

  // for (int j = 0; j < n; ++j) {
  //   i=0;
    while (i < n) {
      sub = arr[i];
      len += sub.length();  
      if (len <= s) { 
        cout <<sub;
        if (i != n-1) {
          len += arr[i+1].length();
          if (len <= s)
          cout << " ";
          len -= arr[i+1].length();
        }
        ++i;
      }
      
      else {
        len = 0;
        cout << endl;
      }

    }
  }

//} 

// for (int i = 0; i < sub.length(); ++i) {

      
    //   if (!isspace(sub.at(i))) {
    //     ++count;
    //     cout << sub.at(i);
    //   }
    //   else {
    //     cout << sub.at(i);
    //   }
    //   if (count == s) {
    //     cout << endl;
    //     count = 0;
    //   }

    // }