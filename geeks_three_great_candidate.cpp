/*https://practice.geeksforgeeks.org/problems/three-great-candidates/0/


The hiring team of Google aims to find 3 candidates who are great collectively. Each candidate has his or her ability expressed as an integer. 3 candidates are great collectively if product of their abilities is maximum. Given abilities of N candidates, find the maximum collective ability from the given pool of candidates.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follows. First line of each test case conatins an interger N  denoting the number of candidates.
The second line of each test case contains N space separated elements denoting the ablities of candidates.

Output:
Corresponding to each test case, print the desired output(maximum collective ability of three candidates) in a newline.

Constraints:
1 ≤ T ≤ 100
3 ≤ N ≤ 107
-105 ≤ ability ≤ 105

Example:
Input
1
6
0 -1 3 100 70 50

Output:
350000

Explanation:
Testcase 1: 70*50*100 = 350000 which is the maximum possible.
** For More Input/Output Examples Use 'Expected Output' option **/


#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int s=0;s<t;s++)
	{
	    int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    long long int max1=a[n-1]*a[n-2]*a[n-3];
	    long long int max2=a[0]*a[1]*a[n-1];
	    if(max1>max2)
	        cout<<max1<<endl;
	    else
	        cout<<max2<<endl;
	}
	return 0;
}
