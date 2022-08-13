#include <iostream>
using namespace std;

int main(){
    int var1 = 100,var2 = 200;
    const int*pa=&var1;
    //*pa = 123;错误
    pa = &var2;//OK
    int * const pi = &var1;
    *pi = 123;//OK
    //pi = &var2;不可以
    const int * const pj = &var1;
    //*pj = 123;错误
    //pj = &var2;不可以
    //指针和数组
    int arr[10] ={1,2,3,4,5,6,7,8,9,10};
    cout << "第一个元素为 " << arr[0]<<endl;
    int *p = arr;
    cout <<"指针来访问第一个元素 " << *p <<endl;
    p++;//偏移4个字节
    cout <<"指针来访问第二个 " << *p <<endl;
    p--;
    for(int i = 0;i<=9;i++){
        cout << *p <<endl;
        p++;//use Pointer
        cout << arr[i]<<endl;//use arr[x]
    }
    //指针和函数
    
}
