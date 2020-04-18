#include <cstdio>

using namespace std;

int main(){
    int cmax = 0, max = 0,n,cs=0,s=0,e=0,ones = 0;
    scanf("%d", &n);
    int a[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i=0;i<n;i++){
        
        if (a[i] == 0){
            cmax++;
            if (cmax > max){
                max = cmax;
                e = i;
                s = cs;
            }
        }
        else {
            cmax --;
        }
        if (cmax < 0){
            cmax = 0;
            cs = i+1;
        }
    }
    
    for (int i=0; i <n; ++i){
        if (i >= s && i <= e){
            if (a[i] == 0) ones++;
        }
        else {
            if (a[i] == 1) ones++;
        }
    }

    printf("%d",ones);

}
