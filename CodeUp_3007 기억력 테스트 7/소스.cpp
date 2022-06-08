#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<int> arr(n);
	for (auto& a : arr)
		cin >> a;
	for (int i = 1; i < n; i++)
		arr[i] += arr[i - 1];

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a - 2 >= 0)
			cout << arr[b - 1] - arr[a - 2] << '\n';
		else
			cout << arr[b - 1] << '\n';
	}

	return 0;
}