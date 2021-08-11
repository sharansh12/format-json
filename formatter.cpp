#include <bits/stdc++.h>
using namespace std;
#define int long long

void nl(int c){
    assert(c>=0);
    cout << '\n';
    string x = "    ";
    for(int i=0;i<c;i++){
        cout << x ;
    }
}
int32_t main(){
    ios::sync_with_stdio(0),cin.tie(0);
    string s;
    getline(cin,s);
    int c=0;
    for(int j=0;j<s.size();j++){
        char i = s[j];
        if(i==' ')continue;
        if(i=='{' or i=='['){
            if(j and s[j-1]!=',')nl(c);
            cout << i ;
            c++;
            nl(c);
        }
        else if(i=='}' or i==']'){
            c--;
            nl(c);
            cout << i;
            if(j+1<s.size() and s[j+1]!=',')nl(c);
        }
        else if(i==','){
            cout << i;
            nl(c);
        }
        else if(i==':'){
            cout << ' ' << i << ' ';
        }
        else cout << i;
    }
}
