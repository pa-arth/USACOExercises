#include <iostream>
using namespace std;

int seriesAddition (int n) {
  int seriesSum;
  seriesSum = (n*(n+1))/2;
  return seriesSum;
}

int findMaxSpeed (int dist, int terminalSpeed) {
  int i = 1;
  while (seriesAddition(i) + (seriesAddition(i-1)-seriesAddition(terminalSpeed-1)) <= dist) {
    ++i;
  }
  i--;
  return i;
}

int findTotalDistance (int dist, int terminalSpeed) {
  int i;
  i = findMaxSpeed(dist,terminalSpeed);
  int totDistance;
  totDistance = seriesAddition(i) + (seriesAddition(i-1)-seriesAddition(terminalSpeed-1));
  return totDistance;
}

int calcTotalSeconds (int maxSpeed, int terminalSpeed, int dist) {
  int totSeconds;
  totSeconds = maxSpeed + ((maxSpeed-1)-(terminalSpeed-1));
  int remainder = dist - findTotalDistance(dist,terminalSpeed);
  while (remainder >= maxSpeed) {
    remainder -= maxSpeed;
    ++totSeconds;
  }
  if (remainder < maxSpeed && remainder != 0) ++totSeconds;
  return totSeconds;
}

int main() {
  freopen("race.in", "r", stdin);
  freopen("race.out", "w", stdout);
  int dist, n;
  int maxSpeed;
  cin >> dist >> n;
  for (int i = 0; i < n; ++i) {
    int terminalSpeed;
    cin >> terminalSpeed;
    maxSpeed = findMaxSpeed(dist, terminalSpeed);
    int totSeconds = calcTotalSeconds (maxSpeed,terminalSpeed, dist);
    cout << totSeconds;
    if (i != n-1) cout << "\n";
  }
}