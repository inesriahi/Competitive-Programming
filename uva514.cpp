#include <iostream>
#include <stack>
using namespace std;

int n;
int main(){
    int a[1000],c,i,j;
    
    while (true)
    {
        cin >> n;
        if (n==0) break;
        while(true){
            cin >> a[0];
            if (a[0] == 0){
                cout << endl;
                break;
            }
            for(int d = 1;d<n;++d){
                cin >> a[d];
            }
            c = j = 0;
            i = 1;
            stack <int> s;
            
            while(i <= n){
                // if (c > 0 && s.top() > a[j]) break;
                
                s.push(i++), c++;
                
                while(!s.empty() && s.top() == a[j]){
                    
                    s.pop();
                    j++;
                    if (j>=n) break;
                    
                }
                // cout << "here\n";
                
                
            }
            if(s.empty()) cout << "Yes\n";
            else cout << "No\n";
            
        }
        
    }
    return 0;
}
