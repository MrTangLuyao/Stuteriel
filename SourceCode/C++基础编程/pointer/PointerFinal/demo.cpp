//运用
//封装一个函数，利用**冒泡排序**，实现对数组的升序排列
int arr[10]={4,3,6,9,1,2,10,8,7,5};


#include <iostream>
using namespace std;

void bubbleSort(int *arr,int len){
    for(int i = 0;i<len-1;i++){
        for(int j = 0;j<len-i-1;j++){
            if(arr[j]>arr[j+1]){
                int t =arr[j];
                arr[j] = arr [j+1];
                arr[j+1] = t;
            }
        }
    }
}

void printArr(int *arr,int len){
    for(int i = 0;i<len;i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main(){
    int l = sizeof(arr)/sizeof(int);
    bubbleSort(arr,l);
    printArr(arr,l);
}