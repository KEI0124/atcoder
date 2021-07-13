#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	int a,b,c;
	cin >> a >> b >> c;

	int answer = 0;

	if(a-b == 0)
	{
		answer = c;
	}

	if(b-c == 0)
	{
		answer = a;
	}

	if(c-a == 0)
	{
		answer = b;
	}

	cout << answer << endl;
}