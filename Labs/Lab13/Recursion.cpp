/*
 * Recursion.cpp  - Practice writing and converting recursion
 *
 * YOUR NAME
 * YOUR EMAIL
 */

#include <iostream>
using namespace std;

// prototypes
template <class T>
void printarray(const T[], int);
void chew_system_stack();

/*
 * Recursive version of fibonacci
 */
int fibrecurse(int n) {

}

/*
 * Iterative (loop) version of fibonacci
 */
int fibiterate(int n) {

}

/*
 * Recursive quicksort
 */
template <class T>
void quicksort(T ar[], int first, int last) {

}

int main() {
    const int FIBLOOPS = 10;
    const int ARSIZ = 16;
    int ar[ARSIZ];

    cout << "Recursive fib: ";
    for(int i=0;i<FIBLOOPS;++i) {
        cout << fibrecurse(i) << " ";
    }
    cout << endl;
    cout << "Iterative fib: ";
    for(int i=0;i<FIBLOOPS;++i) {
        cout << fibiterate(i) << " ";
    }
    cout << endl;

    cout << "Quicksort:" << endl;
    // populate random array
    for(int i=0;i<ARSIZ;++i) {
        ar[i] = (i * 3037) % 2099;  // prime numbers! again!
    }
    printarray(ar, ARSIZ);
    quicksort(ar, 0, ARSIZ-1);
    printarray(ar, ARSIZ);

    cout << "Chewing system stack:" << endl;
    //chew_system_stack();

    return 0;
}

/*  utility functions, do not modify  */
template <class T>
void printarray(const T ar[], int s) {
    for(int i=0;i<s;++i) {
        cout << ar[i] << " ";
    }
    cout << endl;
}

void printstackpointer() {
    void * stack_pointer;
    // inline assembly language to get stack pointer
    __asm__ __volatile__("movl  %%esp,%%eax"
                             :"=a"(stack_pointer)
                             );
    cout << stack_pointer << endl;
}

void chew_system_stack() {
    // Feel free to play with this, but please
    // do NOT enable this for your final commit!
    //printstackpointer();
    chew_system_stack();
}
/* end utilities */

