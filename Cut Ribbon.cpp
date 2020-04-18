#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;
int a[3], memo[3][4005];

int count(int i,int n){
    if (n<=0) return 0;
    if (i==0 && n%a[i]==0) return n / a[i];
    else if (i==0) return 0;
    if (memo[i][n] != -1) return memo[i][n];
    if (a[i] > n) return count(i-1,n);
    int b = count(i,n-a[i]);
    if (b==0 && (n-a[i])!=0) return memo[i][n] = count(i-1,n);
    return memo[i][n] = max(count(i-1,n), b+1);
}

int main(){
    int n;
    memset(memo, -1, sizeof memo);
    scanf("%d %d %d %d", &n, &a[0], &a[1], &a[2]);
    printf("%d", count(2,n));
}
