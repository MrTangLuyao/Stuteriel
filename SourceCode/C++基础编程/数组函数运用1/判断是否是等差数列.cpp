#include <iostream>

using namespace std;

//思考一下为什么不能写一个函数来判断数组的长度
//int length(int lenArr[]){
//	int lenNum = sizeof(lenArr)/sizeof(int);
//	return lenNum;
//}

bool IAP(int arr[],int l){
//	int l = length(IAP);
	int a=arr[1]-arr[0];
	if(l>1){
		for(int i = 0;i<=l-2;i++){
			if(arr[i+1]-arr[i]!=a){
				return 0;
			}
		}
		return 1;
	}else{
		return 0;
	}
}  


int main(){
	cout << "Welcome!!" <<endl; 
	cout << "Please tell me the length of the array." <<endl; 
	cout << "Format: Length arrNum1 arrNum2 ... arrNumN"<<endl;
	
	while(1){
		int leng;
		cin >> leng;
		int inputArr[leng];
		for(int i=0;i<=leng-1;i++){
			cin >> inputArr[i];
		}
		int IAPA = IAP(inputArr,leng);
		if(IAPA == 1){
			cout << "This is an A.P."<<endl; 
		}else{
			cout << "Unfortunately,it's not an A.P."<<endl;
		}
		cout << "again!"<<endl;
	}

} 
