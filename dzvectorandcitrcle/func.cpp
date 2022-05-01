#include "func.h"
//для круга
double Circle::s() {//+
	return pi*r*r;
}
double Circle::l() {//+
	return 2*pi*r;
}

//ля вектора
Vector Vector::sum(Vector v1) {	//+
	Vector result;
	result.x = v1.x + this->x;
	result.y = v1.y + this->y;
	result.z = v1.z + this->z;
	return result;
}
Vector Vector::extract(Vector v1, Vector v2) {//+
	Vector result;
	result.x = v1.x - v2.x;
	result.y = v1.y - v2.y;
	result.z = v1.z - v2.z;
	return result;
}
Vector Vector::multiplyvecnum(Vector v1, double a) {//+
	Vector result;
	result.x = v1.x *a;
	result.y = v1.y *a;
	result.z = v1.z * a;
	return result;
}
double Vector::multiplyvecsc(Vector v1, Vector v2) {//+
	double result;
	result = v1.x * v2.x + v1.y * v2.y+v1.z*v2.z;
	return result;
}
Vector Vector::multiplyvecv(Vector v1, Vector v2) {//+
	Vector result;
	result.x = v1.y * v2.z - v1.z * v2.y;
	result.y =-( v1.x * v2.z - v2.x * v1.z);
	result.z = v1.x * v2.y - v1.y * v2.x;
	
	return result;
}
Vector Vector::devidenum(Vector v1, double a) {//+
	Vector result;
	result.x = v1.x / a;
	result.y = v1.y / a;
	result.z = v1.z / a;
	
	return result;
}  

double Vector::module()//+
{
	return sqrt(x*x+y*y);
}
void Vector::out(Vector v1) {//+
	cout << v1.x << " " << v1.y<<" "<<v1.z;
	
}
Vector Vector::in(Vector v1) {//+
	Vector result;
	cin >> result.x >> result.y >> result.z;
	return result;
}



