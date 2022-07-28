#include <iostream>

void two_five_nine(int array[], int n){
    if(n < 1){
        std :: cout << 0;
    } else{
        int twos = 0, fives= 0 ,nines = 0;
        for(int i =0; i < n; i++){
            int num = array[i];

            switch(num){
                case 2:
                    twos += 1;
                    break;
                case 5:
                    fives += 1;
                    break;
                case 9:
                    nines += 1;
                    break;
            }
        }
        std :: cout << "2:" << twos << ";5:" << fives << ";9:" << nines << ";" << std :: endl;
    }

}