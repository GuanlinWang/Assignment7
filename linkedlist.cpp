#include "linkedlist.h"

linkedlist::linkedlist() {

}

linkedlist::~linkedlist() {
    // RECURSIVE
}

int linkedlist::count() {
    // RECURSIVE
    return 0;
}

void linkedlist::addToFront(int n) {
    head=new node;
    head->data=n;
    cout<<head->data<<" ";
    head->next=nullptr;
    head=head->next;


}

double linkedlist::average() {
    // uses sum and count functions
    return 0;
}

int linkedlist::sum() {
    // RECURSIVE
    
    return 0;
}

void linkedlist::writeInorder(string & file) {

}

void linkedlist::writeReversed(string & file) {
    // RECURSIVE
}
