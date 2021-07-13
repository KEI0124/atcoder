#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

bool temp[2000];
vector<vector<int>>G;

void dfs(int v)
{
	if(temp[v])return;
	temp[v]=true;
	for(auto vv:G[v])dfs(vv);
}

int main() 
{
	int N,M;
	cin >> N >> M;
	G.resize(N);
	for(int i=0;i < M; i++)
	{
		int a,b;
		cin >> a >> b;
		G[a-1].push_back(b-1);
	}
	
	int answer = 0;

	for(int i = 0; i < N;i++)
	{
		for(int j=0;j<N;j++)temp[j]=false;
		dfs(i);
		for(int j=0;j<N;j++)if(temp[j])answer++;
	}

	cout << answer << endl;
}