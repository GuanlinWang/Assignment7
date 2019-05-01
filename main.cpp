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
    while(true)
    {
        input>>num;
        if (input.peek(),input.eof())
      {
        break;
      }
        list.addToFront(num);
    }

}

int main() {
  linkedlist numList;
  string fileName="list.txt";
    readFile(numList,fileName);
    return 0;
}
