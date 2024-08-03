#include<bits/stdc++.h>
using namespace std;
int main() {
    int age;
    cin >> age;
    if(age <= 17) {
        cout << "Child" << "\n";
    }
    else if(age <= 64) {
        cout << "Adult" << "\n";
    }
    else {
        cout << "Senior Citizen" << "\n";
    }
}