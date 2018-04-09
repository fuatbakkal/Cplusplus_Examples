#include <iostream>
#include <cstring>

using namespace std;

class kitap
{
	private:
		char kitap_adi[50], yazar_adi[30];
		static int nesne_sayisi;
		int sayfa_sayisi, basim_yili, stok_no=nesne_sayisi;
		
	public:
		kitap();
		virtual ~kitap();
		
		kitap(char ka[50], char ya[30], int ss, int by, int sn)
		{
			strcpy(kitap_adi, ka);
			strcpy(yazar_adi, ya);
			sayfa_sayisi=ss;
			basim_yili=by;
			stok_no=sn;
		}
		
		void bilgileri_yazdir()
		{
			cout<<"Kitap adi: "<<kitap_adi<<endl
			<<"Yazar adi: "<<yazar_adi<<endl
			<<"Sayfa sayisi: "<<sayfa_sayisi<<endl
			<<"Basim yili: "<<basim_yili<<endl
			<<"Stok no: "<<stok_no;
		}
};

int kitap::nesne_sayisi = 0;

kitap::kitap(){
    cout<<"There are "<<++nesne_sayisi<<" FirstClass objects!"<<endl;
}

kitap::~kitap(){
    if(--nesne_sayisi)
       cout<<"There are "<<nesne_sayisi<<" FirstClass objects!"<<endl;
    else cout<<"There are no FirstClass objects!"<<endl;
}

int main(void)
{
	kitap k1, k2;
	
	/*
	zaman t1, t2(4, 59, 59);
	
	t1.deger_al();
	
	cout<<endl<<"t1 - Toplam saniye cinsinden degeri: "<<t1.saniyeye_cevir();
	cout<<endl<<"t2 - Toplam saniye cinsinden degeri: "<<t2.saniyeye_cevir();
	*/
	
	return 0;
}
