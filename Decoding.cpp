#include <iostream>
#include <cstring>

using namespace std;
string res = "";

void sol(string s){
    int l = strlen(s.c_str());
    // cout << "1\n";
    if (l==1){
        res += s;
        return;
    }
    if (l%2==0){
        res = s[0] + res;
        // cout << "2\n";
    } else {
        res = res + s[0];
        // cout << res << endl;
    }
    s = s.substr(1);
    sol(s);
}

int main(){
    int n;
    string s;
    cin >> n >> s;
    sol(s);
    cout << res;
}
