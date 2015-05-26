#include <iostream> 
#include <cmath>
using namespace std;

class QuadraticEquation{
private:
    int a,b,c;
    
public:
    QuadraticEquation (int A, int B, int C){
        a=A;
        b=B;
        c=C;
    }
    int discrim;
    
    int geta(){return a;}
    int getb(){return b;}
    int getc(){return c;}
    
    double getDiscriminant();
    double getRoot1();
    double getRoot2();
};