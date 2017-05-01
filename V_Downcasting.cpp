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
	long long fiyat;
};

void downcasting(Tekerlek *d1)
{
	BMW *c1=(BMW*) d1;
	
	cout<<"Downcasting ile eristigimiz yerler...:"<<endl;
	cout<<c1->yaricap<<endl;
	cout<<c1->numara<<endl;
	cout<<c1->renk<<endl;
	cout<<c1->fiyat<<endl;
}

int main()
{
	BMW *a1 = new BMW;
	
	a1->yaricap=32.1;
	a1->numara=9;
	a1->renk="Siyah";
	a1->fiyat=250000;
	
	Tekerlek *t1=(Tekerlek*) a1;
	
	cout<<"Upcasting ile eristigimiz yerler...:"<<endl<<t1->yaricap<<endl<<t1->numara<<endl;
	
	downcasting(t1);
	
	return 0;
}
