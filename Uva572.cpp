#include <cstdio>
#include <cstring>
using namespace std;
bool visited[150][150] = {0};
char grid[150][150],line[150];
int dr[] = {1,1,0,-1,-1,-1, 0, 1}, n,m,count; 
int dc[] = {0,1,1, 1, 0,-1,-1,-1}; 
void dfs(int i, int j){
    if (i < 0 || i >= m || j < 0 || j >= n){
        return;
    }
    if (!visited[i][j])
        visited[i][j] = 1;
    else
        return;
    
    int nr, nc;
    for (int d=0;d<8;++d){
        // printf("hers\n");
        nr = i + dr[d];
        nc = j + dc[d];
        if (!visited[nr][nc] && grid[nr][nc] == '@'){
            dfs(nr,nc);
        }
    }
    return;
}

int main()
{
    while(sscanf(gets(line), "%d %d", &m,&n), m){
        count = 0;
        memset(visited, 0, sizeof visited);
        for(int i=0;i<m;++i){
            gets(grid[i]);
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;j++){
                if(!visited[i][j] && grid[i][j] == '@'){
                    
                    dfs(i,j);
                    count ++;
                    
                }
            }
        }
        printf("%d\n", count);

    }
} 
