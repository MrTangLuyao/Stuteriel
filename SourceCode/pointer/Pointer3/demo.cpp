//指针与函数(basic)
#include<iostream>
using namespace std;

void swap01(int a,int b){
    int temp = a;
    temp = a;
    a = b;
    b = temp;
    return;
}

void swap02(int *a,int *b){
    int temp = *a;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main(){
    int a = 10;
    int b =20;
    swap01(a,b);
    cout << a << b<< endl;
    swap02(&a,&b);
    cout << a << b<<endl;
}