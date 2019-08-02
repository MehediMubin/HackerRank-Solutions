#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    int mini = arr[0];
    int maxi = arr[0];
    int mi = 0, ma = 0;
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > maxi) {
            maxi = arr[i];
            ma++;
        }
        else if (arr[i] < mini) {
            mini = arr[i];
            mi++;
        }
    }
    cout << ma << " " << mi << endl;

    return 0;
}
