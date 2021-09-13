Short Info about the variables:-


1. nsp (number of spaces)-> Number of spaces in very First Line of the pattern.
2. nst (number of stars)-> Number of stars in very first line of the pattern.
3. csp (counter of spaces)-> counter of spaces that will print the required number of spaces and will be initialized with 1 and incremented upto nsp.
4. cst (counter of stars)->  counter of spaces that will print the required number of stars and will be initialized with 1 and incremented upto nst.
5. rows -> It will be initialized with 1 and will go upto the total number of rows in the pattern.
nst = (n/2 + 1), cst = 1, rows = 1, nsp = -1,total rows = n;

The given pattern is seen as first stars then spaces and then stars .So for each row do the work of stars first , then that of spaces and then that of stars. And then change the variables accordingly for next iterations.

But this work will not help u to pass the test cases as there will be 1 extra star in the first line and last line. For e.g.,

       * * * * * *  //Extra star
       * *   * *
       *       *
       * *   * *
       * * * * * * // Extra Star
To handle this condition all you need to do is run your second look 1 time less only when control is in first and last line.
if(rows == 1 || rows == n) cst = 2;


#include<iostream>
using namespace std;

void print(int n){
    // complete this function
     int nst = (n/2) + 1;
         int nsp = -1;
        int rows = 1;
        while(rows <= n){

             int cst = 1;
            while(cst <= nst){

                cout<<"*\t";
                cst++;
            }

            int csp = 1;
            while(csp <= nsp){
                cout<<" \t";
                csp++;
            }

            cst = 1;
            if(rows == 1 || rows == n) cst = 2; //To handle extra Star

            while(cst <= nst){

                cout<<"*\t";
                cst++;
            }



            if(rows <= n/2){ //Update
                nsp += 2;
                nst--;
            }else{
                nsp -= 2;
                nst++;
            }
            rows++;
            cout<<endl;
        }
}