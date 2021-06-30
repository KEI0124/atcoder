#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
  int N = 0;
  cin >> N;

  string message = "Yes";

  int t = 0;
  int x = 0;
  int y = 0;

  int x_position = 0;
  int y_position = 0;

  int time = 0;

  for (int i = 0; i < N; i++)
  {
    cin >> t >> x >> y;

    for(; time <= t; time++)
    {
      if(x_position != x)
      {
        if(x_position < x)
        {
          x_position++;
        }
        else
        {
          x_position--;
        }
      }
      else if(y_position != y)
      {
        if(y_position < y)
        {
          y_position++;
        }
        else
        {
          y_position--;
        }
      }
      else
      {
        if((t-time) %2 == 1)
        {
          message = "No";
        }
        break;
      }
    }

    if(x_position != x || y_position != y)
    {
      message = "No";
    }
  }

  cout << message << endl;

  return 0;
}