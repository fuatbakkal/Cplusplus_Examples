#include <iostream>
#define PI 3.1428571

using namespace std;

// Temel sınıf üstünden sınıf türetilen ana sınıftır.
// Sınıf tanımlamasında bir farklılık yoktur.
class Sekil
{
	protected:
		int x, y;
		
	public:
		// Kurucu fonksiyon sınıfa bir nesne tanımlandığında ilk çağırılan fonksiyondur.
		// Genelde değişkenlere ilk değer atamak için kullanılır.
		Sekil()
		{
			x=0;
			y=0;
		}
		
		void Verial()
		{
			cout<<"1. degeri girin: ";
			cin>>x;
			cout<<"2. degeri girin: ";
			cin>>y;			
		}
};

// Türetilmiş sınıflar alt alt sınıf oluşturmayı sağlar
// Böylece büyük projelerde programı parçalara böleriz ve daha kolay kod yazarız.
class Dikdortgen : private Sekil
{
	public:
		void Verial()
		{
			cout<<"Kisa kenari girin: ";
			cin>>x;
			cout<<"Uzun kenari girin: ";
			cin>>y;			
		}
		
		void Genislet(int g)
		{
			x*=g;
			y*=g;
			cout<<"Genisletilmis kisa kenar: "<<x<<endl;
			cout<<"Genisletilmis uzun kenar: "<<y<<endl;
		}
		
		void goster()
		{
			cout<<"Bu bir dikdortgendir."<<endl;
			cout<<"Kisa kenari: "<<x<<endl;
			cout<<"Uzun kenari: "<<y<<endl;
		}
		
		int Alanhesapla()
		{
			return x*y;
		}
		
      	Dikdortgen operator + (Dikdortgen a)
		{
			Dikdortgen b;
			b.x=x+a.x;
			b.y=y+a.y;
			
			return b;
        }
        
      	Dikdortgen operator - (Dikdortgen a)
		{
			Dikdortgen b;
			b.x=x-a.x;
			b.y=y-a.y;
			
			return b;
        }

		bool operator < (Dikdortgen a)
		{
			if( Alanhesapla() < a.Alanhesapla() )
				return true;
			
			else
				return false;
		}

		bool operator > (Dikdortgen a)
		{
			if( Alanhesapla() > a.Alanhesapla() )
				return true;
			
			else
				return false;
		}
};

class Ucgen : private Sekil
{
	public:
		void Verial()
		{
			cout<<"Taban kenari girin: ";
			cin>>x;
			cout<<"Yuksekligi girin: ";
			cin>>y;			
		}
		
		void Genislet(int g)
		{
			x*=g;
			y*=g;
			cout<<"Genisletilmis taban kenari: "<<x<<endl;
			cout<<"Genisletilmis yukseklik: "<<y<<endl;
		}
		
		void goster()
		{
			cout<<"Bu bir ucgendir."<<endl;
			cout<<"Taban kenari: "<<x<<endl;
			cout<<"Yuksekligi: "<<y<<endl;
		}
		
		float Alanhesapla()
		{			
			return (x*y)/2.0;
		}
		
      	Ucgen operator + (Ucgen a)
		{
			Ucgen b;
			b.x=x+a.x;
			b.y=y+a.y;
			
			return b;
        }
        
      	Ucgen operator - (Ucgen a)
		{
			Ucgen b;
			b.x=x-a.x;
			b.y=y-a.y;
			
			return b;
        }

		bool operator < (Ucgen a)
		{
			if( Alanhesapla() < a.Alanhesapla() )
				return true;
			
			else
				return false;
		}

		bool operator > (Ucgen a)
		{
			if( Alanhesapla() > a.Alanhesapla() )
				return true;
			
			else
				return false;
		}
};

class Daire : private Sekil
{
	public:
		void Verial()
		{
			cout<<"Yaricapi girin: ";
			cin>>x;	
		}
		
		void Genislet(int g)
		{
			x*=g;
			cout<<"Genisletilmis yaricap: "<<x<<endl;
		}
		
		void goster()
		{
			cout<<"Bu bir dairedir."<<endl;
			cout<<"Yaricapi: "<<x<<endl;
		}
		
		float Alanhesapla()
		{
			return PI*x*x;
		}
		
      	Daire operator + (Daire a)
		{
			Daire b;
			b.x=x+a.x;
			
			return b;
        }
        
      	Daire operator - (Daire a)
		{
			Daire b;
			b.x=x-a.x;
			
			return b;
        }

		bool operator < (Daire a)
		{
			if( Alanhesapla() < a.Alanhesapla() )
				return true;
			
			else
				return false;
		}

		bool operator > (Daire a)
		{
			if( Alanhesapla() > a.Alanhesapla() )
				return true;
			
			else
				return false;
		}
};

int main(void)
{
	Ucgen u1, u2, u3;
	
	cout<<"1. ucgen icin"<<endl;
	u1.Verial();

	cout<<endl<<"2. ucgen icin"<<endl;
	u2.Verial();
	
	cout<<endl<<"1. ucgenin alani: "<<u1.Alanhesapla();
	cout<<endl<<"2. ucgenin alani: "<<u2.Alanhesapla()<<endl;
	
	if(u1>u2)
		cout<<endl<<"1. ucgenin alani daha buyuktur.";
		
	if(u1<u2)
		cout<<endl<<"2. ucgenin alani daha buyuktur.";
		
	u3=u1+u2;
	
	cout<<endl<<endl<<"2 ucgenin toplami:"<<endl;
	u3.goster();
	
	cout<<"Alani: "<<u3.Alanhesapla();
	
	return 0;
}
