#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	int N;
	cin >> N;

	int nut = 0;

	int answer = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> nut;
		if(nut > 10)
		{
			answer += nut - 10;
		}
	}

	cout << answer << endl;
}