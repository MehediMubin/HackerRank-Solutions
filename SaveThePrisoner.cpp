#include <iostream>

using namespace std;

int main ()
{       
        int T, n, m, s;
        cin >> T;
        for (int i = 1; i <= T; i++) {
                cin >> n >> m >> s;
                int mod = m % n;
                if ((mod + s - 1) % n == 0)
                        cout << n << endl; 
                else
                        cout << ((mod + s - 1) % n) << endl;
        }
        
        return 0;
}
