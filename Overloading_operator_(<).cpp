#include <iostream>
using namespace std;

class Kare
{
private:
	int sayi;
public:

	Kare(int sayi)
	{
		this->sayi=sayi;
	}
	
	bool operator<(const Kare &);
	bool operator>(const Kare &);
};

bool Kare::operator <(const Kare &a1)
{
	if(this->sayi < a1.sayi)
		return true;
	
	return false;	
}

bool Kare::operator >(const Kare &a1)
{
	if(this->sayi > a1.sayi)
		return true;
	
	return false;	
}

int main()
{
	Kare a1(3),a2(10);
	
	if(a1>a2)
		cout<<"a1 a2 den buyuktur."<<endl;
	else
		cout<<"a1 a2 den buyuk deildir."<<endl;
	
	cout<<endl<<endl;
	
	if(a2>a1)
		cout<<"a2 a1'den buyuktur."<<endl;
	else
		cout<<"a2 a1'den buyuk deildir."<<endl;
		
	
	return 0;
}
