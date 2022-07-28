#include <iostream>

void print_pass_fail(char grade) {
    bool pass = true;
    switch (grade){
        case 'A':
            std :: cout << "pass";
            break;
        case 'B':
            std :: cout << "pass";
            break;
        case 'C':
            std :: cout << "pass";
            break;
        case 'D':
            std :: cout << "fail";
            break;
        case 'E':
            std :: cout << "fail";
            break;    
        default:
            std :: cout << "fail";
            break;
        
    }

}