#include<iostream>
using namespace std;
 
void swap(char * &str1, char * &str2)
{
  char *temp = str1;
  str1 = str2;
  str2 = temp;
}
 
int main()
{
    //ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
    //The problem is that you are trying to convert a string literal (with type const char[]) to char*.
    //You can convert a const char[] to const char* because the array decays to the pointer,
    // but what you are doing is making a mutable a constant.

  char  *str1[] = "GEEKS";       //sol:  char const  *str2 = "FOR GEEKS";
  char   *str2 = "FOR GEEKS"; //sol:  char const  *str2 = "FOR GEEKS";
  swap(str1, str2);
  cout<<"str1 is "<<str1<<endl;
  cout<<"str2 is "<<str2<<endl;
  return 0;
}
