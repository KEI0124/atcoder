#include <bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main() 
{
	int P[26];
	string trans[26];
	for(int i=0;i<26;i++)
	{
		cin >> P[i];
	}

	string ans;

	for(int i=0;i<26;i++)
	{
		if(P[i] == 1)
		{
			ans += "a";
		}
		else if(P[i] == 2)
		{
			ans += "b";
		}
		else if(P[i] == 3)
		{
			ans += "c";
		}
		else if(P[i] == 4)
		{
			ans += "d";
		}
		else if(P[i] == 5)
		{
			ans += "e";
		}
		else if(P[i] == 6)
		{
			ans += "f";
		}
		else if(P[i] == 7)
		{
			ans += "g";
		}
		else if(P[i] == 8)
		{
			ans += "h";
		}
		else if(P[i] == 9)
		{
			ans += "i";
		}
		else if(P[i] == 10)
		{
			ans += "j";
		}
		else if(P[i] == 11)
		{
			ans += "k";
		}
		else if(P[i] == 12)
		{
			ans += "l";
		}
		else if(P[i] == 13)
		{
			ans += "m";
		}
		else if(P[i] == 14)
		{
			ans += "n";
		}
		else if(P[i] == 15)
		{
			ans += "o";
		}
		else if(P[i] == 16)
		{
			ans += "p";
		}
		else if(P[i] == 17)
		{
			ans += "q";
		}
		else if(P[i] == 18)
		{
			ans += "r";
		}
		else if(P[i] == 19)
		{
			ans += "s";
		}
		else if(P[i] == 20)
		{
			ans += "t";
		}
		else if(P[i] == 21)
		{
			ans += "u";
		}
		else if(P[i] == 22)
		{
			ans += "v";
		}
		else if(P[i] == 23)
		{
			ans += "w";
		}
		else if(P[i] == 24)
		{
			ans += "x";
		}
		else if(P[i] == 25)
		{
			ans += "y";
		}
		else if(P[i] == 26)
		{
			ans += "z";
		}
	}

	cout << ans << endl;
}