#include<iostream>
using namespace std;
int main()
{
	int a[10],size,temp;
	cin>>size;
	for (int i = 0; i < size; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-1-i ; j++)
		{
			if (a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < size; ++i)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}