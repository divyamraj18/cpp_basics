/*https://practice.geeksforgeeks.org/problems/subset-sums/0

Given an array of integers, print sums of all subsets in it. Output should be printed in increasing order of sums.

Input : arr[] = {2, 3}
Output: 0 2 3 5

Input : arr[] = {2, 4, 5}
Output : 0 2 4 5 6 7 9 11

Input:

The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The first line of each test case is N, N is the size of array. The second line of each test case contains N space separated values of the array arr[].

Output:

Output for each test case should be space separated sums in increasing order.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 10
0 ≤ A[i] ≤ 100

Input:
2
2
1 2
3
5 2 1

Output:

0 1 2 3 
0 1 2 3 5 6 7 8 

** For More Input/Output Examples Use 'Expected Output' option **/










#include <iostream>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
vector<int>sum_arr;
void subsetSums(int arr[], int l, int r, 
                int sum=0) 
{ 
    if (l > r) 
    { 
        sum_arr.push_back(sum);
        return; 
    }
    subsetSums(arr, l+1, r, sum+arr[l]); 
    subsetSums(arr, l+1, r, sum); 
} 
  
// Driver code 
int main() {
	int t;
	cin>>t;
	for(int s=0;s<t;s++)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int j=0;j<n;j++)
	        cin>>arr[j];
	    subsetSums(arr,0,n-1);
	    sort(sum_arr.begin(),sum_arr.end());
	    vector<int>:: iterator it;
	    for(it=sum_arr.begin();it!=sum_arr.end();it++)
	        cout<<*it<<" ";
	   cout<<endl;
	   sum_arr.clear(); 
	    
	}
	return 0;
}

