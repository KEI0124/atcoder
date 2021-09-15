#include <bits/stdc++.h>
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int N;

int main()
{
  cin >> N;
  

  if(N >= 126 && N <= 211)
  {
    cout << 6 << endl;
  }
  else if(N >= 212)
  {
    cout << 8 << endl;
  }
  else
  {
    cout << 4 << endl;
  }


}