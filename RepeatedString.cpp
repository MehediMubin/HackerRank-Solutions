#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char str[101];
	long int n, counter = 0;
	cin >> str >> n;
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] == 'a')
			counter++;
	}
	counter = counter * (n / len);
	for (int i = 0; i < (n % len); i++) {
		if (str[i] == 'a') 
			counter++;
	}
	cout << counter << endl;

	return 0;
}
