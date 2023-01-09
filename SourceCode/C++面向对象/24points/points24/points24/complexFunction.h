//
//  complexFunction.h
//  points24
//
//  Created by Nick on 2023/1/7.
//

#include "headFiles.h"

short cardSwitcher(std::string ori_char){
    if (ori_char=="a"||ori_char=="A"||ori_char=="1") {
        return 1;
    }else if (ori_char=="2"){
        return 2;
    }else if (ori_char=="3"){
        return 3;
    }else if (ori_char=="4"){
        return 4;
    }else if (ori_char=="5"){
        return 5;
    }else if (ori_char=="6"){
        return 6;
    }else if (ori_char=="7"){
        return 7;
    }else if (ori_char=="8"){
        return 8;
    }else if (ori_char=="9"){
        return 9;
    }else if (ori_char=="10"){
        return 10;
    }else if (ori_char=="j"||ori_char=="J"||ori_char=="11"){
        return 11;
    }else if (ori_char=="q"||ori_char=="Q"||ori_char=="12"){
        return 12;
    }else if (ori_char=="k"||ori_char=="K"||ori_char=="13"){
        return 13;
    }else{
        return -1;
    }
}

void showCombination(short a[]){
    for(int i=0;i<4;i++){
        std::cout << a[i] << " "<< std::endl;
    }
}
