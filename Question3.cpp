#include<iostream>

using namespace std;

string Reverse(string s) {
    int n = s.length();
    for(int i=0;i<n/2;i++) {
        swap(s[i], s[n-i-1]);
    }
    return s;
}

int main() {
    string str;
    cout<<"Enter the string: ";
    getline(cin, str);
    string ans = Reverse(str);
    cout<<"Original String: "<<str<<endl;
    cout<<"Reversed String: "<<ans<<endl;
}
