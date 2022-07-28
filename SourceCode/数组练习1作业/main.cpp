#include <iostream>
using namespace std;

int main(){
    int num[100],i = 0; //首先初始化数组num,循环引导数组的变量i
    cin >> num[0];//接下来输入第一个值到数组里面
    int sum = num[0];//把输入的一个数组存储到sum变量中
    while(num[i]!=0){//循环，如果说输入的数值不是0，就继续输入
        i++;//数组下标向前挪一格
        cin >> num[i];//输入到数组中
        sum += num[i];//等效于 sum=sum+num[i] 把现在输入的值加到变量sum中
    }
    cout << "平均值是：" << sum/i <<endl;//求出平均数，这里的i等于我们输入最后一个数组的下标，但是最后一个是无效的，但是数组是从0开始的，所以正好i是我们有效数值的个数，所以平均数是 总数/个数

    int arr[100], n;
    cin >> n;
    for (int j = 0; i <= n - 1; i++) {
    	cin >> arr[j];
    }
    for (int j = n - 1; i >= 0; i--) {
    	if (arr[j] % 3 == 0) {
    		cout << arr[j] << " ";
    	}
    }
    cout << endl;
    for (int j = n - 1; i >= 0; i--) {
    	if (j % 3 == 0) {
    		cout << arr[j] << " ";
    	}
    }

}