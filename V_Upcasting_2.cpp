#include <iostream>
using namespace std;


class Tekerlek
{
public:
	double yaricap;
	int numara;
};

class BMW: public Tekerlek
{
public:
	string renk;
	int fiyat;
};

int main()
{
	BMW *a1 = new BMW;
	
	a1->yaricap=23.1;
	a1->numara=12;
	
	a1->renk="Blue";
	a1->fiyat=2500;
	
	Tekerlek *c1;
	
	
	
	c1=(Tekerlek*) a1;
	
	cout<<c1->yaricap<<endl<<c1->numara<<endl;
	
	return 0;
}
