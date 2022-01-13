#include <bits/stdc++.h>

using namespace std;

string solve()
{
  string a, b;
  cin >> a >> b;
  if (a == b)
    return "YES";
  if (a.size() != 1 || b.size() != 1)
    return "NO";
  if (a > b)
    swap(a, b);
  return (a[0] == '2' && b[0] == '4') ?  "YES" : "NO";
}

int main()
{
  int test = 0;
  cin >> test;
  while (test--)
  {
    cout << solve();
    if (test)
      cout << endl;
  }
}
