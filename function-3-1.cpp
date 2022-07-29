#include <iostream>

bool is_fanarray(int array[], int n){
    if(n < 1){
        return false;
    
    }else{
        bool isFan = true;
        int i = 0;
        while (i < n){
            int front = 0 + i,back = (n-1) - i;
            
            if(front < back){
                if((array[front] != array[back]) || (array[front]
                > array[front+ 1])){
                    isFan = false;
                    return isFan;
                }            
            } else{
                return isFan;
            }
            i++;
        }
    }

}