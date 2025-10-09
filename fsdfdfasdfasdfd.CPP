#include<iostream>
#include<string>
using namespace std;

//class Function
class Teacher{
//properties/attribute
private:
double salary;
public:
string name;
string dept;

//Methods/Member function{
void changedept(string newdept){
dept = newdept;
}
};

//Object
int main(){
Teacher t1;
t1.name = "Utkarsh";
t1.dept = "computer science";
t1.salaey = 350000;
cout<<t1.name<<endl;
return 0;
}
