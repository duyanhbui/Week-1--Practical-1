#include <iostream>


int median_array(int array[], int n) {
    if(n < 1 || n % 2 == 0){
        return 0;
    } else{
        int median = 0;
        median = array[n/2];

        return median;

    }

}