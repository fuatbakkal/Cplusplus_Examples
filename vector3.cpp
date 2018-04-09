#include <iostream>
#include <vector>
using namespace std;

void sil_onemsiz(vector<int> &v, int pos)
{
	int last_pos = v.size() - 1;
	
	v[pos] = v[last_pos];

   v.pop_back();
}

void sil_sira(vector<int> &v, int pos)
{
	for (int i = pos; i < v.size() - 1; i++)
		v[i] = v[i+1];

	v.pop_back();
}

void ekle(vector<int> &v, int pos, int eleman)
{
	int last = v.size() - 1;
	
	v.push_back(v[last]);
	
	for(int i=last; i>pos; i--)
		v[i]=v[i-1];
		
	v[pos]=eleman;
}

int main(void)
{
	vector<int> v;
	
	v.push_back(12);
	v.push_back(15);
	v.push_back(16);
	v.push_back(8);
	
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<endl;
		
	sil_sira(v, 1);
	cout<<endl<<endl;

	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<endl;
	
	return 0;
}
