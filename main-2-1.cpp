#include <iostream>
#include <stdlib.h>

extern double min_element(int*,int);

int main(int argc,char **argv)
{
    int array[5] = {3,2,1,4,5};
	std :: cout << min_element(array,5) << std :: endl;
	return 0 ;
}
