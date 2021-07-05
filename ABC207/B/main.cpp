#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
  long long A,B,C,D = 0;

  cin >> A >> B >> C >> D;

  long long containerA = A;
  long long containerC = 0;

  long long answer = 0;

  for(int i = 0; i < A; i++)
  {
    containerA += B;
    containerC += C;
    
    answer++;

    if(containerA < (containerC * D))
    {
      break;
    }
  }

  if(containerA > (containerC * D))
  {
    answer = -1;
  }
  
  cout << answer << endl;

  return 0;
}