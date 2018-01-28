#include <iostream>
using namespace std;

bool elct(bool x, bool y, bool z)
{
	int cnt=0;
	if(x!=0)
	{
		cnt++;
	}
	else if(y!=0)
	{
		cnt++;
	}
	else if(z!=0)
	{
		cnt++;
	}
//	if(cnt>1)
//	{
//		return 1;
//	}
//	else if(cnt<2)
//	{
//		return 0;
//	}
//} 
	return cnt;
}

int main()
{
	bool a,b,c;
	cin>>a>>b>>c;

	cout<<elct(a,b,c);
	return 0;

}