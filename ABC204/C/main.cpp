#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	int N,M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> C[i];
	}

	sort(C.begin(),C.end());

	long long answer = 1;

	for(int i = 0; i < N; i++)
	{
		answer = answer * max(0, C[i] - i) % 1000000007;
	}

	cout << answer << endl;
}