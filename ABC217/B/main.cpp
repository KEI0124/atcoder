#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	string S1,S2,S3;
	cin >> S1 >> S2 >> S3;

	string total = S1 + S2 + S3;

	if(total.find("ABC") == string::npos)
	{
		cout << "ABC" << endl;
	}
	else if(total.find("ARC") == string::npos)
	{
		cout << "ARC" << endl;
	}
	else if(total.find("AGC") == string::npos)
	{
		cout << "AGC" << endl;
	}
	else if(total.find("AHC") == string::npos)
	{
		cout << "AHC" << endl;
	}
}