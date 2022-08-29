#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
  int N;
  int nums[N];
  unordered_set <int> list;
  int bessieLoc;
  int count = 0;
  int greater = 0;
  cin >> N;
  for (int i = 0; i < N; ++i) {
    cin >> nums[i];
  }
  for (int i = 0; i < N-1; ++i) {
    if (nums[i+1] < nums[i]) {
      bessieLoc = i+1;
      break;
    }
  }
  for (int i = 0; i < N; ++i) {
    if (i != bessieLoc&& list.find(nums[i]) == list.end())
      list.insert(nums[i]);
  }
  for (int i = 0; i < N; ++i) {
    if (nums[bessieLoc] > nums[i]) {
      greater++;
    }
  }
  cout << list.size() - greater - (N-(bessieLoc + 1)) << endl;
  return 0;
}