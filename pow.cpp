#include<iostream>
using namespace std;
int pow(int m,int n)
{
	if(n==0)//base case
	{
		return 1;
	}
	else if(n%2==0)//case when the number is even
	{
		return pow(m*m,n/2);
	}
	else//case when the number is odd
	{
		return m*pow(m*m,(n-1)/2);
	}
}
int main()
{
	cout<<pow(2,9)<<endl;
	cout<<pow(2,10)<<endl;
	return 0;
}
