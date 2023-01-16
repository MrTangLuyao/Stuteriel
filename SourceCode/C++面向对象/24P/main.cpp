#include <iostream>
#include <cmath>//For the function: fabs()求绝对值
using namespace std;

//理论: 4个数挑选2个数字+—-*/合并为第三个数字然后再挑选2个+-*/再挑选变2个最后成为一个 这里面只要最后那个数字里面有一个=24 即表示有解

bool check(double a[],int n);

bool check(double *a, int n)//函数意味着check
//传入参数: a[]是24点数的几个数字 n为参与24点个个数
{
    //返回值为bool
    if(n == 1)
        //当n=0
    {

        if(fabs(a[0]-24) < 10e-12) {
//            cout << a[0] << endl;
            return 1;
        }
        else return 0;//是的话就直接返回1 不是就返回0
    }
    for(int i = 0; i< n; ++i)//考虑大于0的情况 新建了一个i=0 i<牌数 i++
    {
        for(int j = i+1; j< n; ++j)//j=i+1  j<卡牌数 j++
        {//遍历整个牌组

            double t1 = a[i];
            //t1=i号牌
            double t2 = a[j];
            //t2=j号牌
            double b[4];
            //double b[4]
            int r = 0;
            //r=0
            for(int k = 0; k< n; ++k)
                //k=0 k小于牌数时候 k++
            {

                if((k != i) && (k != j)){//此过程相当于求出了除了k=i or k=j相同时候,b遍历了整个a数组
                    b[r++] = a[k];//如果k不等于i或者j b的第r++个=a的第k个
                }
            }

            b[n-2] = t1+t2;//求出倒数第二位
            //以下 进行+ - * / 也就是 把第n-1位数留给了存给运算结果 然后来套用 最后 只要+ - * / 中有一个符合的就返回1 结束程序 否则到最后一位 永远不=24的情况 就返回0代表无解
            if(check(b,n-1))
                return 1;



            b[n-2] = t1*t2;

            if(check(b,n-1))
                return 1;



            b[n-2] = t1-t2;

            if(check(b,n-1))
                return 1;



            b[n-2] = t2-t1;

            if(check(b,n-1))
                return 1;



            b[n-2] = t1/t2;

            if(check(b,n-1))
                return 1;



            b[n-2] = t2/t1;

            if(check(b,n-1))
                return 1;

        }

    }

    return 0;

}

bool inputCards(double a, double b ,double c ,double d){

    double p[4] = {a,b,c,d};

    return check(p,4);

}

int main(){
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    bool isValid=inputCards(a,b,c,d);
    if (isValid) {
        cout << "Valid"<<endl;
    }else{
        cout << "not valid"<<endl;
    }
    return 0;
}
