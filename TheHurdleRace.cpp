#include <iostream>
#include <algorithm>

using namespace std;

int main()
{       
        int n, k, ans = 0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
                cin >> arr[i];
        }       
        sort (arr, arr + n);
        if (k < arr[n - 1]) {
                ans = arr[n - 1] - k;
        }       
        else if (k >= arr[n - 1]) {
                ans = 0;
        }       
        cout << ans << endl;
        
        return 0;
}       

