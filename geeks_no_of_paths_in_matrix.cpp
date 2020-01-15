/*The problem is to count all the possible paths from top left to bottom right of a MxN matrix with the constraints that from each cell you can either move to right or down.
link:-https://practice.geeksforgeeks.org/problems/number-of-paths/0
Input:
The first line of input contains an integer T, denoting the number of test cases. The first line of each test case is M and N, M is number of rows and N is number of columns.

Output:
For each test case, print the number of paths.

Constraints:
1 ≤ T ≤ 30
1 ≤ M,N ≤ 10

Example:
Input
2
3 3
2 8

Output
6
8

Explanation:
Testcase 1: Let the given input 3*3 matrix is filled as such:
A B C
D E F
G H I
The possible paths which exists to reach 'I' from 'A' following above conditions are as follows:
ABCFI, ABEHI, ADGHI, ADEFI, ADEHI, ABEFI.*/
#include <iostream>
using namespace std;
int no_of_paths(int m,int n)
{
    if(m==0||n==0)
        return 0;
    if(m==1||n==1)
        return 1;
    return no_of_paths(m,n-1)+no_of_paths(m-1,n);
}
int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int m,n;
	    cin>>m>>n;
	    cout<<no_of_paths(m,n)<<endl;
	}
	return 0;
}
