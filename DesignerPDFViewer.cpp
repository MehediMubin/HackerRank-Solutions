#include <iostream>
#include <cstring>

using namespace std;

int main()
{       
        char str[11];
        int arr[26], sum = 0, var = 0;
        for (int i = 0; i < 26; i++) {
                cin >> arr[i];
        }
        int a[101];
        cin >> str;
        int len = strlen (str);
        for (int i = 0; i < len; i++) {
                var = str[i] - 'a';
                if (sum < arr[var]) 
                        sum = arr[var];
        }
        int ans = sum * len;
        cout << ans << endl;
        
        return 0;
}

