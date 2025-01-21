#include<bits/stdc++.h>
using namespace std;

void reverseString4(vector<string> &str) {
    int start = 0;
    int end = str.size()-1;
    while(start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

void reverseString3(vector<char> &s) {
    int start = 0;
    int end = s.size()-1;
    while(start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

void reverseString2(char arr[], int n) {
    int start = 0;
    int end = n-1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void reverseString(string str[], int n) {
    int start = 0;
    int end = n-1;
    while(start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int main() {
    // string arr: {"hello", "Bye"}    char arr: {'h', 'i', 'b', 'y', 'e'}
    string str[] = {"hello", "I", "am", "Spidey", "Heheh"};
    char arr[] = {'h', 'e', 'l', 'l', 'o'};
    vector<char> s = {'e', 'c', 'a', 'r'};
    vector<string> str1 = {"GOAT", "MESSI"};
    int n = sizeof(str) / sizeof(str[0]);

    reverseString(str, n);
    for(string i : str) {
        cout << i << " ";
    }
    cout << endl;

    reverseString2(arr, n);
    for(char i : arr) {
        cout << i << " ";
    }
    cout << endl;

    reverseString3(s);
    for(char i : s) {
        cout << i << " ";
    }
    cout << endl;

    reverseString4(str1);
    for(string i : str1) {
        cout << i << " "; 
    }
}