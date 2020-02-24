#include "iostream"
using namespace std;
int main()
{
	int n,k,m,fl=1,x=0,temp;
	cout<<"number of temple = ";
	cin>>n;
	cout<<"multiplying factor = ";
	cin>>k;
	cout<<"number of solution = ";
	cin>>m;
	while(1){
		x=0;
		for (int i = 0; i < n; ++i)
		{
			if ((x)%k==0)
			{
				x=(x/k+fl);
				temp=i;
			}
			else break;
		}
		if(temp==n-1)
			break;
		else fl++;
	}
	cout<<x<<endl<<fl;
	return 0;
}
