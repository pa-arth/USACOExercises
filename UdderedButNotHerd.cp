#include <iostream>
#include <string>
using namespace std;

int main() {
  
  string alphabet;
  string word;

  cin >> alphabet;
  cin >> word;

  word += " ";

  int j = 0; 
  int ans = 0;

  
  while (word.at(j) != ' ') {

    for (int i = 0; i < alphabet.length(); ++i) {

      if (alphabet.at(i) == word.at(j))
        ++j;
      }
    ++ans;
    }

  

  cout << ans << endl;
  
} 