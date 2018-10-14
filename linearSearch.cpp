//
// Created by Amanuel on 10/13/2018.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int linearSearch(string value, vector<string> A, int size){
int count = 0;
    for(int i = 0; i < size; ++i) {
        if (A.at(i) == value)
            count++;
    }

return count;

}
