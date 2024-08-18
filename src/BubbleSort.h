#define MAX 20

// bubbleSort.cpp
class LongArray {
    public: 
    LongArray(/*int max*/);
    void insert (long val);
    void deleteEl (int index);
    void display();
    // bubble sort interface
    void bubbleSort();


    private:
    long a[MAX];
    int nElems;
    void swap(int first, int second);
};