#include <iostream>
using namespace std;


class cPerson{
private:
    string *FirstName = new string ;
    string *LastName = new string;
    short *Age = new short;

public:
    cPerson(string F, string L, short A){
    *FirstName = F;
    *LastName = L;
    *Age = A;
    } 

    void Print(){
      cout << "\nInfo:\n";
      cout << "______________________";
      cout << "\nFirst Name:" << *FirstName;
      cout << "\nLast Name :" << *LastName;
      cout << "\nAge :" << *Age;
      cout << "\n______________________\n";
    }

    ~cPerson(){
        delete FirstName;
        delete LastName;
        delete Age;
    }
};

int main()
{

    cPerson o1("Adem", "Bouaicha",100);

    o1.Print();

}