#include <cstdio>
#include <cstring>

using namespace std;
#define rep(i,a,b) for(int i = int(a); i<int(b);i++)

int n,cases=1;
char line[250],grid[250][250];
bool fb=0, fw=0;
int dr[] = {-1,-1,0,0,1,1}; 
int dc[] = {-1,0,-1,1,0,1}; 

bool reached(int r,int c, char c1, char c2){
    if (r<0 || r>=n || c<0 ||c >=n) return 0;
    if (grid[r][c] != c1) return 0;
    grid[r][c] = c2;
    if (c1 == 'w' && c == n-1) return 1;
    if (c1 == 'b' && r == n-1) return 1;
    rep(d,0,6) {
        if (reached(r+dr[d], c+dc[d], c1, c2))
            return 1;
    }
    return 0;
}

int main(){
    while(sscanf(gets(line), "%d", &n), n){
        fb = 0,fw = 0;
        for(int i =0;i<n;i++){
            gets(grid[i]);
        }

        for(int i =0;i<n;i++){
            // black
            if (reached(0,i,'b','.')){
                fb = 1; 
                break;
            }            
        }
        // for(int i =0;i<n;i++){
        //     for(int j =0;j<n;j++){
        //         printf("%c", grid[i][j]);
        //     }
        //     printf("\n");
        // }
        
        if (fb) printf("%d %c\n", cases, 'B');
        else  printf("%d %c\n", cases, 'W');
        cases ++;
    }

}
