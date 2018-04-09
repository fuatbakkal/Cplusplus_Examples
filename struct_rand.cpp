#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <iomanip>

using namespace std;

int sayi_uret(int, int);

int main(void)
{
	srand (time(NULL));
	
	struct ogrenci_bilgileri
	{
		long no;
		char ad[15], soyad[20];
	} ogrenci[100];
	
	char isimler[214][15];
	
	strcpy(isimler[0], "Abbas");
	strcpy(isimler[1], "Abdullah");
	strcpy(isimler[2], "Abdussamed");
	strcpy(isimler[3], "Adem");
	strcpy(isimler[4], "Ahmet");
	strcpy(isimler[5], "Akif");
	strcpy(isimler[6], "Alev");
	strcpy(isimler[7], "Ali");
	strcpy(isimler[8], "Ali osman");
	strcpy(isimler[9], "Ali utku");
	strcpy(isimler[10], "Alp");
	strcpy(isimler[11], "Alper");
	strcpy(isimler[12], "Arzu");
	strcpy(isimler[13], "Asan");
	strcpy(isimler[14], "AslIhan");
	strcpy(isimler[15], "Atakan");
	strcpy(isimler[16], "Ayhan");
	strcpy(isimler[17], "Aykut");
	strcpy(isimler[18], "Aysel");
	strcpy(isimler[19], "Baris");
	strcpy(isimler[20], "Berat semih");
	strcpy(isimler[21], "Berkay");
	strcpy(isimler[22], "Berker");
	strcpy(isimler[23], "Beytullah");
	strcpy(isimler[24], "Burak");
	strcpy(isimler[25], "Burak can");
	strcpy(isimler[26], "Burcu");
	strcpy(isimler[27], "Burcin");
	strcpy(isimler[28], "Bunyami");
	strcpy(isimler[29], "Busra");
	strcpy(isimler[30], "Cafer");
	strcpy(isimler[31], "Can");
	strcpy(isimler[32], "Caner");
	strcpy(isimler[33], "Cebrail");
	strcpy(isimler[34], "Celal");
	strcpy(isimler[35], "Cem");
	strcpy(isimler[36], "Cemil");
	strcpy(isimler[37], "Cengiz enis");
	strcpy(isimler[38], "Ceyhan");
	strcpy(isimler[39], "Cihad");
	strcpy(isimler[40], "Cihan");
	strcpy(isimler[41], "Cihat");
	strcpy(isimler[42], "Coskun");
	strcpy(isimler[43], "Caglar");
	strcpy(isimler[44], "Caglar");
	strcpy(isimler[45], "Demet");
	strcpy(isimler[46], "Deniz");
	strcpy(isimler[47], "Derya");
	strcpy(isimler[48], "Duran");
	strcpy(isimler[49], "Elif");
	strcpy(isimler[50], "Elvan");
	strcpy(isimler[51], "Emrah");
	strcpy(isimler[52], "Emre");
	strcpy(isimler[53], "Enes");
	strcpy(isimler[54], "Enis");
	strcpy(isimler[55], "Enver");
	strcpy(isimler[56], "Erbil");
	strcpy(isimler[57], "Ercan");
	strcpy(isimler[58], "Erdem");
	strcpy(isimler[59], "Erdinc");
	strcpy(isimler[60], "Eren");
	strcpy(isimler[61], "Eren ismail");
	strcpy(isimler[62], "Ergin");
	strcpy(isimler[63], "Ergun");
	strcpy(isimler[64], "Erhan");
	strcpy(isimler[65], "Erhan");
	strcpy(isimler[66], "Erol");
	strcpy(isimler[67], "Ersan");
	strcpy(isimler[68], "Ersin");
	strcpy(isimler[69], "Ersin");
	strcpy(isimler[70], "Ertan");
	strcpy(isimler[71], "Esra");
	strcpy(isimler[72], "Ezgi");
	strcpy(isimler[73], "Fadime");
	strcpy(isimler[74], "Faruk");
	strcpy(isimler[75], "Fatih");
	strcpy(isimler[76], "Ferdi");
	strcpy(isimler[77], "Funda");
	strcpy(isimler[78], "Furkan");
	strcpy(isimler[79], "Gokcen pInar");
	strcpy(isimler[80], "Gokhan");
	strcpy(isimler[81], "Goksel");
	strcpy(isimler[82], "Gulhan");
	strcpy(isimler[83], "Gungor");
	strcpy(isimler[84], "Gurcan");
	strcpy(isimler[85], "Hacer");
	strcpy(isimler[86], "Hakan");
	strcpy(isimler[87], "Hakan");
	strcpy(isimler[88], "Halit");
	strcpy(isimler[89], "Halit murat");
	strcpy(isimler[90], "Haluk");
	strcpy(isimler[91], "Hamza");
	strcpy(isimler[92], "Hamza");
	strcpy(isimler[93], "Harun");
	strcpy(isimler[94], "Hatice");
	strcpy(isimler[95], "Hatice gul");
	strcpy(isimler[96], "Hayati");
	strcpy(isimler[97], "Huseyin");
	strcpy(isimler[98], "Ibrahim");
	strcpy(isimler[99], "Ibrahim serdar");
	strcpy(isimler[100], "Ilker");
	strcpy(isimler[101], "Ilkim");
	strcpy(isimler[102], "Ilknur");
	strcpy(isimler[103], "Ilyas");
	strcpy(isimler[104], "Inanc");
	strcpy(isimler[105], "Ismail");
	strcpy(isimler[106], "Ismail hakki");
	strcpy(isimler[107], "Izzet");
	strcpy(isimler[108], "Kagan");
	strcpy(isimler[109], "Kayhan");
	strcpy(isimler[110], "Kemal");
	strcpy(isimler[111], "Kemil");
	strcpy(isimler[112], "Kubilay");
	strcpy(isimler[113], "Kuzey");
	strcpy(isimler[114], "Lutfullah");
	strcpy(isimler[115], "M. aykut");
	strcpy(isimler[116], "M. oguzhan");
	strcpy(isimler[117], "Mahmut");
	strcpy(isimler[118], "Mehmet");
	strcpy(isimler[119], "Mehmet ali");
	strcpy(isimler[120], "Mehmet emin");
	strcpy(isimler[121], "Mehmet emre");
	strcpy(isimler[122], "Mehmet mesih");
	strcpy(isimler[123], "Mehmet sIddIk");
	strcpy(isimler[124], "Melih");
	strcpy(isimler[125], "Meltem");
	strcpy(isimler[126], "Mert");
	strcpy(isimler[127], "Merve");
	strcpy(isimler[128], "Merve bahar");
	strcpy(isimler[129], "Meryem");
	strcpy(isimler[130], "Metin");
	strcpy(isimler[131], "Muhammed");
	strcpy(isimler[132], "Muhammet");
	strcpy(isimler[133], "Murat");
	strcpy(isimler[134], "Mustafa");
	strcpy(isimler[135], "Mustafa kemal");
	strcpy(isimler[136], "Mustafa yigit");
	strcpy(isimler[137], "Muzaffer");
	strcpy(isimler[138], "Mumin");
	strcpy(isimler[139], "Muslim");
	strcpy(isimler[140], "Nail");
	strcpy(isimler[141], "Necati evren");
	strcpy(isimler[142], "Nurettin");
	strcpy(isimler[143], "Nuri murat");
	strcpy(isimler[144], "Nusret");
	strcpy(isimler[145], "Oguz");
	strcpy(isimler[146], "Oguzhan");
	strcpy(isimler[147], "Okan");
	strcpy(isimler[148], "Olcay");
	strcpy(isimler[149], "Orcun");
	strcpy(isimler[150], "Orkun");
	strcpy(isimler[151], "Osman");
	strcpy(isimler[152], "Omer");
	strcpy(isimler[153], "Omer davut");
	strcpy(isimler[154], "Omer faruk");
	strcpy(isimler[155], "Omur sultan");
	strcpy(isimler[156], "Ozgun");
	strcpy(isimler[157], "Ozkan");
	strcpy(isimler[158], "Ozlem");
	strcpy(isimler[159], "Resat");
	strcpy(isimler[160], "RIfat turgay");
	strcpy(isimler[161], "Sadettin");
	strcpy(isimler[162], "Sadullah");
	strcpy(isimler[163], "Salih hurriyet");
	strcpy(isimler[164], "Saliha");
	strcpy(isimler[165], "Samet");
	strcpy(isimler[166], "Sami");
	strcpy(isimler[167], "Seda");
	strcpy(isimler[168], "Sedat");
	strcpy(isimler[169], "Selahattin");
	strcpy(isimler[170], "Selami");
	strcpy(isimler[171], "Selcuk");
	strcpy(isimler[172], "Selim");
	strcpy(isimler[173], "Selin");
	strcpy(isimler[174], "Selma");
	strcpy(isimler[175], "Sema");
	strcpy(isimler[176], "Semih");
	strcpy(isimler[177], "Sercan");
	strcpy(isimler[178], "Serdar");
	strcpy(isimler[179], "Serhat");
	strcpy(isimler[180], "Serkan");
	strcpy(isimler[181], "Sevilay");
	strcpy(isimler[182], "Seyithan");
	strcpy(isimler[183], "Sezgin");
	strcpy(isimler[184], "SIrrI atalay");
	strcpy(isimler[185], "Sinan");
	strcpy(isimler[186], "Songul");
	strcpy(isimler[187], "Suleyman");
	strcpy(isimler[188], "Sumeyye");
	strcpy(isimler[189], "saban");
	strcpy(isimler[190], "senol");
	strcpy(isimler[191], "sevket");
	strcpy(isimler[192], "seyda");
	strcpy(isimler[193], "seyhmus");
	strcpy(isimler[194], "sukran");
	strcpy(isimler[195], "Talha");
	strcpy(isimler[196], "Talha");
	strcpy(isimler[197], "Taner");
	strcpy(isimler[198], "Tayfun");
	strcpy(isimler[199], "Tevfik");
	strcpy(isimler[200], "Tolga");
	strcpy(isimler[201], "Tugba");
	strcpy(isimler[202], "Tuna");
	strcpy(isimler[203], "Turan");
	strcpy(isimler[204], "Ugur");
	strcpy(isimler[205], "Ulvi sahin");
	strcpy(isimler[206], "ummu tugba");
	strcpy(isimler[207], "Yakup");
	strcpy(isimler[208], "Yasemin");
	strcpy(isimler[209], "Yasin");
	strcpy(isimler[210], "Yasar");
	strcpy(isimler[211], "Yusuf");
	strcpy(isimler[212], "Zubeyir");
	strcpy(isimler[213], "Zulkif");
	
	int i, j;
	char soyadlar[100][20];
	
	for(i=0; i<100; i++)
		for(j=0; j<sayi_uret(5, 20); j++)
			soyadlar[i][j]=char(sayi_uret(65, 90));
	
	for(i=0; i<100; i++)
	{
		ogrenci[i].no=((sayi_uret(28, 43) * sayi_uret(32143, 32558)) + sayi_uret(-4, 6));
		strcpy(ogrenci[i].ad, isimler[sayi_uret(0, 213)]);
		strcpy(ogrenci[i].soyad, soyadlar[sayi_uret(0, 99)]);
	}
	
	bool secim[100];
	
	cout<<setw(4)<<"Sira:"<<setw(11)<<"Numara:"<<setw(20)<<"Ad:"<<setw(25)<<"Soyad:"<<endl;
	
	i=0;
	while(i<100)
	{
		j=sayi_uret(0, 99);
		
		if(secim[j]==1)
			continue;
		
		if(ogrenci[j].no < 1000000)
			cout<<setw(4)<<i+1<<setw(6)<<"0"<<ogrenci[j].no<<setw(20)<<ogrenci[j].ad<<setw(25)<<ogrenci[j].soyad<<endl;
			
		else
			cout<<setw(4)<<i+1<<setw(12)<<ogrenci[j].no<<setw(20)<<ogrenci[j].ad<<setw(25)<<ogrenci[j].soyad<<endl;
		
		secim[j]=1;
		i++;
	}
	
	return 0;
}

int sayi_uret(int x, int y)
{
	return rand()%(y-x+1) + x;
}

