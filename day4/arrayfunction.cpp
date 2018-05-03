/*Goal: create a function that searches an array for 
**a given value. 
*/

#include<iostream>

int search(int *array, int size, int searchKey);

int main()
{
    const int size = 4;
    int array[] = {345,75896,2,543};
    int searchKey = 543;
    std::cout<<"Found at: "<<search(array, size, searchKey);
    return 0;
}

int search(int *array, int size, int searchKey)
{
    int i = 0;
    for (i=0;i<size;i++){
        if (searchKey == array[i]){
            break;
        }
    }
    return i;
}