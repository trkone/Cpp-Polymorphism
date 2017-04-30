#include <iostream>
using namespace std;

class Pers
{
private:
	string ad;
	string soyad;
	
public:
	Pers(string ad,string soyad)
	{
		this->ad=ad;
		this->soyad=soyad;
	}
	
	Pers operator =(const Pers &a1)
	{
		this->ad=a1.ad;
		this->soyad=a1.soyad;
		return Pers(ad,soyad);
	}
	void goster()
	{
		cout<<"Adi....:"<<ad<<endl<<"Soyadi......:"<<soyad<<endl;
	}
};

int main()
{
	Pers a1("Mahmut","Tuncer"),a2("Kolsuz","Fatih");
	a1.goster();
	a1=a2;
	
	a1.goster();
	
	return 0;
}
