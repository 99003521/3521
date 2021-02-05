#include<iostream>
using namespace std;

/**
 * @brief Arithmatic functions
 * 
 * @param a variable 
 * @param b variable
 * @return int datatype
 */



int addnum(int a, int b=1){
    return a+b;
}
float addnum(float a, float b=1){
    return a+b;
}

int addnum1(int &a, int &b){
    return a+b;
}

int subnum(int a, int b=1){
    return a-b;
}
int mulnum(int a, int b){
    return a*b;
}
int divnum(double a, double b){
    if(b==0){return -1;}
    return double (a/b);
}
/**
 * @brief main1 function
 * 
 * @return int returntype
 */
int main(){
    int a=5,b=4;
    // int *x=&a, *y=&b;
    cout << "Addition:\n";
    cout << addnum(a,b) << endl;
    cout << addnum1(a,b) << endl;

    cout << "Substraction:\n";
    cout << subnum(a,b) << endl;

    cout << "Multilication:\n";
    cout << mulnum(a,b) << endl;

    cout << "Division:\n";
    cout << divnum(a,b) << endl;
    
    return 0;
}