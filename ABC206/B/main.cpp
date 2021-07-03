#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
  int totalprice = 0;
  cin >> totalprice;

  int day = 1;

  for(int i =1;i<totalprice;i+=day)
  {
    day++;
  }

  cout << day << endl;

  return 0;
}