#include <iostream>
using namespace std;

class Kare
{
private:
	

public:
int sayi;
	Kare()
	{
		sayi=0;
	}
	Kare(int a)
	{
		sayi=a;
	}
	
	void karesi()
	{
		cout<<sayi*sayi<<endl;
	}
	
	Kare operator +(const Kare a1)
	{
		Kare a2; 
		
		a2.sayi=this->sayi+a1.sayi;
		
		return a2;
	}
};

int main()
{
	Kare a1(5),a2(3);
	
	Kare d1(5);
	
	d1.karesi();
	
	d1=a1+a2;
	
	d1.karesi();
	
	return 0;
}
