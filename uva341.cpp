#include <cstdio>
#include <map>
#include <queue>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int main(){
    int n,m,a,s,e,d,tc=0;
    while(scanf("%d", &n), n){
        tc ++;
        map<int, vii> AdjList;
        for(int i = 1; i <= n; ++i){
            scanf("%d", &m);
            while(m--){
                scanf("%d %d", &a,&d);
                AdjList[i].push_back({a,d});
            }
        }
        map<int,int> p;
        scanf("%d %d", &s,&e);
        priority_queue<ii> pq;
        vi dist(n+1, 1000000);
        pq.push({0,s});
        p[s] = s;
        dist[s] = 0;
        while(!pq.empty()){
            ii cn = pq.top(); pq.pop();
            int v= cn.second, w = cn.first;
            for(int j = 0; j < AdjList[v].size(); ++j){
                int u = AdjList[v][j].first, we = AdjList[v][j].second;
                if (dist[v] + we < dist[u]){
                    dist[u] = dist[v] + we;
                    pq.push({dist[u], u});
                    p[u] = v;
                }

            }
        }
        string pp = "";
        int cu = e;
        while(cu != p[cu]){
            pp = " " + to_string(cu) + pp;
            cu= p[cu];
            
        }
        
        cout << "Case " << tc << ": Path = " << s << pp << "; "  << dist[e] << " second delay" << endl;
        // printf("Case %d: Path =%s ; %d second delay",tc, path.c_str(), dist[e]);
    }
}
