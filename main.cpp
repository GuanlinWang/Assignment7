#include <iostream>
#include <string>
#include "linkedlist.cpp"
#include <fstream>

using namespace std;

void readFile(linkedlist & list, string & file)
{
    int num;
    ifstream input;
    input.open(file);
    while(!input.eof())
    {
        input>>num;
        list.addToFront(num);
        
    }
    
}

int main() {
    
    return 0;
}
