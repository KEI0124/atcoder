#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	int A,B;
	cin >> A >> B;

	int answer = 0;

	answer = B-A+1;

	if(A > B)
	{
		answer = 0;
	}

	cout << answer << endl;
}