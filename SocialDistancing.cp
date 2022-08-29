#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

  freopen("socdist1.in", "r", stdin);
  freopen("socdist1.out", "w", stdout);
  
  int n;
  cin >> n;

  int diff;
  int v1[n];
  int v2[n];

  int rightGap = 0;
  int leftGap = 0;

  long long temp;
  cin >> temp;

  for (int i = 0; i < n; ++i) {
    v1[n-i-1] = temp%10;
    temp = temp/ 10;
  }

  for (int i = 0; i < n; ++i) {
    v2[i] = v1[i];
  }

  int counter = 0; 

  int numZeroes = 0; 

  long long totalGap = 0;
  for (int i = 0; i < n; ++i) {
    if (v1[i] == 0) ++numZeroes;
  }

  for (int j = 0; j < numZeroes; ++j) {
    for (int i = 0; i < n; ++i) {
      if (v1[i] == 0 && counter < 2) {

        v2[i] = 2;
        ++counter;

      }
    }
    
    
    for (int i = 0; i < n; ++i) {
      if (v2[i] == 2) {
        for (int r = i; r > 0; --r) {
          if (v2[r] != 1) ++leftGap;
          else break;
        }
        for (int r = i; r < n; ++r){
          if (v2[r] != 1) ++rightGap;
          else break;
        }
        --leftGap;
        --rightGap;
        temp = leftGap + rightGap;
        totalGap = max(totalGap,temp);
        rightGap = 0; 
        leftGap = 0; 
        counter = 0;
      }
    }
  }

  cout << totalGap << endl;


} 