#include <iostream>
#include <stdlib.h>

extern double array_mean(int*,int);

int main(int argc,char **argv)
{
    int array[5] = {1,2,3,4,5};
	std :: cout << array_mean(array,5) << std :: endl;
	return 0 ;
}
