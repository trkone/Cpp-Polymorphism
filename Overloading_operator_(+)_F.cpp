#include <iostream>
using namespace std;

#define PI 14

class Daire
{
private:
	

public:
	double yaricap;
	Daire()
	{
		yaricap=0.0;
	}
	Daire(double yaricap)
	{
		this->yaricap=yaricap;
	}
	
	Daire operator+(const Daire&);
	
	void goster()
	{
		cout<<"Alani...:"<<yaricap*yaricap*PI<<endl;
	}
};

Daire Daire::operator +(const Daire &a1)
{
	Daire d1;
	
	d1.yaricap=this->yaricap+a1.yaricap;
	
	return d1;
}

int main()
{
	Daire a1(2.1),a2(3.9);
	
	Daire d1;
	
	d1.goster();
	
	d1=a1+a2;
	
	d1.goster();
	
	return 0;
}
