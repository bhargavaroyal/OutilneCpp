/*Given N, help Manmohan to print pattern upto N lines. For eg For N=6 , following pattern will be printed.

1
11
111
1001
11111

100001

Input Format:
Single number N.

Constraints:
N<=1000

Output Format
Pattern corresponding to N.

Sample Input
6
Sample Output
1
11
111
1001
11111
100001*/
 #include<iostream>
using namespace std;
int main() {
    int n,i,j;
    cout<<"Enter the n value: ";
    cin>>n;
    for(i=1;i<=n;i++)
       {
        for(j=1;j<=i;j++)
                 {  if(i==1||j==1||i==j||i%2!=0) cout<<"1";               
                  else cout<<"0";
            }
      cout<<endl;
        }
	return 0;
}