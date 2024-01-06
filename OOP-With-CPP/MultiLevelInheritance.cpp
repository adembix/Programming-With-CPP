#include <iostream>
using namespace std;

// base class / super class
class cPerson{
private:
    string _FirstName;
    string _LastName;
    short _Age;

public:
    cPerson(string F, string L, short A){
        _FirstName = F;
        _LastName = L;
        _Age = A;
    } 

    void setFirstName(string F){
        _FirstName = F;
    }

    string FirstName(){
        return _FirstName;
    }

    void setLastName(string L){
        _LastName = L;
    }

    string LastName(){
        return _LastName;
    }

    void setAge(short A){
        _Age = A;
    }

    short Age(){
        return _Age;
    }

    void Print(){
      cout << "\nInfo:\n";
      cout << "______________________";
      cout << "\nFirst Name:" << _FirstName;
      cout << "\nLast Name :" << _LastName;
      cout << "\nAge :" << _Age;
      cout << "\n______________________\n";
    }
};

// sub class / derived class
class cEmployee : public cPerson {
private:
    string _Email;
    string _Phone;
    string _Salary;

public:
    cEmployee(string F, string L, short A, string E, string P, string S)
        : cPerson (F,L,A)

    {
        _Email = E;
        _Phone = P;
        _Salary = S;
    }

    void setEmail(string E){
        _Email = E;
    }

    string Email(){
        return _Email;
    }

    void setPhone(string P){
        _Phone = P;
    }

    string Phone(){
        return _Phone;
    }

    void setSalary(string S){
        _Salary = S;
    }

    string Salary(){
        return _Salary;
    }

    //overwriding
    void Print(){
      cout << "\nInfo:\n";
      cout << "______________________";
      cout << "\nFirst Name:" << FirstName();
      cout << "\nLast Name :" << LastName();
      cout << "\nAge :" << Age();
      cout << "\nEmail     :" << _Email;
      cout << "\nPhone     :" << _Phone;
      cout << "\nSalary     :" << _Salary;
      cout << "\n______________________\n";
    }
};


// Multi Level Inheritance
class cDeveloper : public cEmployee {
private:
    string _ProgrammingLanguag;

public:
    cDeveloper(string F, string L, short A, string E, string P, string S, string PL)
        : cEmployee (F,L,A,E,P,S)

    {
        _ProgrammingLanguag = PL;
    }

    void setProgrammingLanguag(string P){
        _ProgrammingLanguag = P;
    }

    string ProgrammingLanguag(){
        return _ProgrammingLanguag;
    }

    //overwriding
    void Print(){
      cout << "\nInfo:\n";
      cout << "______________________";
      cout << "\nFirst Name :" << FirstName();
      cout << "\nLast Name  :" << LastName();
      cout << "\nAge        :" << Age();
      cout << "\nEmail      :" << Email();
      cout << "\nPhone      :" << Phone();
      cout << "\nSalary     :" << Salary();
      cout << "\nP_Language :" << _ProgrammingLanguag;
      cout << "\n______________________\n";
    }
};

int main()
{

    cDeveloper o1("Adem", "Bouaicha",100, "a.a@gmail.com", "12556640", "5000", "C++");

    o1.Print();

}