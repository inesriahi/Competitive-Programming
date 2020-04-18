#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n;
    scanf("%d",&n);
    pair <int,int> a[n];
    
    for(int i=0;i<n;++i){
        scanf("%d %d", &a[i].first, &a[i].second);
    }

    sort(a,a+n);

    int sol = -1;
    for(int i=0;i<n;++i){
        if (a[i].second >= sol){
            sol = a[i].second;
        }
        else{
            sol = a[i].first;
        }
    }

    printf("%d", sol);
}
