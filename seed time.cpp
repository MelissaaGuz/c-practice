
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    //get the system time 
    unasigned seed time(0);

    //seed the random number generator
    srand(seed);

    //display three random numbers 
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    
    return 0;
}