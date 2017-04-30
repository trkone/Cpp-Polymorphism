#include <iostream>
using namespace std;

class Pers
{
private:
	int yas;
public:
	Pers(int a)
	{
		yas=a;
	}
	
	Pers operator++(int)		//Buradaki (int) parametresini yazmassanız hata alırsınız Çünkü...:
	{							//Program sayısal bir deger donus yapıcak 
		yas++;
		return yas;
	}
	void gor()
	{
		cout<<"Yasi...:"<<yas<<endl;
	}
};


int main()
{
	Pers a1(12);
	
	a1.gor();
	
	a1++;
	
	a1.gor();
	
	return 0;
}
