/*
https://practice.geeksforgeeks.org/problems/majority-element/0/
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

Input:  
The first line of the input contains T denoting the number of testcases. The first line of the test case will be the size of array and second line will be the elements of the array.

Output: 
For each test case the output will be the majority element of the array. Output "-1" if no majority element is there in the array.

Constraints:
1 <= T<= 100
1 <= N <= 107
0 <= Ai <= 106

Example:
Input:
2
5
3 1 3 3 2
3
1 2 3

Output:
3
-1

Explanation:
Testcase 1: Since, 3 is present more than N/2 times, so it is the majority element.
 
*/

#include <iostream>
using namespace std;

// int main() {
// 	//code
// 	int t;
// 	cin>>t;
// 	for(int s=0;s<t;s++)
// 	{
// 	    int flag=0;
// 	    int ele;
// 	    int n;
// 	    cin>>n;
// 	    int a[n];
// 	    int i;
// 	    for(i=0;i<n;i++)
// 	    {
// 	        cin>>a[i];
// 	    }
// 	    int max=a[0];
// 	    for(i=1;i<n;i++)
// 	    {
// 	        if(a[i]>max)
// 	            max=a[i];
// 	    }
// 	    int b[max+1];
// 	    for(i=0;i<=max;i++)
// 	    {
// 	        b[i]=0;
// 	    }
// 	    for(i=0;i<n;i++)
// 	    {
// 	        b[a[i]]++;
// 	    }
// 	    for(i=0;i<=max;i++)
// 	    {
// 	        if(b[i]>n/2)
// 	        {
// 	            flag=1;
// 	            ele=i;
// 	        }
// 	    }
// 	    if(flag!=1)
// 	        cout<<-1<<endl;
// 	    else 
// 	        cout<<ele<<endl;
// 	}
// 	return 0;
// }

//another method 
int majorityElement(int a[], int size)
{
int maj=size/2;
    if(size==1)
    return a[0];
    else
    {
    
    
    for(int i=0;i<size;i++)
    {
        int cnt=0;
        for(int j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                cnt++;
            }
            if(cnt>=maj)
            return a[i];
        }
    }
    return -1;
    }
}


