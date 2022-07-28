#include <iostream>

bool is_ascending(int array[], int n){
    if(n < 1){
        return false;
    }else{
        bool ascend = true;
        for(int i =0; i <n-1; i++){
            if (array[i] > array[i+1]){
                ascend = false;
            }
        }
        return ascend;
    }

}