#include <bits/stdc++.h>
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int S, T;
int ans;

int main()
{
  cin >> S >> T;
  ans = 0;

  for(int a = 0; a <= S; a++)
  {
    for(int b = 0; a+b <= S; b++)
    {
      for(int c = 0; a+b+c <= S; c++)
      {
        if(a*b*c > T)
        {
          break;
        }

        ans++;
      }
    }
  }

  cout << ans << endl;
}