// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<float> vIn);

 void printVector(vector<float> vIn)
 {
 std::vector<float>::iterator it;
 for (it = vIn.begin(); it != vIn.end(); ++it)
    std::cout<<*it<<" ";
 }
 