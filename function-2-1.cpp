#include <iostream>

int min_element(int array[], int n){
    int min = 1000000;
    if(n < 1){
        return 0;
    }
    else{
        for (int i = 0; i < n; i++){
        if(array[i] < min){
            min = array[i];
        }
        }
        return min;
    }
} 
