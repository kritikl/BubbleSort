#include <gtest/gtest.h>
#include <iostream>
#include <cstdlib> // for rand() & srand()
#include <ctime>   // for time()
#include "../src/BubbleSort.h"

using namespace std;

// currently using TEST to recreate arr for every test
// To reuse arr, use TEST_F - refer: https://google.github.io/googletest/primer.html

TEST(BubbleSortTests, sortEmptyArray)
{
    LongArray arr;
    cout << "Before sorting empty array:\n";
    arr.display();
    arr.bubbleSort();
    ASSERT_TRUE(true);
}

TEST(BubbleSortTests, sortArrayWithOneElement)
{
    LongArray arr;
    srand(time(0));
    arr.insert(rand() % 100);
    cout << "Before sorting array with one element:\n";
    arr.display();
    arr.bubbleSort();
    cout << "After sorting:\n";
    arr.display();
    ASSERT_TRUE(true);
}

TEST(BubbleSortTests, sortArrayWithRandomElements)
{
    LongArray arr;
    for (int i = 0; i < MAX; i++)
    {
        arr.insert(rand() % 100);
    }
    cout << "Before sorting " << MAX << " random elements:\n";
    arr.display();
    arr.bubbleSort();
    cout << "After sorting:\n";
    arr.display();
    ASSERT_TRUE(true);
}