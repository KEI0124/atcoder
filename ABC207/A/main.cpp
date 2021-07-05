#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
  int A,B,C = 0;

  cin >> A >> B >> C;

  int AB,BC,CA=0;
  AB = A+B;
  BC = B+C;
  CA = C+A;

  if(AB > BC && AB > CA)
  {
    cout << AB << endl;
  }
  else if(BC > AB && BC > CA)
  {
    cout << BC << endl;
  }
  else if(CA > AB && CA > BC)
  {
    cout << CA << endl;
  }
  else
  {
    cout << AB << endl;
  }

  return 0;
}