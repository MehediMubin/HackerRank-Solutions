#include<iostream>
using namespace std;

int main()
{
    int m, n, k, q, i;
    cin >> n >> k >> q;
    int arr[n];
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    k = k % n;
    while(q--){
        cin >> m;
        m -= k;
        if(m < 0)
            m += n;
        cout << arr[m] << endl;
    }

    return 0;
}
