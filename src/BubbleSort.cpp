
// Implementation of the bubbleSort class
// bubbleSort.cpp

#define MAX 20

#include "BubbleSort.h"
#include <iostream>

using namespace std;

// constructor
LongArray::LongArray(/*int max*/) {
    //a = new long[max];
    nElems = 0;
}

void LongArray::insert (long val) {
    try {
        if (nElems < MAX) {
            a[nElems] = val;
            nElems++;
        } else {
            throw "Array is full";
        }
    } catch (const char* msg) {
        cerr << msg << endl;
    }
}

void LongArray::deleteEl (int index) {
    try {
        if (index < nElems) {
            for(int i=index; i<nElems; i++)
                a[i] = a[i+1];
            nElems--;
        } else {
            throw "Index out of bounds";
        }
    } catch (const char* msg) {
        cerr << msg << endl;
    }
}

void LongArray::display() {
    for(int j=0; j<nElems; j++)
        cout << a[j] << " ";
    cout << endl;
}

// swap two elements

void LongArray::swap(int first, int second) {
    try {
        if (first < nElems && second < nElems) {
            long temp = a[first];
            a[first] = a[second];
            a[second] = temp;
            display();
        } else {
            throw "Index out of bounds";
        }
    } catch (const char* msg) {
        cerr << msg << endl;
    }
}
    // bubble sort interface
void LongArray::bubbleSort() {

    int out, in;
    for(out=nElems-1; out>1; out--) // outer loop (backward)
        for(in=0; in<out; in++) // inner loop (forward)
            if( a[in] > a[in+1] ) // out of order?
                swap(in, in+1); // swap them
                
        
}