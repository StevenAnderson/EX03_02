#include "QuadraticEquation.h"
int main(){
    
    int a,b,c;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    cout << "Enter another number: ";
    cin >> c;
    QuadraticEquation Q1( a, b, c);
    
    int disc=Q1.getDiscriminant();
    if (disc>0){
    cout << "Root 1: " << Q1.getRoot1()<< endl;
    cout << "Root 2: " << Q1.getRoot2()<< endl;
    }
    else if (disc==0){
        cout << "Root is " << Q1.getRoot1()<< endl;
    }
    else cout << "The equation has no real roots." << endl;
    
    
    
    
    
    return 0;
    
    
}