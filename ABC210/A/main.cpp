#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	int N,A,X,Y;
	cin >> N>>A>>X>>Y;
	
	int ans = 0;

	for (int i = 0; i < N; i++)
	{
		if(i >= A)
		{
			ans+=Y;
		}
		else
		{
			ans+=X;
		}
	}

	cout << ans << endl;
}