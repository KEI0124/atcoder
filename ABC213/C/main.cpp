#include <bits/stdc++.h>
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int H, W, N, A[101010], B[101010];

int main()
{
  cin >> H >> W >> N;
  rep(i, 0, N) cin >> A[i] >> B[i];

  vector<int> ys;
  //　新しい変数に丸ごとコピー
  rep(i, 0, N) ys.push_back(A[i]);
  //　ソート
  sort(all(ys));
  //　重複を削除
  ys.erase(unique(all(ys)), ys.end());
  //　元の値と比較して場所を格納
  rep(i, 0, N) A[i] = lower_bound(all(ys), A[i]) - ys.begin();

  vector<int> xs;
  rep(i, 0, N) xs.push_back(B[i]);
  sort(all(xs));
  xs.erase(unique(all(xs)), xs.end());
  rep(i, 0, N) B[i] = lower_bound(all(xs), B[i]) - xs.begin();

  rep(i, 0, N) printf("%d %d\n", A[i] + 1, B[i] + 1);

  // 自分で書いたやつ
  // int H,W,N;
  // cin >> H >> W >> N;

  // int H_number[N];
  // int H_number_copy[N];
  // int W_number[N];
  // int W_number_copy[N];

  // rep(i, 0, N) cin >> H_number[i] >> W_number[i];

  // for(int i = 0; i < N; i++)
  // {
  //   cin >> H_number[i] >> W_number[i];

  //   H_number_copy[i] = H_number[i];
  //   W_number_copy[i] = W_number[i];
  // }

  // stable_sort(H_number_copy,H_number_copy+N);
  // stable_sort(W_number_copy,W_number_copy+N);

  // for(int i = 0; i < N; i++)
  // {
  //   for(int j = 0; j < N; j++)
  //   {
  //     if(H_number[i] == H_number_copy[j])
  //     {
  //       H_number[i] = j+1;
  //     }

  //     if(W_number[i] == W_number_copy[j])
  //     {
  //       W_number[i] = j+1;
  //     }
  //   }

  //   cout << H_number[i] << " " << W_number[i] << endl;
  // }
}