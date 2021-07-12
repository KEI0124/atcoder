#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	int X,Y;
	cin >> X >> Y;

	int Z = 0;

	if(X==Y)
	{
		Z = X;
	}
	else
	{
		if(X+Y == 1)
		{
			Z = 2;
		}
		else if(X+Y == 2)
		{
			Z = 1;
		}
	}

	cout << Z << endl;
}