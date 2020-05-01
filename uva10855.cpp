#include <iostream>

using namespace std;

int main(){
    int n,m;
    char grid[1000][1000], mask[1000][1000], ph[1000][1000];
    while(true){
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        
        for (int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j) 
                cin >> grid[i][j];
            
        
                
        for (int i = 0; i < m; ++i)
            for(int j = 0; j < m; ++j) 
                cin >> mask[i][j];
        
        
        for (int c = 0; c < 4; c++){
            int count = 0;
            for (int i = 0; i <= n-m; ++i){
                for (int j = 0; j <= n - m; ++j){
                    bool flag = 1;
                    for (int k = 0; k < m && flag; k++){
                        for (int l = 0; l < m; l++){
                            if (grid[i+k][j+l] != mask[k][l]){
                                flag = 0;
                                break;
                            }
                        }
                    } 
                    if (flag) count ++;
                }
            } 
            cout << count;
            if (c < 3) cout << " ";
            
            for (int i = 0; i < m; ++i)
                for (int j = 0; j < m; j++) 
                    ph[j][m-i-1] = mask[i][j];
            // cout << endl;
            
                for (int i = 0; i < m ; ++i){
                    for (int j = 0; j < m; ++j){
                        mask[i][j] = ph[i][j];
                    }
                }
                // for (int i = 0; i < m; ++i){
                //     for(int j = 0; j < m; ++j){ 
                        
                //         cout << mask[i][j] << " ";
                //     }
                //     cout << endl;
                // }
                
                    
            
        }
        cout << endl;
    }
    
}
