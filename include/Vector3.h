#ifndef VECTOR3_H
#define VECTOR3_H

#include <iostream>


#include "prologue.h"
class Vector3
{
public:

	double x,y,z;


#	define VECTOR3_OPERATOR_ASSIGNMENT(OP)				\
	inline Vector3& operator OP (const Vector3 &v)		\
	{													\
		x OP v.x;										\
		y OP v.y;										\
		z OP v.z;										\
	}

#	define VECTOR3_OPERATOR_ARITHMETIC(OP)				\
	inline Vector3 operator OP (const Vector3 &v) const	\
	{													\
		return Vector3(	x OP v.x,						\
						y OP v.y,						\
						z OP v.z);						\
	}

		VECTOR3_OPERATOR_ASSIGNMENT(+=)
		VECTOR3_OPERATOR_ASSIGNMENT(-=)
		VECTOR3_OPERATOR_ASSIGNMENT(*=)
		VECTOR3_OPERATOR_ASSIGNMENT(/=)

		VECTOR3_OPERATOR_ARITHMETIC(+)
		VECTOR3_OPERATOR_ARITHMETIC(-)
		VECTOR3_OPERATOR_ARITHMETIC(*)
		VECTOR3_OPERATOR_ARITHMETIC(/)

#	undef VECTOR3_OPERATOR_ASSIGNMENT
#	undef VECTOR3_OPERATOR_ARITHMETIC

	inline Vector3 &operator = (double n)
	{
		this->x = this->y = this->z = n;
		return *this;
	}


	Vector3(double posx = 0,
			double posy = 0,
			double posz = 0);
	
	virtual ~Vector3();


	double length2();
	double length();
	double normalize();


		// DEBUG
	friend std::ostream &operator << (	std::ostream	&os,
										const Vector3 	&v)
	{
		return os << "Vector3 [" << v.x << "," << v.y << "," << v.z << "]";
	}

private:
};
#include "epilogue.h"

#endif // VECTOR3_H