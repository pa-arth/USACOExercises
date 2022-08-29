#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
  
  int n;
  string a, b;
  bool same = false;

  cin >> n;
  cin >> a >> b;

  int alist [n]; 
  int blist [n];

  for (int i = 0; i < n; ++i) {

    if (a.at(i) == 'G') alist[i] = 1;
    else alist[i] = 0;

    if (b.at(i) == 'G') blist[i] = 1;
    else blist[i] = 0;
  }
  
  for (int i = 0; i < n; ++i) {
    int counter = 0; 
    if (alist[i] != blist[i]) {
      ++counter;
    }
      
    else {
      for (int j = i; j < i + counter; j++) {
        if (blist[j] == 1) blist[j] = 0;
        else blist[j] = 1;
      }
    }
  }
  for (int i = 0; i < n; ++i) {
    cout << blist[i];
  }
} 
