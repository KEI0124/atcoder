#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
  long long A,B = 0;

  string message = "No";

  cin >> A >> B;

  int min,max =0;

  min = A;

  max = 6 * A;
  
  if(min <= B && B <= max)
  {
    message = "Yes";
  }

  cout << message << endl;

  return 0;
}