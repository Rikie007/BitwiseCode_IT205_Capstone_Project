#include <iostream>
#include <vector>
#include <string>

#include "classFile.cpp"
//#include "compare_file_older_months.cpp"
#include "comparison.cpp"
using namespace std;

class File;

int strcmp(string s1, string s2){
    if(s1.length() != s2.length()){
        return 0;
    }

    for(int i = 0; i < s1.length(); i++){
        if(s1[i] != s2[i]) return 0;
    }
    return 1;
}

int main(){

    string s, txt = "txt", csv = "csv";
    cout << "Input file location: ";
    cin >> s;
    string file_extension = s.substr(s.length()-3, 3);

    
    vector<File> v;

    if(strcmp(file_extension, txt)){
        v = inputFile("input.txt");
    }
    else if(strcmp(file_extension, csv)){

    }
    else{
        cout << "Please ecnter valid .txt or .csv files\n";
    }

    //vector v is set;


    
    return 0;
}