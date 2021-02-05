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
int divnum(double a, double b){
    return double (a/b);
}
/**
 * @brief 
 * 
 * @return int 
 */
int main(){
    int a=5,b=4;
    
    cout << addnum(a,b) << endl;
    cout << subnum(a,b) << endl;
    cout << mulnum(a,b) << endl;
    cout << divnum(a,b) << endl;
    return 0;
}