
///https://practice.geeksforgeeks.org/problems/ishaans-internship/0
/*Ishaan wants to intern at GeeksForGeeks but for that he has to go through a test. There are N candidates applying for the internship including Ishaan and only one is to be selected.
Since he wants to qualify he asks you to help him. The test is as follows.
The candidates are asked to stand in a line at positions 1 to N and given a number K. Now, every Kth candidate remains and the rest are eliminated. This is repeated until the number of candidates are less than K.
Out of the remaining candidates, the one standing at smallest position is selected. You need to tell Ishaan at position he must stand to get selected.

Input : 
First line of input contains a single integer T denoting the number of test cases.
The only line of each test case contains 2 space-separated integers N denoting number of candidates and  K.

Output : 
For each test case, print the required position in a new line.

Constraints : 
1 <= T <= 100
1 <= N <= 10^5
2 <= K <= 10

Example : 
Input : 
3
30 3
18 3
5 2
Output : 
27
9
4

Explaination : 
Case 1 : 
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
3 6 9 12 15 18 21 24 27 30
9 18 27
27

Case 2 : 
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
3 6 9 12 15 18
9 18 (less than K)
9

Case 3 : 
1 2 3 4 5
2 4
4
 
** For More Input/Output Examples Use 'Expected Output' option **
Author: goyalanubhav11
*/









 #include <iostream>
    #include<bits/stdc++.h>
    using namespace std;
    
    int main() {
    	//code
    	int t;
    	cin>> t;
    	for(int s=0;s<t;s++)
    	{
    	    int n,k;
    	    cin>>n>>k;
    	    int r=0;
    	    while(n>=k)
    	    {
    	        n=n/k;
    	        r++;
    	    }
    	    cout<<pow(k,r)<<endl;
    	}
    	return 0;
    }
