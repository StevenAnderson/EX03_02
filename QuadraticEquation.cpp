#include "QuadraticEquation.h"

double QuadraticEquation::getDiscriminant(){
    double discrim=0;
    discrim=b*b-(4*a*c);
    return discrim;
};

double QuadraticEquation::getRoot1(){
     double r1;
    if (discrim<0)
        r1=0;
   else
    r1=(-b+sqrt(b*b-(4*a*c)))/(2*a);
    
    return r1;
};

double QuadraticEquation::getRoot2(){
    double r2;
    if (discrim<0){
        r2=0;
    }
    
    else
        r2=(-b-sqrt(b*b-(4*a*c)))/(2*a);
    return r2;
};