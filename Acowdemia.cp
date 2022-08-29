#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  
  int n;
  int l;
  int count = 0;

  cin >> n >> l;

  int cit[n];
  int temp[n];

  for (int i = 0; i < n; ++i) cin >> cit[i];

  for (int i = 0; i < n; ++i) temp[i] = cit[i];

  for (int i = 0; i < n; ++i) {

    if (temp[i] >= n) {
      ++count;
      temp[i] = 0;
    }

  }

  int max = temp[0];
  int j = 0;

  for (int i = 0; i < n; ++i) {
    if (temp[i] != 0) {
      if (l > 0) {
        max = *max_element(temp, temp + n);
        for (int i = 0; i < n; ++i) {
          if (temp[i] == max) {
            j = i;
            max = temp[i];
            temp[i] = 0;
          }
        }
        ++cit[j];
        --l;
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    if (cit[i] >= n) ++count;
  }

  cout << count << endl;


} 