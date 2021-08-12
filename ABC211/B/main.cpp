#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	vector<string> S(4);
	cin >> S[0] >> S[1] >> S[2] >> S[3];
  
  for(int i = 0; i < 3; i++)
  {
    for(int j = i+1; j < 4; j++)
    {
      if(S[i] == S[j])
      {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  
  cout << "Yes" << endl;
}