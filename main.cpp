#include "QuadraticEquation.h"
int main(){
    
    //prompt for the users 3 values
    int a,b,c;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    cout << "Enter another number: ";
    cin >> c;
    //enter these valuse into the object Q1
    QuadraticEquation Q1( a, b, c);
    
    //set the discriminant to something to decide what to do.
    int disc=Q1.getDiscriminant();
    //if discriminant is positive cout both roots (r1 & r2)
    if (disc>0){
    cout << "Root 1: " << Q1.getRoot1()<< endl;
    cout << "Root 2: " << Q1.getRoot2()<< endl;
    }
    //if discriminant is equal to zero only cout one root (they are the same)
    else if (disc==0){
        cout << "Root is " << Q1.getRoot1()<< endl;
    }
    
    else cout << "The equation has no real roots." << endl;
    
    return 0;
}