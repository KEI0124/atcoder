#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	long long N,M;
	cin >> N >> M;
	
	vector<vector<int>> tube;

	tube.resize(M);

	for(int i = 0; i < M; i++)
	{
		int k;
		cin >> k;
		for(int j = 0; j < k; j++)
		{
			int a;
			cin >> a;
			tube[i].push_back(a);
		}
	}

	

	while(true)
	{
		for(int i = 0; i < M; i++)
		{
			for(int j = i+1; j < M; j++)
			{
				if(tube[i][tube[i].size()-1] == tube[j][tube[j].size()-1])
				{
					cout << "test" << endl;
					tube[i].erase(tube[i].begin(),tube[i].size()-1);
					tube[j].erase(tube[i].begin(),tube[j].size()-1);
				}
			}
		}
	}

	cout << tube[0][tube[0].size()-1] << endl;
}