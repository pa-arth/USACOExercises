#include <iostream>
#include<algorithm>
#include <fstream>
using namespace std;

int main() {

    ifstream fin ("shell.in");
    ofstream fout ("shell.out");
    bool shell[3];
    int n;
    int maximum = 0;
    int ans = 0;
    
    int sNew;
    int guess;
    bool temp = 0;
    int currShell;

    fin >> n;
    
    int s[n][3];
    
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < 3; ++j) {
        fin >> s[i][j];
        --s[i][j];
      }
    }
    for (int i = 0; i <  3; ++i) {
      shell[0] = false;
      shell[1] = false;
      shell[2] = false;
      shell[i] = true;
      for (int j = 0; j < n; ++j) {
        // fin >> s;
        // fin >> sNew;
        // fin >> guess;
        // --guess,--sNew, --s;
        swap(shell[s[j][0]], shell[s[j][1]]);
        // temp = shell[s[j][0]];
        // shell[s[j][0]] = shell[s[j][1]];
        // shell[s[j][1]] = temp;
        if (shell[s[j][2]]) ++ans;
      }
      maximum = max(maximum, ans);
      ans = 0;
    }

    fout << maximum << endl;
    return 0;
} 