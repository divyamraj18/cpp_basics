/*https://practice.geeksforgeeks.org/problems/gf-series/0

Siddhant made a special series and named it as G.F Series.The series follows this trend  Tn=(Tn-2)2-(Tn-1)  in which the first and the second term are 0 and 1 respectively.Help Siddhant to find  upto N terms of the series .

Input:
First line contain T, number of test cases.Second line contains an integer N upto which series will run.

Output:
Print all the terms which will occur in the series(upto N).

Constraints:
1 <= T <= 20
1 <= N <= 30

Example:
Input:
3
3
6
2

Output:
0 1 -1
0 1 -1 2 -1 5 
0 1

 
** For More Input/Output Examples Use 'Expected Output' option **/
#include <iostream>
using namespace std;
static long int a[31];
long int series(int n)
{
    if(n<0)
        return -1;
    if(n>2)
    {
    if(a[n-1]==-1)
        a[n-1]=series(n-1);
    if(a[n-2]==-1)
        a[n-2]=series(n-2);
    a[n]=a[n-2]*a[n-2]-a[n-1];
    return a[n-2]*a[n-2]-a[n-1];
    }
    
}
int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    for(int j=0;j<n;j++)
	    {
	        a[j]=-1;
	    }
	    a[1]=0;
	    a[2]=1;
	    series(n);
	    for(int j=1;j<=n;j++)
	    {
	        cout<<a[j]<<" ";
	    }cout<<endl;
	}
	return 0;
}

