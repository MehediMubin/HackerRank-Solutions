#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int counter, temp = 0;
	for (int i = 0; i < n - 1; i++) {
		counter = 0;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j])
				counter++;
		}
		if (counter > temp) 
			temp = counter;
	}
	temp++;
	int res = n - temp;
	cout << res << endl;

	return 0;
}
