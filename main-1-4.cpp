#include <iostream>
#include <stdlib.h>

extern double sum_two_arrays(int*,int*,int);

int main(int argc,char **argv)
{
    int array[5] = {1,2,3,4,5};
    int secondarray[5] = {6,7,8,9,10};
	std :: cout << sum_two_arrays(array,secondarray,5) << std :: endl;
	return 0 ;
}
