#include <iostream>
#include <map>

using namespace std;
int main(){
    map<char,int > myMap;
    myMap['a'] = 10;
    myMap['b'] = 20;
    myMap['z'] = 30;
    for(map<char, int>::iterator it = myMap.begin();it!=myMap.end();++it){
        cout << it->first << " => " << it->second << '\n';
    }
}