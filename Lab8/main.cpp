#include <iostream>
#include <vector>
using namespace std;








int main(){
    
    
    const int SIZE = 5;
    int vec[SIZE];
    
    
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
