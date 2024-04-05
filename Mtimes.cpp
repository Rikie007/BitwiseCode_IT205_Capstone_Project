#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "classFile.cpp"
#include "delete.cpp"

int lessThanMTimes(vector<File> &v, int m){
    int count = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i].noOfTimeOpened < m){
            delete_file(v[i].path,i,v);
            count++;
            i--;
        }
    }
    return count;
}