/*
ID: paarthg1
PROG: friday
LANG: C++                 
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
using ll = long long;

int main() {
  ifstream fin ("friday.in");
  ofstream fout ("friday.out");
  int n;
  int j = 0;
  int numTimes[7] = {0,0,0,0,0,0,0};

  fin >> n;

 
  for (int z = 0; z < n; ++z) {
    
    for (int i = 1; i < 32; i++) {
      if (j == 7)
        j = 0;
      if (i == 13)
        ++numTimes[j];
      ++j;
      
    }

    for (int i = 1; i < 29; i++) {
      if (j == 7)
        j = 0;
      if (i == 13)
        ++numTimes[j];
      ++j;
      }
      
    
    if ((1900+n)%100 != 0) {
      if ((1900+n)%4 == 0) {
        if (j == 7)
          j = 0;
        ++j;
      }
    }
    else if ((1900+n)%400 == 0){
        if (j == 7)
          j = 0;
        ++j;
    }

    for (int i = 1; i < 32; i++) {
      if (j == 7)
        j = 0;
      if (i == 13)
        ++numTimes[j];
      ++j;
    
  }

    for (int i = 1; i < 31; i++) {
      if (j == 7)
        j = 0;
      if (i == 13)
        ++numTimes[j];
      ++j;
    }

    for (int i = 1; i < 32; i++) {
      if (j == 7)
        j = 0;
      if (i == 13)
        ++numTimes[j];
      ++j;
      
    }
    
    for (int i = 1; i < 31; i++) {
      if (j == 7)
        j = 0;
      if (i == 13)
        ++numTimes[j];
      ++j;
    }

    for (int i = 1; i < 32; i++) {
      if (j == 7)
        j = 0;
      if (i == 13)
        ++numTimes[j];
      ++j;
      
    }

    for (int i = 1; i < 32; i++) {
      if (j == 7)
        j = 0;
      if (i == 13)
        ++numTimes[j];
      ++j;
      
    }

    for (int i = 1; i < 31; i++) {
      if (j == 7)
        j = 0;
      if (i == 13)
        ++numTimes[j];
      ++j;
    }

    for (int i = 1; i < 32; i++) {
      if (j == 7)
        j = 0;
      if (i == 13)
        ++numTimes[j];
      ++j;
      
    }

    for (int i = 1; i < 31; i++) {
      if (j == 7)
        j = 0;
      if (i == 13)
        ++numTimes[j];
      ++j;
    }

    for (int i = 1; i < 32; i++) {
      if (j == 7)
        j = 0;
      if (i == 13)
        ++numTimes[j];
      ++j;
      
    }
  }
  
  fout << numTimes[5] << " ";
  fout << numTimes[6] << " ";
  for (int i = 0; i < 5; i++)
    fout << numTimes[i] << " ";

  fout << endl;

} 