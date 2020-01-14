/*
https://practice.geeksforgeeks.org/problems/stickler-theif/0/
Stickler the thief wants to loot money from a society having n houses in a single line. He is a weird person and follows a certain rule when looting the houses. According to the rule, he will never loot two consecutive houses. At the same time, he wants to maximize the amount he loots. The thief knows which house has what amount of money but is unable to come up with an optimal looting strategy. He asks for your help to find the maximum money he can get if he strictly follows the rule. Each house has a[i] amount of money present in it.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each test case contains an integer n which denotes the number of houses. Next line contains space separated numbers denoting the amount of money in each house.

Output:
For each testcase, in a newline, print an integer which denotes the maximum amount he can take home.

Constraints:
1 <= T <= 200
1 <= n <= 104
1 <= a[i] <= 104

Example:
Input:
2
6
5 5 10 100 10 5
3
1 2 3
Output:
110
4

Explanation:
Testcase1:
5+100+5=110
Testcase2:
1+3=4
** For More Input/Output Examples Use 'Expected Output' option **
*/
#include <iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
        return a;
    return b;
}
int main() {
	//code
	int t;
	cin>>t;
	for(int s=0;s<t;s++)
	{
	    
	   int n;
	   cin>>n;
	   int a[n];
	   int i;
	   for(i=0;i<n;i++)
	   {
	       cin>>a[i];
	   }
	    int incl=a[0];
	    int excl=0;
	    for(i=1;i<n;i++)
	    {   
	        int temp=max(incl,excl);
	        int temp1=excl+a[i];
	        incl=temp1;
	        excl=temp;
	        
	    }
	    cout<<max(incl,excl)<<endl;
	   
	}
	return 0;
}
