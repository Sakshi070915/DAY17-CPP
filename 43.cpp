#include <iostream>
using namespace std;
class Outside_Class{
public:
    string g;
    int id;
    //printname is not defined inside class defination
    void printname();
    //printid is defined inside class defination
    void printid(){
        cout << " id is : " << id;
    }
};
//Defination of printname using scope resolution operator
//::
void Outside_Class::printname(){
    cout << "Name is : " << g;
}
int main(){
    Outside_Class obj1;
    obj1.g = "xyz";
    obj1.id = 15;

    //call printname()
    obj1.printname();
    cout << endl;

    //call printid()
    obj1.printid();
    return 0;

}