#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
	int n;
	cin >> n;
	vector <int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	while (arr.size() > 0) {
		cout << arr.size() << endl;
		int min = *min_element(arr.begin(), arr.end());
		vector <int> :: iterator itr = arr.begin();
		while (itr < arr.end()) {
			if (*itr == min)
				arr.erase(itr);
			else
				itr++;
		}
	}
	
	return 0;
}
