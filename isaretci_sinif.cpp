#include <iostream>
using namespace std;

class Sinif
{
	private:
		int x, y;
		
	public:
		void ptr_degistir(int *a, int *b)
		{
			int gecici;
			gecici=*a;
			*a=*b;
			*b=gecici;
			
			cout<<"fonksiyondaki_degisken1: "<<*a<<" - fonksiyondaki_degisken2: "<<*b<<endl;
		}
		
		void normal_degistir(int a, int b)
		{
			int gecici;
			gecici=a;
			a=b;
			b=gecici;
			cout<<"fonksiyondaki_degisken1: "<<a<<" - fonksiyondaki_degisken2: "<<b<<endl;
		}
		
		void yazdir()
		{
			cout<<"Fonksiyon calisti"<<endl;
		}
};


int main(void)
{
	int i;
	const int N=10;
	
	Sinif n1, *n2, n3[N];
	n2=&n1;
	
	/* Referans(adres) göndermede işlemleri değişkenin adresinde bulunan değer üzerinden yaparız
	Burada gönderdiğimiz adresin içeriğine ulaşmak için pointer(*) kullanırız.
	Böylece değişkene direk adresi üzerinden erişmiş oluruz ve program boyunca yaptığımız değişiklik korunur.
	*/
	cout<<"Pointer kullanarak:"<<endl;
	int a=2, b=3;
	cout<<"degisken1: "<<a<<" - degisken2: "<<b<<endl;
	n2->ptr_degistir(&a, &b);
	cout<<"anaprogramdaki__degisken1: "<<a<<" - anaprogramdaki__degisken2: "<<b<<endl;
	
	cout<<endl<<endl;


	/* Değer gönderme aslında gönderdiğimiz değişkenin bir kopyası fonksiyon içinde işlem görür.
	Bu yüzden yaptığımız değişiklik fonksiyon içinde geçerli olur.
	Fonksiyon dışına çılıdığında değer eski halindedir.
	*/
	cout<<"Pointer kullanmadan:"<<endl;
	int c=5, d=6;
	cout<<"degisken1: "<<c<<" - degisken2: "<<d<<endl;
	n2->normal_degistir(c, d);
	cout<<"anaprogramdaki__degisken1: "<<c<<" - anaprogramdaki__degisken2: "<<d<<endl;
	
	// Çünkü dizi isimli değişken aynı zamanda dizinin ilk elemanını işaret eden bir işaretçidir.
	for(i=0; i<N; i++)
	{
		(n3+i)->yazdir();
	}
	
	return 0;
}
