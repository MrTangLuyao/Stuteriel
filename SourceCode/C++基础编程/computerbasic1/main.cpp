#if 0
NICKTANG制作
本项目讲解知识点:
1数组后的字符串
2神奇的指针(指针的引子)
3练习下划线起名法
#endif
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
void super_swap(int *a , int*b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main(){
    char hello_1[6] = {'h','e','l','l','1','\0'};
    cout << hello_1 << endl;
    char hello_2[] = {"hello2"};
    cout << hello_2<<endl;
    char hello_3[100]={"hello3"};
    cout << hello_3 <<endl;
    const char *hello_4 = "hello4";
    cout <<hello_4<<endl;//以上四种都是字符串的初始化方法
    strcpy(hello_3,hello_4);
    cout << hello_3 <<endl;

    string str_1 = "abcd";
    string str_2 = "xxxyyyzzz";
    cout << str_1.size()<<endl;
    cout << str_2.size() <<endl << "拼接后" <<endl;
    str_1 += str_2;
    cout << str_1.size() <<endl;

    int var_1 = 1;
    cout << var_1 <<endl;
    int *poi_1 = &var_1;
    cout << poi_1 <<endl <<*poi_1 <<endl<<endl;

    int a = 123;
    int b = 234;
    super_swap(&a,&b);
    cout << a <<b <<endl;
}

