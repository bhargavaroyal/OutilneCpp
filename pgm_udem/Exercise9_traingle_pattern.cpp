#include<iostream>
using namespace std;


int main(){
int n;

    cin>>n;
    cout<<"Enter the value of n: \n";
    // complete this function
    int nsp=n-1;
        int num=1;

        for(int i=1;i<=n;i++)
        {
            //work for spaces
           for(int csp=1;csp<=nsp;csp++)
           {
               cout<<" \t";
           }

           // work for numbers

           for(int cst=1;cst<=(2*i-1);cst++)
           {
               cout<<num<<"\t";

               if(cst<i)
                   num++;
               else
                   num--;

           }

           //preparation for next iteration

           nsp=nsp-1;
           num+=2;
          cout<<endl;

        }
}