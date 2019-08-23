#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char s[101], str[101];
	int n;
	cin >> s >> str >> n;
	int len = strlen (s);
	int len1 = strlen (str);
	int same = 0;
	if (len < len1) {
		int sum = len + len1;
		if ((sum <= n) || (sum % n) == 0)
			cout << "Yes" << endl;
		else 
			cout << "No" << endl;
	}
	else if (len >= len1) {
		for (int i = 0; i < len; i++) {
			if (s[i] != str[i])
				break;
			if (s[i] == str[i]) {
				same++;
			}
		}
		int ans = len - same;
		int ans1 = len1 - same;
		int sum = ans + ans1;
		if (sum <= n) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}

	}

	return 0;
}
