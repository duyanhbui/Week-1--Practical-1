#include <iostream>
#include <stdlib.h>

extern double max_element(int*,int);

int main(int argc,char **argv)
{
    int array[5] = {1,2,69,4,5};
	std :: cout << max_element(array,5) << std :: endl;
	return 0 ;
}
