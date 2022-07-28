#include <iostream>
using namespace std;

int main(){
//    第一题
    int cage[5] = {7,7,8,10,3};
    for(int i = 0;i<=4;i++){
        cout << "第" << i+1 <<"个笼子的鸡蛋数量是" <<cage[i]<<"个"<<endl;
    }
//    第四题
    int arr[5] = { 29, 90 , 12, 3, 8 };
    int temp;
    temp = arr[0];
    arr[0] = arr[4];
    arr[4] = temp;
    for(int i;i<=4;i++){
        cout << arr[i]<<endl;
    }
//    第五题
    int arr2[11] = { 12, 8, 99, 28, 19, 23, 98, 12, 34, 48, 98 };
    for(int i =0;i<=10;i++){
        cout <<arr2[i]<<" ";
        if((i+1)%4==0){
            cout << endl;
        }
    }
}