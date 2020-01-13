#include<iostream>
using namespace std;

int F[1000];

int fib(int n)
{
	if(n<=1)
	{
		F[n]=n;
		return n;
	}
	else
	{
		if(F[n-2]==-1)
		{
			F[n-2]=fib(n-2);
		}
		if(F[n-1]==-1)
		{
			F[n-1]=fib(n-1);
		}
		return F[n-2]+F[n-1];
	}
}
int main()
{
	for(int i=0;i<1000;i++)
	{
		F[i]=-1;
	}
	cout<<fib(0)<<" "<<fib(1)<<" "<<fib(2)<<" "<<fib(3)<<" "<<fib(4)<<" "<<fib(5)<<endl;
	return 0;
}
