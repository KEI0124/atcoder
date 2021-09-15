#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	int N;
	cin >> N;

	vector<int> A(N);
	vector<int> A_copy(N);

	for(int i =0; i< N;i++)
	{
		cin >> A[i];
		A_copy[i] = A[i];
	}

	sort(A.begin(),A.end());

	for(int i =0; i< N;i++)
	{
		if(A[N-2] == A_copy[i])
		{
			cout << i+1 << endl;
			return 0;
		}
	}
}