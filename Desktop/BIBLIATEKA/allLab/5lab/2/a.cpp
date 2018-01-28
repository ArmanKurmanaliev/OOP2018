#include <iostream>
using namespace std;

int main()
{
	int a[1010], n, m, x=0;
	int i=0;
	cin>>n;

	for(i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(i=1; i<=n; i++)
	{
		if(m==a[i])
			x++;
	}
	if(x>0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}