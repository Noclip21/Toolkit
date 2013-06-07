#include <iostream>
#include "../include/Vector3.h"



int main(int argc,char *argv[])
{
	Vector3 v(1,0,0);

	std::cout << v << std::endl;
	std::cout << "Vector3 length: " << v.length() << std::endl;
	return 0;
}