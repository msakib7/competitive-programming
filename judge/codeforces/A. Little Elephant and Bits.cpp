#include<bits/stdc++.h>
using namespace std;

const int mx=100000;

char s[mx+ 1];

int main() {
    scanf("%s",s);
    int n=strlen(s);
    for (int i = 0; i < n; ++ i) {
        if (s[i] == '0') {
            for (int j=0;j<n;++j) {
                if (i!=j) {
                    putchar(s[j]);
                }
            }
            puts("");
            return 0;
        }
    }
    printf("%s\n", s + 1);
    return 0;
}
