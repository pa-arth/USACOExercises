#include <iostream>

using namespace std;

int main() {
  
  string ZodiacSign[] =  {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox"};

  int n; cin >> n;

  string arr[n][8];

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < 8; ++j) {
      cin >> arr[i][j];
    }
  }

  int yearDiff[100];

  for (int i = 0; i < 100; i++) yearDiff[i] = 1;

  for (int i = 0; i < n; ++i) {

    if (arr[i][3] == "previous") {
      int j = 11;
      while (ZodiacSign[j] != arr[i][4]) {
        --j;
        ++yearDiff[i];
        // if (i != 0) yearDiff[i] += yearDiff[i-1];
      }
    }
    else {
      int j = 1;
      while (ZodiacSign[j] != arr[i][4]) {
        ++j;
        ++yearDiff[i];
        // if (i != 0) yearDiff[i] += yearDiff[i-1];
      }
    }

  }

  int z = 0;

  while (arr[z][0] != "Elsie") {
    ++z;
  }
  
  cout << yearDiff[z] << endl;
} 