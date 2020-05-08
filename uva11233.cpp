#include <map>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int l,n;
    map<string, string> dic;
    string f,s, vowels = "aeiou";
    cin >> l >> n;
    while (l--){
        cin >> f >> s;
        dic[f] = s;
    }

    while(n--){
        cin >> f;
        if (dic.find(f) != dic.end()){ // in dic
            cout << dic[f] << endl;
        } else {
            int pos = vowels.find(f.substr(f.length() - 2, 1));
            // cout << vowels[pos] << endl;
            if (f.back() == 'y' && pos == string::npos) cout << f.substr(0, f.length() - 1) + "ies" << endl;
            else if (f.back() == 'o' || f.back() == 's' || f.back() == 'x')
                cout << f + "es" << endl;
            else if (f.substr(f.length() - 2, 2) == "sh" || f.substr(f.length() - 2, 2) == "ch")
                cout << f + "es" << endl;
            else
                cout << f + "s" << endl;
        }
    }
}
