#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  freopen("lemonade.in", "r", stdin);
  freopen("lemonade.out", "w", stdout);
  int N;
  cin >> N;
  int arr[N];
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    cin >> arr[i];
  }
  sort(arr, arr + N, greater<int>());
  for (int i = 0; i < N; ++i) {
    if (arr[i] >= i) ++ans;
  }
  cout << ans << endl;
}