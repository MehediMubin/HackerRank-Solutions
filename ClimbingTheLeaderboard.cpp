#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m;
    unsigned arr[m];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    int a[m];
    int j = 1;
    a[0] = j;
    for (int i = 1; i < m; i++) {
        if (arr[i] == arr[i - 1]) {
            a[i] = j;
        }
        else {
            a[i] = ++j;
        }
    }
    cin >> n;
    unsigned ara[n];
    j = m - 1;
    for (int i = 0; i < n; i++) {
        int counter = 0;
        int ans = 0;
        cin >> ara[i];
        while (j >= 0) {
            if (ara[i] >= arr[j]) {
            }
            else {
                counter++;
                break;
            }
            j--;
        }
        if (counter != 0) {
            ans = a[j] + 1;
        }
        else {
            ans = a[j + 1];
        }
        cout << ans << endl;
    }

    return 0;
}
