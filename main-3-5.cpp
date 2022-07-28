#include <iostream>
#include <stdlib.h>

extern double sum_even(double*,int);

int main(int argc,char **argv)
{
    double array[5] = {1.0,2.0,3.0,4.0,5.0};
	std :: cout << sum_even(array,5) << std :: endl;
	return 0 ;
}
