#ifndef VECTOR3_H
#define VECTOR3_H

#include "prologue.h"
class Vector3
{
public:

	double x,y,z;


	Vector3(double posx = 0,
			double posy = 0,
			double posz = 0)
	{
		x = posx;
		y = posy;
		z = posz;
	}
	
	virtual ~Vector3(){};


private:
};
#include "epilogue.h"

#endif // VECTOR3_H