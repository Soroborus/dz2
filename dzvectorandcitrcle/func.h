#ifndef FUNC_H
#define FUNC_H
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
struct Circle {
	const double pi = 3.14;
	double r;
	double x;
	double y ;
	//операции
	double s();
	double l();
	~Circle() {

	}
	Circle() {
		r = 0;
		x = 0;
		y = 0;
	}
	Circle(double a, double b, double c) {
		x = a;
		y = b;
		r = c;
	}
};
struct Vector {
	Vector() {
		x = 0;
		y = 0;
		z = 0;
	}
	Vector(double a, double b,double c) {
		x = a;
		y = b;
		z = c;
	}
	~Vector() {

	}

	double x;
	double y ;
	double z;
	//операции
	double module();
	Vector sum(Vector v1);
	Vector extract(Vector v1, Vector v2);
	Vector multiplyvecnum(Vector v1, double a);
	double multiplyvecsc(Vector v1, Vector v2);
	Vector multiplyvecv(Vector v1, Vector v2);
	Vector devidenum(Vector v1, double a);
	//ввод-вывод
	void out(Vector v1);
	Vector in(Vector v1);

	
};


#endif