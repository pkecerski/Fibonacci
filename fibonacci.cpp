//  fibonacci
//  Created by Paweł Kęcerski on 2021/03/16
//  @pkecerski
//  Prints elements of the Fibonacci Sequence up to the n-th element


#include <iostream>
#include <stdio.h>

//  Define namespace for easier typing
using namespace std;

//  Define functions
void fibonacci();

// Define variables


// Program loop
int main(int argc, char *argv[]){
        fibonacci();
}

// Custom functions
void fibonacci(){
    int nElements;
    //  Prompt user for desired number of elements
    printf("Please enter how many elements to print: \n");
    scanf("%d",&nElements);
    // Paragraph break for better visuals
    printf("\n\n");
    // Initialize array with given number of elements
    int nSequence[nElements];
    nSequence[0] = 0;
    nSequence[1] = 1;
    //  Populate the array with the Fibonacci Sequence
    for (int i=2; i<nElements; i++){
       nSequence[i] = nSequence[i-2]+nSequence[i-1];
    }
    // Print out the sequence
    for (int i=0; i<nElements; i++){
        printf("%d\n", nSequence[i]);
    }
}
