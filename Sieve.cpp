
vector<bool> getPri(int n)
{
	vector<bool> primes(n+1,true);
	primes[0]=false;
	primes[1]=false;
	for(int i=2;i<=n;i++)
	{
		if(primes[i])
		{
			for(int j=i*i;i<=n;j=j+p)
			 primes[j]=false;
		}
	}
	return primes;
	
}