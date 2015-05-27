#include <iostream> 
#include <cmath>
using namespace std;
//Create class for Quadratic Equations
class QuadraticEquation{
private:
    //private values for a, b, c,
    //(don't have to be because theres no specifications??)
    int a,b,c;
    
public:
    //constructor for the users inputs/
    QuadraticEquation (int A, int B, int C){
        a=A;
        b=B;
        c=C;
    }
    int discrim;
    
    //Not sure why the directions said to put these here..
    //works w/o them
    int geta(){return a;}
    int getb(){return b;}
    int getc(){return c;}
    
    //functions to do the action calculating
    double getDiscriminant();
    double getRoot1();
    double getRoot2();
};