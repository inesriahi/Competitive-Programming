#include <iostream>
#include <map>
#include <cstring>
using namespace std;
int main(){
    int n, m;
    string s1,s2;
    cin >> n >> m;
    map<string, string> dic;
    while(m--){
        cin >> s1 >> s2;
        dic[s1] = s2;
    }
    while (n--){
        cin >> s1;
        s2 = dic[s1];
       
        if (strlen(s2.c_str()) < strlen(s1.c_str())){
            cout << s2;
        }
        else {
            cout << s1;
        }
        cout << " ";
    }

}
