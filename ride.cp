/*
ID: paarthg1
PROG: ride
LANG: C++                 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h> 

using namespace std;

long long asciiProd (string hi) {
    long long product = 1;
    long temp = 0;
    for (int i = 0; i < hi.length(); ++i) {
      //cout << "hi[i] is "  << hi[i] << endl;
      temp = (hi[i]) - 64;
      //cout << "temp is " << temp << endl;
     // temp -= 64;
      product *= temp;
    }

    return product;
}
int main() {
    string hi;
    ifstream fin;
    ofstream fout ("ride.out");
    long long firstSum = 0, secondSum = 0;
    getline(fin, hi);
    firstSum = asciiProd(hi);
    getline(fin, hi);
    secondSum = asciiProd(hi);
    if (firstSum % 47 == secondSum % 47) {
        fout << "GO" << endl;
    }
    else {
        fout << "STAY" << endl;
    }
    return 0;
}