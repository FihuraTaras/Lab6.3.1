// 6.3.1.cpp
// IT-12 / Fihura Taras

#include <iostream>
using namespace std;

int* generateArray(int length) {
    int* vector = new int[length];
    for (int i = 0; i < length; i++) {
        vector[i] = rand() % 10;
    }
    return vector;
}

void printArray(int* vector, int length) {
    for (int i = 0; i < length; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int unevenCount(int* vector, int length) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (vector[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main()
{
    int length = 5;
    int* vector = generateArray(length);
    printArray(vector, length);
    cout << "vector contains " << unevenCount(vector, length) << " uneven elements";

    return 0;
}