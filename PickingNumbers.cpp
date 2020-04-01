#include <bits/stdc++.h>

using namespace std;

#define fread freopen("in.txt", "r", stdin)
#define fwrite freopen("out.txt", "w", stdout)

int main ()
{
    ///fread;
    int n, in;
    vector <int> v;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &in);
        v.push_back(in);
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int ans = 1;
    for (int i = 0; i < v.size() - 1; i++) {
        int cnt = 1;
        for (int j = i + 1; j < v.size(); j++) {
            int val = v[i] - v[j];

            if (val <= 1) cnt++;

            else break;
        }

        if (cnt > ans)
            ans = cnt;
    }

    printf("%d\n", ans);

    return 0;
}
