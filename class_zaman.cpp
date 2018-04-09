#include <iostream>

using namespace std;

class zaman
{
	private:
		int saat, dakika, saniye;
		
	public:
		zaman()
		{
			saat=0;
			dakika=0;
			saniye=0;
		}
		
		zaman(int sa, int dk, int sn)
		{
			saat=sa;
			dakika=dk;
			saniye=sn;
			
			if(sa>24)
				saat=sa%24;
				
			if(dk>60)
				dakika=dk%60;
			
			if(sn>60)
				saniye=sn%60;
		}
		
		void deger_al()
		{
			int sa, dk, sn;
			char ch;
			
			cout<<"Zamani Saat:Dakika:Saniye seklinde giriniz: ";
			cin>>sa>>ch>>dk>>ch>>sn;
			
			saat=sa;
			dakika=dk;
			saniye=sn;
		}
		
		void degeri_yazdir()
		{
			cout<<saat<<":"<<dakika<<":"<<saniye;
		}
		
		long saniyeye_cevir()
		{
			long toplam_saniye;
			toplam_saniye=saat*3600+dakika*60+saniye;
			
			return toplam_saniye;
		}
};

int main(void)
{
	zaman t1, t2(4, 59, 59);
	
	t1.deger_al();
	
	cout<<endl<<"t1 - Toplam saniye cinsinden degeri: "<<t1.saniyeye_cevir();
	cout<<endl<<"t2 - Toplam saniye cinsinden degeri: "<<t2.saniyeye_cevir();
	
	return 0;
}
