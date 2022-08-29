#include <iostream>
#include<algorithm>
#include <fstream>
using namespace std;

int main() {

    ifstream fin ("shell.in");
    ofstream fout ("shell.out");
    int shell[3];
    int n;
    int maximum = 0;
    int ans = 0;
    int s;
    int sNew;
    int guess;
    int temp = 0;
    int currShell;
    fin >> n;
    shell[0] = 1;
    shell[1] = 2;
    shell[2] = 3;
    for (int i = 0; i <  3; ++i) {
      currShell = shell[i];
      for (int j = 0; j < n; ++j) {
        fin >> s;
        fin >> sNew;
        fin >> guess;
        // --sNew, --s;
        if (currShell == s) currShell = sNew;
        else if (currShell ==sNew) currShell = s;
        // swap(shell[s-1], shell[sNew-1]);
        // temp = shell[s-1];
        // shell[s-1] = shell[sNew-1];
        // shell[sNew-1] = temp;
        if (guess == currShell) ++ans;
      }
      maximum = max(maximum, ans);
      ans = 0;
    }

    fout << maximum << endl;
    return 0;
} 