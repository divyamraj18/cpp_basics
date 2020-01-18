/*
https://practice.geeksforgeeks.org/problems/maximum-product-of-two-numbers/0

Given an array with all elements greater than or equal to zero. Return the maximum product of two numbers possible.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N, size of array. The second line of each test case contains array elements.

Output:
Print the maximum product of two numbers possible.

Constraints:
1 ≤ T ≤ 100
2 ≤ N ≤ 107
0 ≤ A[i] ≤ 104

Example:
Input:
1
5
1 100 42 4 23

Output:
4200

Explanation:
Testcase 1: Two maximum numbers are 100 and 42 and their product is 4200.
** For More Input/Output Examples Use 'Expected Output' option **
*/




#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int z=0;z<t;z++)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        int mul1=a[0]*a[1];
        int mul2=a[n-1]*a[n-2];
        if(mul1>mul2)
            cout<<mul1<<endl;
        else
            cout<<mul2<<endl;
    }
    return 0;
}
