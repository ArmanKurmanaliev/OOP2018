int ispr (int a)
{
	int q=0;
	for (int i=2; i<=sqrt(a); i++)
	{
		if (a%i==0)
		{
			q++;
			break;
		}
	}
	return q;