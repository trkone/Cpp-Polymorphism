#include <iostream>
using namespace std;

class Sekil
{
public:
	int a;
	virtual void Yaz()=0;
};

class Kare : public Sekil
{
public:
	int r;
	Kare(int r)
	{
		this->r=r;
	}
	void Yaz()
	{
		cout<<"Kare sinifi yaz_fonksiyonu"<<"\t\t"<<"alan..:"<<r*r<<endl;
	}
};

class Daire: public Sekil
{
private:
	double pi=3.14;
public:
	double yrcp;
	Daire(double a)
	{
		yrcp=a;
	}
	void Yaz()
	{
		cout<<"Daire sinifi yaz_fonksiyonu"<<"\t\t"<<"alan..:"<<pi*yrcp*yrcp<<endl;
	}
};

int main()
{
	Kare a1(2),a2(3);
	Daire a3(1.3);
	
	Sekil *dizi[3];
	
	dizi[0]=&a1;
	dizi[1]=&a2;
	dizi[2]=&a3;
	
	dizi[0]->Yaz();
	dizi[1]->Yaz();
	dizi[2]->Yaz();
	
	return 0;
}
