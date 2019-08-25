#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int T, a, b;
	cin >> T;
	while (T--) {
		int counter = 0;
		cin >> a >> b;
		int sq_root = ceil (sqrt (a));
		while (sq_root * sq_root <= b) {
			counter++;
			sq_root++;
		}
		cout << counter << endl;
	}

	return 0;
}
