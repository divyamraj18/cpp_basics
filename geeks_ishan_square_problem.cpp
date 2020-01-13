

//Ishaan has a craving for sticks. He has N sticks. He observes that some of his sticks are of the same length, and thus he can make squares out of those.
//He wants to know how big a square he can make using those sticks as sides. Since the number of sticks is large, he can't do that manually. Can you tell him the maximum area of the biggest square that can be formed.
//Also calculate how many such squares can be made using the sticks.

//Input : 
//First line of input contains a single integer T denoting the number of test cases.
//The first line of each test case contains an integer N denoting number of sticks.
//The next line contains N space-separated integers denoting the length of the sticks.

//Output : 
//For each test case, print two space-separated integers denoting the maximum area and the number of such squares.
//If no square can be formed, print -1.

//Constraints : 
//1 <= T <= 100
//1 <= N <= 250
//1 <= Stick(i) <= 10^3

//Example : 
//Input : 
//3
//7
//5 3 2 3 6 3 3
//9
//2 2 2 9 2 2 2 2 2
//3
//3 3 3
//Output : 
//9 1
//4 2
//-1

//Explaination : 
//Case 1 : 
//1 square of side 3 is formed.

//Case 2 : 
//2 squares of side 2 are formed.

//Case 3 : 
//No square can be formed.
 
//** For More Input/Output Examples Use 'Expected Output' option **










#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    int a[250];
	    for(int j=0;j<n;j++)
	    {
	        cin>>a[j];
	    }
	    int max=a[0];
	    for(int k=1;k<n;k++)
	    {
	        if(a[k]>max)
	            max=a[k];
	    }
	    int b[max]={0};
	    for(int l=0;l<n;l++)
	    {
	        b[a[l]]++;
	    }
	    int count=0;
	    int area=0;
	    int retr=0;
	    for(int m=0;m<max;m++)
	    {
	        
	        if(b[m]>=4)
	        {
	            count++;
	            retr=b[m]/4;
	            area=m*m;
	          
	        }
	    } 
	    if(count==0)
	        cout<<-1<<endl;
	    else
	        cout<<area<<" "<<retr<<endl;
	    
	}
	return 0;
}
