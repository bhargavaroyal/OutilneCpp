#include <iostream>
using namespace std;
struct Student {
   string name;
   string address;
   int rollNo;
};
void print(const Student &s) {
    cout << s.name << "  " << s.address << "  " << s.rollNo;
}
 int main(){

 Student s;
 
 s.name = "hi";
 s.address = "address details";
 s.rollNo = 1234;
 
// If we remove & in below function, a new
// copy of the student object is created.
// We use const to avoid accidental updates
// in the function as the purpose of the function
// is to print s only.
print(s);
return 0;
}