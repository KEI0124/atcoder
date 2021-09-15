#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	double X;
	cin >> X;

	int Y = X * 10;

	Y = Y % 10;

	int ans = X;

	if(Y >= 7)
	{
		cout << ans << "+" << endl;
		return 0;
	}

	if(Y >= 3)
	{
		cout << ans << endl;
		return 0;
	}

	cout << ans << "-" << endl;
}