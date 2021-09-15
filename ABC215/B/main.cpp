#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	long long N;
	cin >> N;
	int ans =0;

	long long total = 1;
	
	for(int i = 1; i < 100000; i++)
	{
		total = total * 2;
		if(total > N)
		{
			break;
		}
		ans = i;
	}

	cout << ans << endl;
}