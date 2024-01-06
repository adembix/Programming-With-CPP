#include<iostream>
using namespace std;

class clsClass{

public:
   static int Counter;

   clsClass(){
      Counter++;
   }

   void printCounter(){
      cout << Counter << "\n";
   }
};

int clsClass::Counter = 0; //static variable initialisation outside the class

int main(){
   clsClass o1, o2, o3;

   o1.printCounter();
   o2.printCounter();
   o3.printCounter();

   return 0; 
}