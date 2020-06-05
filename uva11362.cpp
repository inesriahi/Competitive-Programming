#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int tc,n;
    cin >> tc;
    bool f;
    while(tc--){
        vector<string> v;
        string phone;
        f = 0;
        cin >> n;
        while(n--){
            cin >> phone;
            v.push_back(phone);
        }
        sort(v.begin(), v.end());
        for(int i=0; i < v.size()-1; ++i){
            if (v[i] == v[i+1].substr(0,v[i].size())){
                f = 1;
                break;
            }
        }
        if (f) cout << "NO" << endl;
        else cout << "YES" << endl;
        
    }
}
