#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
  long long A,B = 0;
  cin >> A >> B;

  float kcal;
  float magnification;

  magnification = B / 100.0;

  kcal = A * magnification;

  cout << kcal << endl;

  return 0;
}