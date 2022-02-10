#include <iostream>

using namespace std;
int main()
{
	int n, i, j, k, cur, ans;
	
	cin >> n;
	int arr[n];
	for (i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	
	cur = ans = 0;
	for (i = 0; i < n; ++i) {
		cur = max(0, cur + arr[i]);
		ans = max(ans, cur);
	}
	cout << ans << endl;
	
	return 0;
}
