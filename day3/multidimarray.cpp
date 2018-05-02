/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>

int main()
{
    int array[4][4];
    int vector[4];
    int output[4];
    // Input Array
    for (int i=0;i<4;i++){ //input array
        for (int j=0;j<4;j++){
            std::cin>>array[i][j];
        }
    }
    // Multiply Array by four
    for (int i=0;i<4;i++){ //input vector
        std::cin>>vector[i];
        output[i]=0;
    }
    
    for (int i=0;i<4;i++){ //output vector
        for (int j=0;j<4;j++){
            output[i]=output[i]+vector[j]*array[j][i];
            }
    }
    for (int i=0;i<4;i++){ //stream output vector
        std::cout<<output[i]<<" ";
    }
    
    

    
    return 0;
}