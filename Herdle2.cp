#include <iostream>
using namespace std;

int main() {
  
  string input;
  string temp;

  cin >> temp;
  input += temp;
  cin >> temp;
  input += temp;
  cin >> temp;
  input += temp;

  string ans;

  cin >> temp;
  ans += temp;
  cin >> temp;
  ans += temp;
  cin >> temp;
  ans += temp;

  int green = 0; 
  int yellow = 0;
  char flag[9];
  for (int i = 0; i < 9; ++i) flag[i] = '$';
  for (int i = 0; i < 9; ++i) {
    
      if (input[i]==ans[i]) {
        ++green;
        flag[i] = input[i];
      }
    
  }
  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 9; ++j) {
      if (input[i]==ans[j] && input[i] != flag[j]) {
        ++yellow;
      }
    }
  }

  cout << green << endl;
  cout << yellow << endl;


}