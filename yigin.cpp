#include <iostream>
#define kapasite 100

using namespace std;

class Yigin
{
	private:
		int S[kapasite];
		int p;
		
	public:
		Yigin()
		{
			p=0;
		}
		
		bool bos_mu()
		{
			if(p < 1)
				return true;
				
			else
				return false;
		}
		
		bool dolu_mu()
		{
			if(p == kapasite - 1)
				return true;
				
			else
				return false;
		}
		
		int koy(int item)
		{
			if(dolu_mu())
				cout<<"Yigin tamammen doludur!";
				
			else
			{
				S[p] = item;
				p++;
				
				return 0;
			}
		}
		
		int ust()
		{
			if(bos_mu())
				return -1;
				
			else
				return S[p-1];
		}
		
		int al()
		{
			if(bos_mu())
				cout<<"Yigin bostur!";
				
			else
			{
				int id = p-1;
				p--;
				
				return S[id];
			}
		}
};

int main(void)
{
	Yigin y;
	
	if(y.bos_mu())
		cout<<"Yigin bostur."<<endl;
	
	y.koy(49);
	y.koy(23);
	
	cout<<"Yiginin ilk elemani: "<<+y.al()<<endl;
	
	y.koy(44);
	y.koy(22);
	
	cout<<"Yiginin ilk elemani: "<<+y.al()<<endl;
	cout<<"Yiginin ilk elemani: "<<+y.al()<<endl;
	cout<<"Yiginin ilk elemani: "<<+y.ust()<<endl;
	cout<<"Yiginin ilk elemani: "<<+y.al()<<endl;
	
	return 0;
}
