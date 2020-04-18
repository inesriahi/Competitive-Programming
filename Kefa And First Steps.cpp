#include <cstdio>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i <n;i++){
        scanf("%d", &a[i]);
    }
    int max=1, curr_max=1;
    for(int i=1;i <n;i++){
        if (a[i] >= a[i-1]){
            curr_max ++;
            if (curr_max > max) max = curr_max;
        }
        else curr_max = 1;
    }

    printf("%d", max);
}
