#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	long long N,X;
	cin >> N >> X;

	long long total = 0;

	string message = "Yes";

	int tmp = 0;

	for (int i = 1; i < N+1; i++)
	{
		cin >> tmp;
		if(i % 2 == 0)
		{
			total += tmp-1;
		}
		else
		{
			total += tmp;
		}
	}

	if (X < total)
	{
		message = "No";
	}

	cout << message << endl;
}