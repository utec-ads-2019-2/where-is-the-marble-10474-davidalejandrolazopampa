#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int first[10001],second[10001];
int main()
{
    int n2,n,i,resto,j,l=0;
    while(scanf("%d %d",&n,&n2)==2)
    {
        if (n == 0 && n2 == 0) break;
        else {
            for (i = 0; i < n; i++) {
                cin >> first[i];
            }
            for (i = 0; i < n2; i++) {
                cin >> second[i];
            }
            sort(first, first + n);
            printf("CASE# %d:\n", ++l);
            for (i = 0; i < n2; i++) {
                resto = 0;
                for (j = 0; j < n; j++) {
                    if (second[i] != first[j] || resto == 1) continue;
                    printf("%d found at %d\n", second[i], j + 1);
                    resto = 1;
                }
                if (resto != 0)
                    continue;
                printf("%d not found\n", second[i]);
            }
        }
    }
    return 0;
}