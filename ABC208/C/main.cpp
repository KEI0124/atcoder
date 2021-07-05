#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
  long long A,B = 0;

  cin >> A >> B;

  long long array[A];

  long long number[A];

  long long sweet = B / A;
  B -= sweet * A;

  if(B==0)
  {
    for (int i = 0; i < A; i++)
    {
      cout << sweet << endl;
    }
    return 0;
  }

  for(int i = 0; i < A; i++)
  {
    cin >> array[i];
    number[i] = array[i];
  }

  stable_sort(number,number+A);

  for (int i = 0;i<A;i++)
  {
    if(array[i] <= number[B-1])
    {
      cout << sweet+1 << endl;
    }
    else
    {
      cout << sweet << endl;
    }
  }

  return 0;
}