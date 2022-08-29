#include <iostream>
#include <algorithm>
#include<string>

using namespace std;

int main() {

  int input[7];
  int min;
  int min2;
  int min3;
  int ans = 0;
  int actMin;
  int j; 
  for (int i = 0; i < 7; ++i) {
    
    cin >> input[i];

  }

  sort(input, input + 7);

  min = input[0];
  min2 = input[1];
  min3 = input[6] - min2 - min;

  cout << min << " " << min2 << " " << min3 << endl;

  // actMin = input[0];
  // min = std::min_element(input, input + 7);

  // cout << *min << " ";
  // int i;
  // for (i=0; i<7; i++)
  //     if (input[i] == *min)
  //         break;
  
  // // If x found in inputay
  // if (i < 7)
  // {
  //     // reduce size of inputay and move all
  //     // elements on space ahead
      
  //     for (int j=i; j<6; j++)
  //         input[j] = input[j+1];
  // }

  // min = std::min_element(input, input + 6);

  // cout << *min << " ";

  // for (i=0; i<7; i++)
  //     if (input[i] == *min)
  //         break;
  
  // // If x found in inputay
  // if (i < 7)
  // {
  //     // reduce size of inputay and move all
  //     // elements on space ahead
      
  //     for (int j=i; j<6; j++)
  //         input[j] = input[j+1];
  // }

  // min = std::min_element(input, input + 5);

  // for (i=0; i<7; i++)
  //     if (input[i] == *min)
  //         break;
  
  // // If x found in inputay
  // if (i < 7)
  // {
  //     // reduce size of inputay and move all
  //     // elements on space ahead
      
  //     for (int j=i; j<6; j++)
  //         input[j] = input[j+1];
  // }

  // min = std::min_element(input, input + 4);

  // cout << *min << endl;
  // min = std::min_element(input, input + 6);

  // cout << *min << " ";

  // for (int i = 0; i < 7; ++i) {

  //   input[i] = input[i] - *min;

  // }

  // min = std::min_element(input, input + 6);

  // cout << *min << " ";

  // for (int i = 0; i < 7; ++i) {

  //   input[i] = input[i] - *min;

  // }

  // min = std::max_element(input, input + 6);

  // cout << *(min) << " ";
} 