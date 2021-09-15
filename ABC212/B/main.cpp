#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
#include<string>
using namespace std;

int main() 
{
	string str;
	cin >> str;
	
	int X[4];
	transform(begin(str), end(str), X, [](char c) {return c - '0'; });

	if(X[0] == X[1])
	{
		if(X[0] == X[2])
		{
			if(X[0] == X[3])
			{
				cout << "Weak" << endl;
				return 0;
			}
		}
	}

	for(int i = 0; i < 3;i++)
	{
		if(X[i] == 9)
		{
			if(X[i+1] != 0)
			{
				cout << "Strong" << endl;
				return 0;
			}
		}
		else
		{
			if(X[i] + 1 != X[i+1])
			{
				cout << "Strong" << endl;
				return 0;
			}
		}
	}

	cout << "Weak" << endl;
}