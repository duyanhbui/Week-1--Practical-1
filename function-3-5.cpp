#include <iostream>

double sum_even(double array[], int n) {
    if(n<1){
        return 0;
    }else{
        double sum = 0;
        for(int i = 0; i < n;i++){
            if (i % 2 ==0){
                sum += array[i];
            
            }
        }
        return sum;        
    }

}