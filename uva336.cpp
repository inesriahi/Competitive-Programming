/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <queue>
using namespace std;
typedef vector<int> vi;

int main()
{
    int n,c=0;
    while(scanf("%d", &n),n){
        map<int, vi> AdjList;
        while(n--){
            int a,b;
            scanf("%d %d", &a,&b);
            AdjList[a].push_back(b);
            AdjList[b].push_back(a);
        }
            int f, s;
            while(scanf("%d %d", &f, &s), f, s){
                c++;
                map<int,bool> vis;
                map<int, int> dist;
                queue<int> q;
                q.push(f);
                dist[f] = 0;
                vis[f] = 1;
                while(!q.empty()){
                    int node = q.front(); q.pop();
                    
                    for(int j =0; j < AdjList[node].size(); ++j){
                        int u = AdjList[node][j];
                        if (!vis[u]){
                            vis[u] = 1;
                            dist[u] = dist[node] + 1;
                            q.push(u);
                            
                        }
                    }
                }
                int count = 0;
                for(std::map<int,int>::iterator iter = dist.begin(); iter != dist.end(); ++iter)
                {
                    //printf("%d -> %d ,",iter->first, iter->second);
                    if(iter->second > s){
                        count ++;
                    }
                    
                }
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", c,count,f,s);

            }
        
    }

    return 0;
}
