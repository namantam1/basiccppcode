#include<iostream>
using namespace std;

void encrypt(int* a,int* b,int* c,int* d)
{
	int ar[4]={*a,*b,*c,*d};
	for (int i = 0; i < 4; ++i)
	{
		ar[i]=(7+ar[i])%10;
	}
	*a=ar[2];
	*b=ar[3];
	*c=ar[0];
	*d=ar[1];
	cout<<ar[2]<<ar[3]<<ar[0]<<ar[1]<<endl;
}

void deencrypt(int* a,int* b,int* c,int* d)
{
	int ar[4]={*a,*b,*c,*d};
	for (int i = 0; i < 4; ++i)
	{
		if (ar[i]-7>=0)
		{
			ar[i]=ar[i]-7;
		}
		else ar[i]=ar[i]-7+10;
	}
	cout<<ar[2]<<ar[3]<<ar[0]<<ar[1];
}
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	encrypt(&a,&b,&c,&d);
	deencrypt(&a,&b,&c,&d);
	// cout<<a<<b<<c<<d;
}