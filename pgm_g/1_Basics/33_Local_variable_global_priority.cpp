#include<iostream>
using namespace std;
 
int main(){
    int gfg=0; // local variable for main
    cout<<"Before if-else block "<<gfg<<endl;
    if(1){
        int gfg = 100; // new local variable of if block
        cout<<"if block "<<gfg<<endl;
    }
    cout<<"After if block "<<gfg<<endl;
    return 0;
}
/*If the name of the variable you created in 
if/else is as same as any global variable then 
priority will be given to `local variable`. 
    Before if-else block 0
    if block 100
    After if block 0
*/
