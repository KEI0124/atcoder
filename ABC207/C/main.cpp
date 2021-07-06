#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	int N;
	cin >> N;

	int answer = 0;

	vector<int> t(N), l(N), r(N);
	for (int i = 0; i < N; i++) 
	{
		cin >> t[i] >> l[i] >> r[i];
	}

	for(int i = 0; i < N;i++)
	{
		for(int j = i + 1; j < N;j++)
		{
			// 一つ下の数字と比べる
			// イコールか調べて、開区間だった場合for分を一つ回す
			if (r[i] < l[j]) { continue; }
 
			if (r[i] == l[j]) 
			{
				if (t[i] == 2 || t[i] == 4) { continue; }
				if (t[j] == 3 || t[j] == 4) { continue; }
			}
 
			if (r[j] < l[i]) { continue; }
 
			if (r[j] == l[i]) 
			{
				if (t[j] == 2 || t[j] == 4) { continue; }
				if (t[i] == 3 || t[i] == 4) { continue; }
			}
 
			answer++;
		}
	}

	cout << answer << endl;
}