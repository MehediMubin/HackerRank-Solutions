#include <bits/stdc++.h>

using namespace std;

int main ()
{
    stack <int> stk, mx;
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, val;
        scanf("%d", &n);
        if (n == 1) {
            scanf("%d", &val);
            stk.push(val);
            if (mx.empty()) {
                mx.push(val);
            }
            else if (stk.top() >= mx.top()) {
                mx.push(val);
            }
        }
        else if (n == 2) {
            if (stk.top() == mx.top())
                mx.pop();
            stk.pop();
        }
        else if (n == 3)
            cout << mx.top() << endl;
    }

    return 0;
}
