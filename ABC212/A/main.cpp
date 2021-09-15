#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	int A,B;
	cin >> A >> B;
	
	if(A == 0)
	{
		cout << "Silver" << endl;
		return 0;
	}

	if(B == 0)
	{
		cout << "Gold" << endl;
		return 0;
	}

	cout << "Alloy" << endl;
}