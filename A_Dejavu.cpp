#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

#define int long long
#define nl endl
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define pr(arr, n)            \
  for (int i = 0; i < n; i++) \
    cout << arr[i];
#define in cin >>
#define out cout <<

void solve() {
  int n, k, t, i, p, q, r, count = 0, j, flag;
  string str;
  cin >> str;

  string temp;
  n = str.size();

  int index = 0;

  while (index < n && str[n - index - 1] == 'a') {
    index++;
  }

  if (index == n) {
    cout << "NO\n";
    return;
  }

  temp = str.substr(0, index) + 'a' + str.substr(index);

  cout << "YES\n";
  cout << temp << "\n";
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(0);
  cout.tie(0);

  int t;
  t = 1;
  in t;
  while (t--) {
    solve();
  }
}