#include <iostream>

double weighted_average(int array[], int n) {
    
    if(n < 1){
        return 0;
    }else{
        double w[n] = {0.0};
        for(int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (array[i] == array[j]){
                    w[i] += 1.0;
                }
                }
                
            }
        double weighted_average = 0.0;
        for (int i = 0; i < n;i++){
            weighted_average += ((double)array[i]* w[i])/n;
        }
        return weighted_average;
    }
}

