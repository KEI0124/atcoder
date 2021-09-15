#include <bits/stdc++.h>
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int N;
long long S[201010], T[201010];
long long total;

int main()
{
  cin >> N;
  rep(i, 0, N) cin >> S[i];
  rep(i, 0, N) cin >> T[i];

  total = T[0];

  rep(i,1,N)
  {
    if(total+S[i-1] >= T[i])
    {
      total = T[i];
    }
    else
    {
      total += S[i-1];
      T[i] = total;
    }
  }

  rep(i, 0, N) cout << T[i] << endl;
}