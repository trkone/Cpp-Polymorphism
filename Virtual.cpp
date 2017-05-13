#include <iostream>
using namespace std;

class Sekil
{
public:
	int a;
	virtual void Yaz()
	{
		cout<<"Sekil sinifi"<<endl;
	}
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
	Sekil a1,a2;
	Kare a3(2),a4(4);
	Daire a5(2.1),a6(1.1);
	
	
	Sekil *dizi[6];
	
	dizi[0]=&a1;
	dizi[1]=&a2;
	dizi[2]=&a3;
	dizi[3]=&a4;
	dizi[4]=&a5;
	dizi[5]=&a6;
	
	dizi[0]->Yaz();
	dizi[1]->Yaz();
	dizi[2]->Yaz();
	dizi[3]->Yaz();
	dizi[4]->Yaz();
	dizi[5]->Yaz();
	
	return 0;
}
