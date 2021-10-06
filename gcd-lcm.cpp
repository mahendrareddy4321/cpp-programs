#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(a==b)
	{
		return a;
	}
	if(a==0)
	{
		return b;
	}
	if(b==0)
	{
		return a;
	}
	if(a>b)
	{
		return gcd(a-b,b);
	}
	if(b>a)
	{
		return gcd(a,b-a);
	}
	return 0;
}
int lcm(int a,int b)
{
	int k=a*b/gcd(a,b);
	return k;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;;
	cout<<lcm(a,b);
}
