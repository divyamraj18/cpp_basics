/*
https://practice.geeksforgeeks.org/problems/count-smaller-elements/0
Given an array A of positive integers. Count number of smaller elements on right side of each array.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N,N is the size of array. The second line of each test case contains N input arr[i].

Output:
Print the countSmaller array.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106
1 <= Ai  <= 108

Example:
Input:
2
7
12 1 2 3 0 11 4
5
1 2 3 4 5

Output:
6 1 1 1 0 1 0
0 0 0 0 0

Explanation:
Testcase 1: 6 elements are greater than 1 on its right side in original array. Similarly 1 element is greater than 4 on its right side in original array.
** For More Input/Output Examples Use 'Expected Output' option **/

#include <iostream>
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
	    int b[n];
	    int count=0;
	    int i,j;
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    for(i=0;i<n-1;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(a[j]<a[i])
	                count++;
	        }
	        b[i]=count;
	        count=0;
	    }
	    b[n-1]=0;
	    for(i=0;i<n;i++)
	        cout<<b[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
