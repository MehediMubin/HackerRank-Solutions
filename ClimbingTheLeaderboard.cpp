#include <bits/stdc++.h>

using namespace std;

vector <int> v;

bool found (int n)
{
    int left = 0, right = v.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (v[mid] == n) return true;

        if (v[mid] > n) left = mid + 1;

        else right = mid - 1;
    }
    return false;
}

int position (int n)
{
    int left = 0, right = v.size() - 1, mid = 0;
    while (left <= right) {
        mid = (left + right) / 2;
        if (v[mid] == n) return (mid + 1);

        if (v[mid] > n) left = mid + 1;

        else right = mid - 1;
    }
    if (v[mid] > n) return (left + 1);

    else return (right + 2);
}

int main ()
{
    int n, in, m;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &in);
        if (!i) v.push_back(in);

        else if (!found(in)) v.push_back(in);
    }
    scanf("%d", &m);
    while (m--) {
        scanf("%d", &in);
        printf("%d\n", position(in));
    }

    return 0;
}
