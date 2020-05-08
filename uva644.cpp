#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector <string> v;
    string s,curr;
    bool f;
    int count = 0;
    while(cin >> s){
        // s="";
        f= 1;
        v.clear();
        count ++;
        
        while (s != "9")
        {
            v.push_back(s);
            cin >> s;
        }
        // Deal here !!
        sort(v.begin(), v.end());
        for(int i=0;i<v.size()-1;++i){
            curr = v[i];
            if (v[i+1].length() >= curr.length() && curr == v[i+1].substr(0,curr.length())){
                f = 0;
                break;
            }
        }
        if (f) cout << "Set " << count << " is immediately decodable" << endl;
        else cout << "Set " << count << " is not immediately decodable" << endl;
        // if (s=="9") continue;
    //     for(int i=0;i<v.size();++i){
    //     cout << v[i] << endl;
    // }
    }
}

