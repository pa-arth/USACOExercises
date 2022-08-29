/*
ID: paarthg1
PROG: gift1
LANG: C++                 
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
using ll = long long;

int NP;
string giver;
int numReceived;
int moneyAmt;
string currReceiver;

int main() {
  ifstream fin ("gift1.in");
  ofstream fout ("gift1.out");

  string giver = "hi";
  string* receivers;
  receivers = &giver;
  
  fin >> NP;
  
  receivers = new string [NP];
  int rand = 0;
  int* acctVals;
  acctVals = &rand;
  acctVals = new int [NP];


  for (int i = 0; i < NP; ++i) {
    fin >> receivers[i];
  }

  for (int i = 0; i < NP; ++i) {
    fin >> giver;
    fin >> moneyAmt; 
    fin >> numReceived;

    if (numReceived != 0) {
    for (int j = 0; j < numReceived; ++j) {
      fin >> currReceiver;
      for (int z = 0; z < NP; ++z) {
        if (currReceiver == receivers[z]) {
          acctVals[z] += moneyAmt / numReceived;
        }
      }
    }
    for (int z = 0; z < NP; ++z) {
      if(giver == receivers[z]) {
            acctVals[z] -= moneyAmt;
            acctVals[z] += moneyAmt % numReceived;
      }
      
    }
  }
  }

  for (int i = 0; i < NP; ++i) {

    fout << receivers[i] << " " << acctVals[i] << endl;
  }
  return 0;
} 