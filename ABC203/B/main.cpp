#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	int N,K;
	cin >> N >> K;

	long long ans = 0;

	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= K; j++)
		{
			ans += i*100;
			ans += j;
		}
	}

	cout << ans << endl;
}