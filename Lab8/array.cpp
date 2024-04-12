#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief prints the elemts in the array and their memory locations
 * 
 * 
 * @param arr - array of integers
 * @param size - the number of elements in the array 
 * 
 */

void printMemArr(const int * arr, int size) { // void printMemArr(int arr[], int size)
    printf("Array - Each int is worth %lu bytes\n", sizeof(arr[0]));
    for(int i = 0; i < size; i++){
        printf("Value :%i at memory Location: %p\n", arr[i], arr + i);
    }
}

/**
 * @brief  prints the elemnts in the vector and their memory locations 
 * 
 * @param v - vector of integers 
 */

void printMemVec(vector<int> v){
    printf("Array - Each int is worth %lu bytes\n", sizeof(v[0]));
    for(int i = 0; i < v.size(); i++){
        printf("Value :%i at memory Location: %p\n", v[i], &v + i);
    }
}

/**
 * @brief  increments all of the elements  in arr by 10 
 * 
 * @param arr - array of integers 
 * @param size -the number of elemnts in the array 
 * 
 */
void incArrBy10(int * arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] += 10;
    }
}

/**
 * @brief increments all of the elements in the v by 10  
 * 
 * @param v 
 */
void incVecBy10(vector<int> & v) {
    for(int i = 0; i < v.size(); i++){
        v[i] += 10;
    }
}

int main(){
    const int SIZE = 5;
    int arr[SIZE];
    for(int i = 0; i < SIZE; i ++){
        arr[i] = 100 + i;
    }
    printf("Before------------\n");
    printMemArr(arr, SIZE);
    incArrBy10(arr, SIZE);
    printf("After---------------\n");
    printMemArr(arr, SIZE);
    
    
    vector<int> vec;
    for(int i = 0; i < SIZE; i ++){
        vec[i] = 100 + i;
        vec.push_back(100+i);
    }
    printf("Before increment------------\n");
    printMemVec(vec);
    incVecBy10(vec);
    printf("After increment---------------\n");
    printMemVec(vec);

    // remove last elemnt 
    vec.pop_back();
    printf("After pop_back---------\n");
    printMemVec(vec);
    
    // add elements to vec
    vec.push_back(101);
    vec.push_back(102);
    printf("After push_back---------\n");
    printMemVec(vec);
    
    
    return 0;
    
    
    
    
    
    
    
    
    
    
    
}



