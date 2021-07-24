//Idea is store sum of both in 1 and later get the answer

#include <iostream>
using namespace std; 

int main() {
    int x, y ;
    cout<<"Enter  two numbers to swap " ; 
    cin>>x>>y; 

    //to swap 
    // ex. x = 2 {0010} 
    //     y = 12{1100}    x^y = 1110 {14}   

    x=x^y; //basically XOR returns bit 1 when both the elements bit differ on a certain position 
            // above operation adds two numbers
    y=x^y; // 1110 {14} xor 1100 {12} => 0010 {2} //it subtracts

    // now y = 2 ; 
    x = x^y ; // now x = 12 

    cout<<"swapped values are x="<< x<<"and y = " <<y <<endl; 
    return 0; 
}


