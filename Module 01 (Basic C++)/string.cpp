#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    cin.ignore(); // for ignoring the newline
    char s[100];

    cin.getline(s,100); // to get the space in the string also
    cout << x << endl << s << endl;

    return 0;
}