//using XOR 


// why it is used ? 
// xor of a number with itself is 0 and 
// xor of any number with itself is that num 
// i.e, 

// x^0 = x 
// x^x = 0 
// x^y^x = 0 ^ y = y 

// hence the number that apppears odd number of times will left in the end and all other cancels themselves. 
#include <iostream> 
using namespace std; 
#define MAX 10

//function to calculate the number that appears odd num  of times 

int oddNumTimes( int arr[] , int arr_size) {
    int num = 0 ; 
    for(int i = 0 ; i< arr_size  ; i++) 
    {
        num = num ^ arr[i] ;  // xor of two numbers 
    }
    return num ;
}

int main() {
    int arr[MAX] ; 
    int arr_size; 
    cout<<"Enter the size of array "; 
    cin>>arr_size; 
    cout<<"Enter the elements of the array "; 
    for(int i = 0 ; i<arr_size; i++)
    {
        cin>>arr[i]; 
    }

    int req_num = oddNumTimes(arr, arr_size) ; 
    cout<<req_num<<endl; 
}

//It does not work if odd number apperance is of more than one element 