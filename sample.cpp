#include<iostream>
using namespace std;

int addnum(int a, int b){
    return a+b;
}
int subnum(int a, int b){
    return a-b;
}
int mulnum(int a, int b){
    return a*b;
}
int divnum(int a, int b){
    return double (a/b);
}

int main(){
    int a,b;
    cin >>a>>b;
    cout << addnum(a,b) << endl;
    cout << subnum(a,b) << endl;
    cout << mulnum(a,b) << endl;
    cout << divnum(a,b) << endl;
}