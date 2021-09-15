#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	int N;
	cin >> N;
	
	string S[N][N],T[N][N];

	for(int i =0;i<N;i++)
	{
		string tmp;
		cin >> tmp;
		for(int j =0;j<N;j++)
		{
			S[i][j] = tmp[j];
		}
	}

	for(int i =0;i<N;i++)
	{
		for(int j =0;j<N;j++)
		{
			cout << S[i][j] << endl;
		}
	}
} 