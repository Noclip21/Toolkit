#include "Vector3.h"
#include <cmath>



Vector3::Vector3(	double posx,
					double posy,
					double posz)
{
	x = posx;
	y = posy;
	z = posz;	
}



Vector3::~Vector3()
{
	// code here
}



double Vector3::length2()
{
	return (pow(x,2)+pow(y,2)+pow(z,2));
}

double Vector3::length()
{
	return sqrt(length2());
}

double Vector3::normalize()
{
	double len = length2();

	if(len <= 0) return 0;

	len = sqrt(len);

	double inv = 1.0/len;
		x *= inv;
		y *= inv;
		z *= inv;

	return len;
}