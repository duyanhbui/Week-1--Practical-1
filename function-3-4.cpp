#include <iostream>

void print_pass_fail(char grade) {
    bool pass = true;
    switch (grade){
        case 'A':
            std :: cout << "Pass \n";
            break;
        case 'B':
            std :: cout << "Pass \n";
            break;
        case 'C':
            std :: cout << "Pass \n";
            break;
        case 'D':
            std :: cout << "Fail \n";
            break;
        case 'E':
            std :: cout << "Fail \n";
            break;    
        default:
            std :: cout << "Fail \n";
            break;
        
    }

}