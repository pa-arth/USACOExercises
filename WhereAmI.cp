
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int n; 
  string mail;
  string substr = {""};
  string temp;
  int ans = 1;
  int rans = 1;
  ifstream fin ("whereami.in");
  ofstream fout ("whereami.out");
  
  fin>> n;
  fin>> mail;

  temp = mail;
  // for (int i = 0; i < n; ++i) {

    for (int j = 0; j < n; ++j) {

      substr += mail.at(j);
      temp.erase(temp.begin());
      if (temp.find(substr) != string::npos) {
        ++ans;
        temp.insert(temp.begin(), mail.at(j));
      }
      else {
        break;
      }
   // }

    
  }

  temp = mail;
  substr = "";
  for (int j = 0; j < n; ++j) {

      substr.insert(substr.begin(), mail.at(n-1-j));
      temp.erase(temp.end()-1);
      if (temp.find(substr) != string::npos) {
        ++rans;
      }
      else {
        break;
      }

    
  }

  ans = min (rans,ans);

  fout << ans << endl;
} 