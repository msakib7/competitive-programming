#include <stdio.h>
#include <math.h>
int main() {
    int T,n,l,i,a[100],t=0,x;
     int p;
    scanf("%d",&T);
    while(T--) {
        scanf("%d",&n);
        for(i=1; i<=n; i++) {
            scanf("%d",&a[i]);
        }
        l=0;
       p=2;
        for(i=1;i<=n; i++) {
            if(a[i]>p){
                l+=ceil((a[i]-p)/5.0);
                p=a[i];
                }
        }
        printf("Case %d: %d\n",++t,l);
    }

    return 0;
}
