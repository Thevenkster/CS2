/*
	An implementation of a LinkedList using
	two classes:

	Node - has a value and pointer to next node

	LinkedList - a pointer to the first node

	YOUR NAME
	YOUR EMAIL
*/

#include <cstdlib> // for NULL

#include <iostream>
using namespace std;

/*
	Provided class, Node.
	No changes need to be done to this class.
*/
template<class T>
class Node {
private:
    T value;
    Node* next;
public:
    Node() {
        next = NULL;
    }

    Node(T t) {
        value = t;
        next = NULL;
    }

    T getValue() {
        return value;
    }

    Node* getNext() {
        return next;
    }

    void setNext(Node* n) {
        next = n;
    }
};

/*
	Modify this class.
	Each element in linked list will be a Node
	object.
*/
template<class T>
class LinkedList {
private:
    Node<T>* firstNode;
public:
    LinkedList() {
        firstNode = NULL;
    }

    Node<T>* getFirstNode() {
        return firstNode;
    }

    /*
    Search for a value, of type T that is defined
    when the object is created.

    Return Values:
    -1 If value is not found
    0... Numbered location
    */
    int search(T value) {


        return -1;
    }

    /*
    	Insert elements in sorted order with the
    	first element being the smallest value.
    */
    void insert(T value) {


    }

    /*
    	Return number of elements in the linked list.
    */
    int size() {
        int count = 0;


        return count;
    }

    /*
    	Display each element on a single line,
    	separated by a space.
    */
    void display() {


        cout << "\n"; // leave at bottom of function
    }
};

/*
  Testing usage of the implemented
  Linked list.
 */
void linkedListTesting() {
    cout << "Linked List Usage Testing: \n";

}


int main() {
    cout << "Lab 11: Linked List Implementation\n\n";

    LinkedList<int> list_1;
    cout << "List should be empty, no elements should display:\n";
    list_1.display();

    list_1.insert(5);
    list_1.insert(4);
    list_1.insert(22);
    list_1.insert(1);
    list_1.insert(13);
    list_1.insert(9);
    list_1.insert(22);

    LinkedList<int> list_2;
    list_2.insert(1);
    list_2.insert(3);
    list_2.insert(6);
    list_2.insert(10);
    list_2.insert(2);
    list_2.insert(2);
    list_2.insert(2);
    list_2.insert(2);

    cout << "List-1 should display, 1 4 5 9 13 22 22 :\n";
    list_1.display();
    cout << "List-2 should display, 1 2 2 2 2 3 6 10 :\n";
    list_2.display();

    cout << "Search for 20 in list-1 should result in -1: ";
    cout << list_1.search(20) << "\n";

    cout << "Search for 2 in list-1 should result in -1: ";
    cout << list_1.search(2) << "\n";

    cout << "Search for 13 in list-1 should result in 4: ";
    cout << list_1.search(13) << "\n";

    cout << "Search for 20 in list-2 should result in -1: ";
    cout << list_2.search(20) << "\n";

    cout << "Search for 2 in list-2 should result in 1: ";
    cout << list_2.search(2) << "\n";

    cout << "Search for 10 in list-2 should result in 7: ";
    cout << list_2.search(10) << "\n\n";

    linkedListTesting();

    return 0;
}
