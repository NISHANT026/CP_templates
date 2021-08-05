int RightMostIndexOfB(vector<int> A,int B)
{
	sort(A.begin(),A.end());
	int n=A.size();
	int l=0,r=n-1;
	while(l<=r)
	{
		int m=(l+r)/2;
        if(A[m]>B)
         r=m-1;
        // else if(A[m]==B)
         // return m;
        else
         l=m+1; 
	}
	return r;
}
int IndexOfElementJustLessthenB(vector<int> A,int B)
{
	sort(A.begin(),A.end());
	int n=A.size();
	int l=0,r=n-1;
	while(l<=r)
	{
		int m=(l+r)/2;
        if(A[m]>=B)
         r=m-1;
        // else if(A[m]==B)
         // return m;
        else
         l=m+1; 
	}
	return r;
}
