#include <iostream>
using namespace std;

int main() {
  freopen("mixmilk.in","r",stdin);
  freopen("mixmilk.out","w",stdout);
  long long N[3];
  long long C[3];

  int j=-1;

  for (int i = 0; i < 3; ++i) {
    cin >> C[i];
    cin >> N[i];
  }

  for (int i = 0; i <100; ++i) {
    ++j;
      if (j != 2) { 
        if (N[j]+N[j+1] <= C[j+1]) {
          N[j+1] += N[j];
          N[j] = 0;
        }
        else {
        N[j] = N[j] - (C[j+1]-N[j+1]);
       N[j+1] = C[j+1];
       }
      }
      else {
        if (N[j]+N[0] <= C[0]) {
          N[0] += N[j];
          N[j] = 0;
        }
       else {
         N[j] = N[j] - (C[0]-N[0]);
         N[0] = C[0];
       }
        j = -1;
      }
    }

  for (int i = 0; i < 3; i++) {
    cout << N[i] << endl;
  }
  
  
}