
#include "func.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	Vector v,a,r;
	cout << "Введите ваш вектор";
	v=v.in(v);

	a.x = 5;
	a.y = 8;
	a.z = -2;

	
	r = v.sum(a);
	r.out(r);
	return 0;
}

