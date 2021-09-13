/*For the input:
3
2
Then we need to print first 3 terms starting from n = 1 in the given series (3n + 2) which are not divisible by 2.
In that case nums starting from n = 1 are 5, 8, 11, 14, 17, 23… and so on. but we need to print only those numbers which are not divisible by 2, which are, 5, 11, 17.

The problem most of the students will face is
"how to print first N1 terms?"
"What should be the condition to end the loop?" as the N1 terms are not defined.
Ans is simple we will use a counter variable and initialize it with 0 and will increment it only when we got the number in the series which is not divisible by N2 till the counter is smaller than N1.
*/
#include<iostream>
using namespace std;

int main(){
    int n1,n2;
     cout<<"Enter the Value of n1 \n";
   cin>> n1;
     cout<<"Enter the Value of n2\n";
    cin>>n2;

    // complete this function
    
     int n=1;int count=1;
    while(count<=n1){

        int ans=3*n+2;
        if(ans%n2!=0){
            cout<<ans<<endl;
            count++;

        }                
        n++;
      }
}