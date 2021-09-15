#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	long long N;
	cin >> N;
	string ans;

	for(int i =0; i < 120; i++)
	{
		if(N % 2 == 0)
		{
			ans.insert(0,"B");
			N = N / 2;
			if(N == 0)
			{
				cout << ans << endl;
				return 0;
			}
		}
		else
		{
			ans.insert(0,"A");
			N = N - 1;
			if(N == 0)
			{
				cout << ans << endl;
				return 0;
			}
		}
	}
}