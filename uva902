#include <string>
#include <iostream>
#include <map>

using namespace std;
int main(){
    int n;
    string s;
    while (cin >> n >> s, !cin.eof()){
    map<string, int> m;
    
    int l = s.length();
    for(int i = 0; i < l - n + 1;++i){
            m[s.substr(i, n)] += 1;
    }
    int maxi = 0;
    string res = "";
    for(auto i = m.begin(); i != m.end(); ++i){
        if (i->second > maxi){
            maxi = i->second;
            res = i->first;
        }
        //cout << i->first << " : " << i->second << endl; 
    }
    cout << res << endl;
    }
    return 0;
}
