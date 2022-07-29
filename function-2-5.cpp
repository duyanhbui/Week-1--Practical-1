#include <iostream>

bool is_descending(int array[], int n) {
    if(n < 1){
        return false;
    }else{
        bool descend = true;
        for(int i =0; i <n-1; i++){
            if (array[i] < array[i+1]){
                descend = false;
            }
        }
        return descend;
    }

}