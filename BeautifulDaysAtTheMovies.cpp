#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{       
        int a, b, c, counter = 0;
        cin >> a >> b >> c;
        for (int i = a; i <= b; i++) {
                int num = i;
                int newNum = 0;
                while (num != 0) {
                        int mod = num % 10;
                        newNum = 10 * newNum + mod;
                        num /= 10;
                }       
                int ans = abs (i - newNum);
                if (ans % c == 0)
                        counter++;
        }       
        cout << counter << endl;
        
        return 0;
}
