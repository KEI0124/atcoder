#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
  long long N = 0;
  cin >> N;

  vector<int> A(N);

  string message = "Yes";

  for(int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  stable_sort(A.begin(),A.end());

  for(int i = 1; i <= N; i++)
  {
    if(i != A[i-1])
    {
      message = "No";
    }
  }

  cout << message << endl;

  return 0;
}