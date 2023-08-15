#include<iostream>
using namespace std;

int main(){

   // pointers -- it is a datatype which holds the address of other datatypes
int a =3;

int* b = &a;

cout << "The address of a is "<< b << endl;
cout << "The value of a is  "<<*b << endl;


int** c = &b;

cout << "The address of b is " << c << endl;
cout << "The value of b is" << **c << endl;
cout << *c ;




}