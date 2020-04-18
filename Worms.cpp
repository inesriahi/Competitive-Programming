#include <cstdio>

using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int a[n], sum = 0;
    bool chosen[n] = {0};

    // for (int i=0;i<n;i++){
    //     printf("%d", chosen[i]);
        
    // }
    // printf("\n");

    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }

    int req = 2*sum / n;
    for (int i=0;i<n;i++){
        if (!chosen[i]){
            
            printf("%d ", i+1);
            for (int j=i+1;j<n;j++){
                if (!chosen[j] && req - a[i] == a[j]){
                    chosen[j] = 1;
                    printf("%d\n", j+1);
                    break;
                }
            }
            chosen[i] = 1;
        }
    }
}
