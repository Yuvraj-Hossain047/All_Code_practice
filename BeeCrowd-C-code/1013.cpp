#include<iostream>
using namespace std;

int main(){
    int a, b, c, d, maior;
    cin >> a >> b >> c;
    
    d = (a + b + abs(a - b)) / 2; 
    
    maior = (c + d + abs(d - c)) / 2;
    
    cout << maior << " eh o maior" << endl;
    
    return 0;
}
