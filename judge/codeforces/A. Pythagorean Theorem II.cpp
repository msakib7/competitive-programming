#include<bits/stdc++.h>
using namespace std;
int N,ans;
int sqr(int a)
{
    return a*a;
}
int main(){
	int i,j;
	scanf("%d",&N);
	for(i=1;i<=N;++i)
		for(j=i;j<=N;++j){
			if(sqr(i)+sqr(j)>sqr(N))
				break;
			if(sqr(sqrt(sqr(i)+sqr(j)))==sqr(i)+sqr(j))
				++ans;
		}
	printf("%d\n",ans);
	return 0;
}
