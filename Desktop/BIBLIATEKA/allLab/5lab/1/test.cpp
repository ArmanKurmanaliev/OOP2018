#include<iostream>
using namespace std;

int main()
{
	int i[5]={1,2,3,55,-102};

	i[1]=i[2]+i[4];

	for (int i=0; i<5; i++)
	{
		cout<<i[i]<<" ";
	}

	cout<<endl;

	i[2]=10;

	for (int i=0; i<5; i++)
	{
		cout<<i[i]<<" ";
	}
	cout<<endl<<i[3-50];


	return 0;
}