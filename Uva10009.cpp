#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <queue>
#include <vector>
#include <map>

using namespace std;
char s;
char line[300];
map<char,char> p;
map<char, bool> visited;
map<char,vector<char> > AdjList;

void printPath(char u){
    if (u == s){
        printf("%c",s);
        return;
    }
    printPath(p[u]);
    printf("%c",u);
}

int main(){
    string c1,c2;
    int tc;
    int m,n;
    

    scanf("%d", &tc);
    while (tc--){
        scanf("%d %d", &n,&m);
        p.clear();
        visited.clear();
        AdjList.clear();
        for (int i = 0; i < n; ++i)
		{
            cin >>c1>>c2;
            // printf("%s %s", c1,c2);
            char f,sec;
            f = c1[0];
            sec = c2[0];
            AdjList[f].push_back(sec);
            AdjList[sec].push_back(f);
            visited[f] = 0; visited[sec] = 0;
        }

        // for(auto it = AdjList.cbegin(); it != AdjList.cend();++it){
        //     cout << it->first << ": ";
        //     for(auto it1 = (it->second).begin(); it1 != (it->second).end(); it1++){
        //         cout << *it1 << " ";
        //     }
        //     cout << endl;
        // }

        for (int i = 0; i < m; ++i)
		{
            cin >>c1>>c2;
            char d;
            visited.clear();
            p.clear();
            s = c1[0];
            d = c2[0];
            queue<char> q;
            q.push(s);
            while (!q.empty())
            {
                char u = q.front();
                if (u==d) break;
                q.pop();
                for (int j=0; j < (int)AdjList[u].size(); ++j){
                    char v = AdjList[u][j];
                    if (!visited[v]){
                        visited[v] = 1;
                        p[v] = u;
                        q.push(v);
                    }
                }
            }
            printPath(d);
            printf("\n"); 
        }
        if (tc) printf("\n");
    }
}
