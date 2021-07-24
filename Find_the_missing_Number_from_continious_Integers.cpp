// You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list. One of the integers is missing in the list. Write an efficient code to find the missing integer.
// Example: 

// Input: array[] = {1, 2, 4, 6}
// Output: 5
// Explanation: The missing number from 1 to 6 is 5

// Input: array[] = {1, 2, 3, 5}
// Output: 4
// Explanation: The missing number from 1 to 5 is 4

//USING XOR 

//XOR properties 
// a1^a2^...^an= a and a1^a2^....^ an-1 = b 
// => a^b = an ; //this is beacuse if we combine both a and b expressions every number appers twice and
// only (an) apperas odd number of times 

#include <iostream> 
using namespace std; 
#define MAX 10   // can be anything

//function to find missing  number

int missing_number( int arr[], int arr_size) {
    int num=arr[0]; 
    //for xor of all the elements of the array 
    for(int i = 1 ; i<arr_size; i++) {
        num=num^arr[i]; 
    }
    //for xor of the all the values from 1 ot n 
    int b = 1; 
    for(int i=2; i<=arr_size+1; i++) 
    {
        b=b^i; 
    }

    return b^num; 
}

int main() {
    int arr[MAX], arr_size ; 
    cout<<"Enter array size "; 
    cin>>arr_size; 
    cout<<"Enter elements of the array ";
    for(int i = 0 ; i<arr_size ; i++) {
        cin>>arr[i]; 
    }
    cout<<missing_number(arr, arr_size); 
    return 0; 
     
    
}