#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the value n:";
    cin>> n;
    // complete this function
    int nsp=2*n-3;     //initializing number of spaces
        int nst=1;         //initializing number of numbers

        for(int i=1;i<=n;i++)
        {
            int num=1;
            //work for numbers
            for(int cst=1;cst<=nst;cst++)
            {
                if(cst!=n)
                cout<<num<<"\t";

                num++;
            }

            //work for spaces
            for(int csp=1;csp<=nsp;csp++)
            {
                cout<<" \t";
            }

            //work for numbers
            for(int cst=num-1;cst>=1;cst--)
            {
                cout<<cst<<"\t";
            }

            //preparation for next iteration

            nsp=nsp-2;
            nst++;
            cout<<endl;
        }
}