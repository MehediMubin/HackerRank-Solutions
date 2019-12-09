#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, arr[105], counter = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == -1) continue;
        bool found = false;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                arr[j] = -1;
                found = true;
                counter++;
            }
        }
        if (found) {
            if (counter % 2 != 0)
                counter++;
        }
    }
    printf("%d\n", counter / 2);

    return 0;
}
