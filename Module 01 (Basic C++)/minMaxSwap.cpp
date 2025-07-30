#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    
    swap(a,b);

    cout << min({3,7,5,10,12}) << endl;
    cout << max({23,45,678,88,90}) << endl;

    cout << a << " " << b << endl;

    return 0;
}
