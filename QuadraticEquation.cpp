#include "QuadraticEquation.h"
//case cpp file to write out functions

// Calculates the Discriminant to compare to later
double QuadraticEquation::getDiscriminant(){
    double discrim=0;
    discrim=b*b-(4*a*c);
    return discrim;
};
//calculate the first root of the equation
double QuadraticEquation::getRoot1(){
     double r1;
    //if discriminant is negative return a 0 for r1
    if (discrim<0)
        r1=0;
   else
    r1=(-b+sqrt(b*b-(4*a*c)))/(2*a);
    return r1;
};
//calculate the second root of the equation
double QuadraticEquation::getRoot2(){
    double r2;
     //if discriminant is negative return a 0 for r2
    if (discrim<0){
        r2=0;
    }
    
    else
        r2=(-b-sqrt(b*b-(4*a*c)))/(2*a);
    return r2;
};