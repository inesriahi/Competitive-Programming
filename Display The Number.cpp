#include <cstdio>

using namespace std;

int main(){
    int n,m;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&m);
        if (m%2==0){
            while (m>0)
            {
                printf("1");
                m-=2;
            }
        }
        else {
            printf("7");
            m-=3;
            while (m>0)
            {
                printf("1");
                m-=2;
            }
        }
        printf("\n");
    }
}
