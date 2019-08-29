#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
	int n, i, k;
	cin >> n >> k;
	int arr[n];
	int rem[k] = {0};
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (i = 0; i < n; i++) {
		rem[arr[i] % k]++;
	}
	int counter = 0;
	for (i = 1; i <= k / 2; i++) {
		counter = counter + max(rem[i], rem[k - i]);
	}
	counter = counter + (rem[0] > 0 ? 1 : 0);
	if (k % 2 == 0) {
		counter = counter - rem[k / 2];
		if (rem [k / 2] > 0)
			counter++;
	}
	cout << counter << endl;

	return 0;
}
