/*
 * Stacktester.h  - Practice using the STL stack object
 *
 * YOUR NAME
 * YOUR EMAIL
 */

#ifndef LAB_STACKTESTER
#define LAB_STACKTESTER

#include <iostream>
#include <stack>
using std::cout;
using std::endl;
using std::stack;

template <class T>
void popandprint(stack<T>& stak) {
    cout << stak.top() << " ";
    stak.pop();
}

void stacktester() {
    stack<int> st;

    st.push(8);
    st.push(6);
    st.push(1);
    st.push(2);
    st.push(5);
    st.push(3);
    st.push(4);
    st.push(7);

    cout << endl;
}

#endif  // LAB_STACKTESTER

