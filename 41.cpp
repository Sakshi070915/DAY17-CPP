//C++ program to illustrate how create a simple class and object 
#include <iostream>
using namespace std;

class Person{
public:
 
     string name;
     int age;

     void introduce()
     {
        cout<<" Hi, my name is "<<name<<" and I am "
        <<age<<" years old. "<<endl;
     }
};
int main(){
    Person person1;

    person1.name="Sakshi";
    person1.age=18;

    person1.introduce();
    return 0;
}