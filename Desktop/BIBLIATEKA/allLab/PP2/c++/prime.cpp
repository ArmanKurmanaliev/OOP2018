#include <bits/stdc++.h>
using namespace std;

/*void isPrime(int n)
{
	int sum = 1;

	for (int i=2; i<=n; i++)
	{
		if (n % i == 0)
		{
			sum++;
		}
	}

	if (sum == 2)
		cout<<"YES";
	else
		cout<<"NO";
}*/

bool isPrime(int n)
        {
            for (int i = 2; i <= sqrt(n); i++)
                if (n % i == 0)
                    return false;
            return true;
        }

int main()
{
	int a;
	cin>>a;

	if (isPrime(a))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}