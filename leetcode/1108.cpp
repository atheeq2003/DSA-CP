#include<bits/stdc++.h>
using namespace std;
string defangIPaddr(string address) {
    string defangIP = address;
    string str="[.]";
    for(int i=0;i<defangIP.length();i++){
        if(defangIP[i]=='.'){
            defangIP.replace(i,1,str);
            i+=2;
        }
    }
    return defangIP;
}
int main() {
    string output = defangIPaddr("1.1.1.1");
    cout << output;
}
