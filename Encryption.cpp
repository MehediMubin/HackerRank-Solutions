#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char s[1000], str[9][10];
    int i = 1, j, len = 0, col = 1, row = 1, k = 0;
    scanf("%s", s);
    len = strlen(s);
    while(row * col < len){
        if(i % 2 == 0)
            row++, i++;
        else
            col++, i++;
    }
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            str[i][j] = s[k];
            k++;
        }
    }
    str[i][j] = NULL;
    for(i = 0; i < col; i++){
        for(j = 0; j < row; j++){
            if(str[j][i] >= 'a' && str[j][i] <= 'z')
                cout << str[j][i];
        }
        if(i != col - 1)
            cout << " ";
    }

    return 0;
}
