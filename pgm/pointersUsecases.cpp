
#include<iostream>
using namespace std;
 
int &fun()
{
    static int x = 10;
    return x;
}
int main()
{
    fun() = 30;
    cout << fun();
    return 0;
}
Question 2 
#include<iostream>
using namespace std;
 
int fun(int &x)
{
    return x;
}
int main()
{
    cout << fun(10);
    return 0;
}
Question 3 
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
  char *str1 = "GEEKS";
  char *str2 = "FOR GEEKS";
  swap(str1, str2);
  cout<<"str1 is "<<str1<<endl;
  cout<<"str2 is "<<str2<<endl;
  return 0;
}
Question 4 
#include<iostream>
using namespace std;
 
int main()
{
   int x = 10;
   int *ptr = &x;
   int &*ptr1 = ptr;
}
Question 5 
#include<iostream>
using namespace std;
 
int main()
{
   int *ptr = NULL;
   int &ref = *ptr;
   cout << ref;
}
Question 6 
#include<iostream>
using namespace std;
 
int &fun()
{
    int x = 10;
    return x;
}
int main()
{
    fun() = 30;
    cout << fun();
    return 0;
}
