#include <iostream>
#include <stdlib.h>

extern double sum_even(int*,int);

int main(int argc,char **argv)
{
    int array[5] = {1,2,3,4,5};
	std :: cout << sum_even(array,5) << std :: endl;
	return 0 ;
}
