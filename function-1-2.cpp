#include <iostream>


double array_mean(int array[], int n) {
    double average;
    if(n < 1){
        return 0.0;
    }else{
        for (int i = 0; i< n; i++){
            average += array[i];
        }
        return average / n;
    }

}