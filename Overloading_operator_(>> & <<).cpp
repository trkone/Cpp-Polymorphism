#include <iostream>
using namespace std;

class Personel
{
private:
	string ad,soyad;
	int yas;

public:
	
	Personel()
	{}
	Personel(string ad,string soyad,int yas)
	{
		this->ad=ad;
		this->soyad=soyad;
		this->yas=yas;
	}
	
	Personel operator()(string ad,string soyad,int yas)
	{
		this->ad=ad;
		this->soyad=soyad;
		this->yas=yas;
		
		return Personel(ad,soyad,yas);
	}
	
	friend istream& operator >>(istream &giris,Personel &a1)
	{
		cout<<"Adi....:";
		giris>>a1.ad;
		cout<<"Soyadi.:";
		giris>>a1.soyad;
		cout<<"Yasi...:";
		giris>>a1.yas;
		
	//	return giris;
	}
	
	friend ostream& operator <<(ostream &cikis,Personel &a2)
	{
		cikis<<"Adi....:"<<a2.ad<<endl;
		cikis<<"Soyadi.:"<<a2.soyad<<endl;
		cikis<<"Yasi...:"<<a2.yas<<endl;
		
	//	return cikis;
	}
	
	void yaz()
	{
		cout<<"Adi....:"<<ad<<endl;
		cout<<"Soyad..:"<<soyad<<endl;
		cout<<"Yas....:"<<yas<<endl;
	}
	
};

int main()
{
	Personel a1("Mahmut","Tuncer",17),a2;
	

	a1.yaz();
	
	cin>>a1;
	
	cout<<a1;
	
	a2("asd","dsa",32);
	
	cout<<a2;
	
	return 0;
}
