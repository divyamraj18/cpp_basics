#include<iostream>
using namespace std;
void fun(int n)
{
	if(n>0)
	{
		fun(n-1);
		cout<< n<<endl;
		
	}
}
int main()
{
	int n=10;
	fun(n);
	return 0;
}
