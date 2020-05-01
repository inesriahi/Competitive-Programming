#include <cstdio>
#include <string.h>
#include <algorithm>

using namespace std;
int main(){
    int n, m,l,r,ls[100010], rs[100010];
    while(scanf("%d %d", &n,&m), n && m){
        for(int i = 0; i < 100010; ++i){
            ls[i] = i - 1;
            rs[i] = i + 1;
        }
        while(m--){
            scanf("%d %d", &l,&r);
            l--,r--;
            
            if (ls[l] < 0) printf("* ");
            else printf("%d ", ls[l] + 1);
            if (rs[r] >= n) printf("*\n");
            else
            {
                printf("%d\n", rs[r] + 1);
            }
            rs[ls[l]] = rs[r];
            ls[rs[r]] = ls[l];
           
        }
        printf("-\n");
    }
}
