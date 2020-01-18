/*https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array/0/

Given an array A of positive integers. Push all the zero’s of a given array to the end of the array.

Input:
The first line contains an integer T denoting the total number of test cases. In each test cases, first line is number of elements in array N and next line contains array elements.

Output:
Print the array after shifting all 0's at the end.​

Constraints:
1 <= T <= 100
1 <= N <= 103
0 <= Ai <=103

Example:
Input:
1
5
3 5 0 0 4

Output:
3 5 4 0 0

Explanation:
Testcase 1: All the zeros are moved to last and then array is as shown in the output.
** For More Input/Output Examples Use 'Expected Output' option **
*/





#include <iostream>
#include<algorithm>
using namespace std;

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
	    int count =0;
	    for(i=0;i<n;i++)
	        cin>>a[i];
	   for(i=0;i<n;i++)
	   {
	       if(a[i]!=0)
	        a[count++]=a[i];
	   }
	   while(count<n)
	        a[count++]=0;
	    for(i=0;i<n;i++)
	        cout<<a[i]<<" ";
        cout<<endl;        	    
	}
	return 0;
}
