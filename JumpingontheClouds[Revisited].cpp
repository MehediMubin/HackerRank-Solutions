#include <iostream>

using namespace std;

int main ()
{       
        int e = 100, n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
                cin >> arr[i];
        }       
        int i = 0;
        while (true) {
                if (arr[i] == 0)
                        e -= 1;
                else if (arr[i] == 1)
                        e -= 3;
                if (i == n - k) {
                        break;
                }       
                i = (i + k) % n;
        }       
        cout << e << endl;
        
        return 0;
}
