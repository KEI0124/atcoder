#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	long long L,Q;
	cin >> L >> Q;

	int c[Q],x[Q];

	vector<int> cut_L(Q);
	line_L = L;
	long long cut_count = 0;

	for(int i=0; i < Q;i++)
	{
		cin >> c[i] >> x[i];
		// cout << c[i] << " " << x[i] << endl;
	}

	for(int i=0; i < Q;i++)
	{
		if(c[i] == 1)
		{
			for(int j = 0; j < cut_count; j++)
			{
				
			}
			cut_L[cut_count] = x[i];
			line_L = L - x[i];
			cut_L[cut_count+1] = L;
			cut_count++;
		}
		else
		{
			// cout << L << endl;
		}
	}

	for(int i=0; i < Q;i++)
	{
		cout << cut_L[i] << endl;
	}
}