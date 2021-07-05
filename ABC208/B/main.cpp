#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
  long long A = 0;

  cin >> A;

  int coin = 0;

  int tmp = 0;

  if(A >= 3628800)
  {
    tmp = A/3628800;
    coin += tmp;
    A -= tmp * 3628800;
  }

  if(A >= 362880)
  {
    tmp = A/362880;
    coin += tmp;
    A -= tmp * 362880;
  }

  if(A >= 40320)
  {
    tmp = A/40320;
    coin += tmp;
    A -= tmp * 40320;
  }

  if(A >= 5040)
  {
    tmp = A/5040;
    coin += tmp;
    A -= tmp * 5040;
  }

  if(A >= 720)
  {
    tmp = A/720;
    coin += tmp;
    A -= tmp * 720;
  }

  if(A >= 120)
  {
    tmp = A/120;
    coin += tmp;
    A -= tmp * 120;
  }

  if(A >= 24)
  {
    tmp = A/24;
    coin += tmp;
    A -= tmp * 24;
  }

  if(A >= 6)
  {
    tmp = A/6;
    coin += tmp;
    A -= tmp * 6;
  }

  if(A >= 2)
  {
    tmp = A/2;
    coin += tmp;
    A -= tmp * 2;
  }

  if(A >= 1)
  {
    tmp = A/1;
    coin += tmp;
    A -= tmp * 1;
  }



  cout << coin << endl;

  return 0;
}