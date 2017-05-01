#include <iostream>
using namespace std;

class Sekil
{
public:
	int numara;
	int hacim;
};

class Daire: public Sekil
{
	const double PI=3.14;
public:
	double	yaricap;
};


int main()
{
	Daire a1;
	a1.numara=12;
	a1.hacim=20;
	a1.yaricap=90.123;
	
	Sekil *c1=(Sekil*) &a1;
	
	cout<<c1->numara<<c1->hacim<<endl;
	
	return 0;
}
