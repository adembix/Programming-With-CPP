#include<iostream>
using namespace std;

class clsClass{

public:
   static int print(){
      return 10;
   }
};

int main(){

   cout << clsClass::print(); // A static method can be called without an object

   return 0; 
}