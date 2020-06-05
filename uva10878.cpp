#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main(){
    char c;
    string line;
    
    getline(cin, line);
    while(getline(cin,line) && line[0] == '|'){
        istringstream iss(line);
        iss >> c;
        string asc = "";
        string s = "";
        getline(iss,s);
        for(int i = 0; i < s.size(); ++i){
            if (s[i]=='|') break;
            if (s[i] == 'o') asc += "1";
            if (s[i] == ' ') asc += "0";
        }
        char res = stoi(asc, NULL,2);
        cout << res;
    }
    
}
