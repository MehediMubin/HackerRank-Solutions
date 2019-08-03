#include <iostream>

using namespace std;

int main()
{       
        int T, n, k;
        cin >> T;
        for (int i = 0; i < T; i++) {
                int counter = 0;
                cin >> n >> k;
                int arr[n];
                for (int i = 0; i < n; i++) {
                         cin >> arr[i];
                         if (arr[i] <= 0) {
                                 counter++;
                         }       
                }        
                if (counter >= k)
                        cout << "NO" << endl;
                else    
                        cout << "YES" << endl;
        }       
        
        return 0;
}
