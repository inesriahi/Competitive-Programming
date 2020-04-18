#include <cstdio>
#include <algorithm>

using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    a[0] = 1;
    for(int i=1;i<n;++i){
        int inp;
        scanf("%d", &inp);
        a[i] = a[i-1] + inp;
    }
    int m,k,j;
    scanf("%d", &m);
    scanf("%d", &m);
    for(int i=0;i<m;i++){
        scanf("%d", &k);
        j = lower_bound(a,a+n,k) - a;
        if (a[j] == k) printf("%d\n", j+1);
        else printf("%d\n", j);
    }
}
