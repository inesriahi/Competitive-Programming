/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <map>
#include <bitset>
#include <sstream>
#include <cmath>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;

ll _sieve_size;
bitset<10000010> bs;   // 10^7 should be enough for most cases
vi primes;   // compact list of primes in form of vector<int>

void sieve(ll upperbound) {          // create list of primes in [0..upperbound]
  _sieve_size = upperbound + 1;                   // add 1 to include upperbound
  bs.set();                                                 // set all bits to 1
  bs[0] = bs[1] = 0;                                     // except index 0 and 1
  for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
    // cross out multiples of i starting from i * i!
    for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
    primes.push_back((int)i);  // also add this vector containing list of primes
} }  
vector<int> fs;
vector<int> ss;
void primefac(int y){
    for(int i=0;; ++i){
        if (primes[i] > y) break;
        int count = 0,n;
        while (y%primes[i] == 0){
            n = primes[i];
            count++;
            y /= primes[i];
        }
        if (count){
            fs.push_back(n);
            ss.push_back(count);
        }
    }

}

int main()
{
    sieve(32800);
    string s;
    int a, p,x;
    bool f = 1;
    while(getline(cin, s) && s != "0"){
        
        fs.clear();
        ss.clear();
        
        
        // cin.ignore();
        istringstream iss (s);
        x=1;
        while(iss >> a >> p){
            x *= pow(a,p);
            // cout << pow(a,p) << endl;
        }
        // cout << p << endl;
        
        int y = x-1;
        primefac(y);
        for(int i = fs.size()-1; i >= 0; --i){
            cout << fs[i] << " " << ss[i];
            if (i > 0) cout << " ";
        }
        cout << endl;
        
        
    }
    
    // cout<<"Hello World";

    return 0;
}
