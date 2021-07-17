#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	int N;
	cin >> N;

	string user = "Takahashi";

	string card;
	cin >> card;

	for (int i = 0; i < N; i++)
	{
		if(card[i] == '1')
		{
			if(i % 2 == 1)
			{
				string user = "Aoki";
				cout << user << endl;
				return 0;
			}
			else
			{
				cout << user << endl;
				return 0;
			}
		}
	}
}