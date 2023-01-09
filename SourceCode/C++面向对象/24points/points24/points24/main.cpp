#include "complexFunction.h"
using namespace std;


bool judge(short a[]){
    
    return 1;
}


int main(){
    cout << "24points-valid-test app"<<endl;
    string ori_a,ori_b,ori_c,ori_d;
    cin >> ori_a >> ori_b >> ori_c >> ori_d;
//    cout << ori_a << ori_b <<ori_c <<ori_d<<endl;
//    short a = cardSwitcher(ori_a);
//    short b = cardSwitcher(ori_b);
//    short c = cardSwitcher(ori_c);
//    short d = cardSwitcher(ori_d);
    short combination[4]={cardSwitcher(ori_a),cardSwitcher(ori_b),cardSwitcher(ori_c),cardSwitcher(ori_d)};
    sort(combination,combination+4);
//    showCombination(combination);
    bool answer = judge(combination);
    if(answer==1){
        cout << "valid"<<endl;
    }else{
        cout << "invalid"<<endl;
    }
    return 0;
}
