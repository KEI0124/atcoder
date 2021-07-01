#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
  int loop = 0;
  cin >> loop;

  int combination = 0;

  int arr[loop];

  for(int i = 0; i < loop; i++)
  {
    cin >> arr[i];
    combination+=i;
  }

  stable_sort(arr,arr+loop);

  int suffer = arr[0];
  int count = 1;
  int minus = 0;

  for(int i = 1; i <= loop; i++)
  {
    if(suffer == arr[i])
    {
      count++;
    }
    else
    {
      suffer = arr[i];
      if(count > 1)
      {
        for(int j = 0; j < count;j++)
        {
          minus+=j;
        }
        count = 1;
        combination -= minus;
        minus = 0;
      }
    }
  }

  cout << combination << endl;

  return 0;
}