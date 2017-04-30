#include <iostream>
using namespace std;

class Kare
{
private:
	int sayi;
	
public:	
	Kare()
	{
		sayi=0;
	}
	Kare(int sayi)
	{
		this->sayi=sayi;
	}
	
	Kare operator =(const Kare&);
	
	void alan()
	{
		cout<<"Karenin alani......:"<<sayi*sayi<<endl;
	}
};

Kare Kare::operator =(const Kare &d1)
{
	this->sayi=d1.sayi;
	
	return Kare(sayi);
}

int main()
{
	Kare a1(5),a2;
	
	a2.alan();
	
	a2=a1;
	
	a2.alan();
	
	return 0;
}
