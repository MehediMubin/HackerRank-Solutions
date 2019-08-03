#include <iostream>

using namespace std;

int main()
{       
        int n, res = 0;
        cin >> n;
        int num = 5;
        for (int i = 1; i <= n; i++) {
                int div = 0;
                div = num / 2;
                res += div;
                num = div * 3;
        }       
        cout << res << endl;
        
        return 0;
}
