#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void writeToFile(string filename, int * arr, int sample_size){
    ofstream file(filename);
    int val;

    for(int i = 0; i < sample_size; i++){
        file << arr[i];
        file << "\n";
    }
    file.close();
    printf("wrote to %s\n", filename.c_str());
}

void writeToFile(string filename, string * arr, int sample_size){
    ofstream file(filename);
    int val;

    for(int i = 0; i < sample_size; i++){
        file << arr[i];
        file << "\n";

    }
    file.close();
    printf("wrote to %s\n", filename.c_str());
}

void writeToFile(string filename, char * arr, int sample_size){
    ofstream file(filename);
    int val;

    for(int i = 0; i < sample_size; i++){
        file << arr[i];
        file << "\n";

    }
    file.close();
    printf("wrote to %s\n", filename.c_str());

}


void readFile(string filename){
    string line;
    ifstream ifile (filename);
    if(ifile.fail()){
        cout << "Couldn't open file" << endl;
        return;

    }
    while (ifile.is_open() && ifile >> line){
        printf("%s\n", line.c_str());
    }
    ifile.close();
}











int main(){
    const int SAMPLE_SIZE = 10;
    int array_int[SAMPLE_SIZE] = {1,2,3,4,5,6,7,8,9,10};
    string array_str[SAMPLE_SIZE] = {"This", "is", "a", "sentence. ", "This", "is", "another", "sentence. ", "The", "end."};

    char array_char[SAMPLE_SIZE] = {'a', 'b', 'c', 'd', 'e', '0', '1', '2', '3', '4', };

    string int_file = "array_int.csv";
    writeToFile(int_file, array_int, SAMPLE_SIZE);

    string str_file = "array_str.csv";
    writeToFile(str_file, array_str, SAMPLE_SIZE);

    string char_file = "array_char.csv";
    writeToFile(char_file, array_char, SAMPLE_SIZE);

    readFile(int_file);

    readFile(str_file);

    readFile(char_file);


    return 0;
}