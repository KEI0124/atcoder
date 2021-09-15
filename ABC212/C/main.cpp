#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

vector<vector<int>>total;

int main() 
{
	int N,K;
	cin >> N >> K;

	total.resize(N);

	int candies;

	for (int i = 0; i < N; i++)
	{
		cin >> candies;

		total[i].resize(K);

		total[i][0] = candies;
	}
}