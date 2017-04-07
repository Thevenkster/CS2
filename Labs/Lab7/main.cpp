#include <iostream>
#include <cassert>

int a[] = {1, 2, 3, 4, 5};
int* first = a + 1;
int* limit = first + 3;

void print(int* first, int* limit)
{
  while (first != limit)
   {
    std::cout << *first;
    ++first;
  }
}

int* find(int* first, int* limit, int value)
{
  while (first != limit)
  {
    if (value == *first) return first;
    ++first;
  }
  return limit;
}

bool in(int* first, int* limit, int value)
{
  while (first != limit)
  {
    if (value == *first) return true;
    ++first;
  }
  return false;
}

int count(int* first, int* limit, int value)
{
  int count = 0;
  while (first != limit)
   {
    if (*first == value) ++count;
    ++first;
  }
  return count;
}

bool equal(int* first1, int* limit1, int* first2, int* limit2)
{
  while((first1 != limit1) && (first2 != limit2))
  {
  if (*first1 != *first2) return false;
  ++first1;
  ++first2;
  }
  return true;
}

int minimum(int a, int b)
{
  if (a > b) return a;
  return b;
}

int *minimum(int* first, int* limit)
{
  if (first == limit) return limit;
  int min = *first;
  int *minp;
  while (first != limit)
  {
   min = minimum(min, *first);
   minp = limit;
    ++first;
  }
  return minp;
}

int maximum(int a, int b)
{
  if (a < b) return a;
  return b;
}


int *maximum(int* first, int* limit)
{
  if (first == limit) return limit;
  int max = *limit;
  int *maxp;
  while (first <= limit)
  {
   max = maximum(max, *limit);
   maxp =  limit;
    --limit;
  }
  return maxp;
}


int compare(int* first1, int* limit1, int* first2, int* limit2)
{
  while (first1 != limit1 && first2 != limit2) {
  if (*first1 < *first2)
    return -1;
  if (*first2 < *first1)
    return 1;
 ++first1;
 ++first2;
}
if (first1 == limit1) {
  if (first2 != limit2)
    return -1; // [first1, last1) is a prefix of [first2, last2)
  else
    return 0;  // [first1, last1) and [first2, last2) are equivalent
}
else {
  return 1;    // [first2, last1) is a prefix  of [first1, last1)
  }
}

void copy(int* first1, int* limit1, int* first2, int* limit2)
{
  assert((limit1-first1)==(limit2-first2));
  while((first1 != limit1) && (first2 != limit2))
  {
    *first1 = *first2;
    ++first1;
    ++first2;
  }
}

void fill(int* first, int* limit, int value)
{
  while (first != limit)
  {
    *first = value;
    ++first;
  }
}

int main()
{
  int a[] = {1, 2 , 3, 5, 4};
  int b[] = {1, 2, 3, 3, 5};
  int* first1 = a;      // Points to the first object in a
  int* limit1 = a + 5;  // Points past the end of a
  int* first2 = b;      // Points to the first object in a
  int* limit2 = b + 5;
  print(first, limit); // Prints '1 2 3 4 5 '
  std::cout.setf(std::ios::boolalpha);
  std::cout << std::endl << find(first, limit, 3) << std::endl;
  std::cout << in(first, limit, 3) << std::endl;
  std::cout << count(first, limit, 3) << std::endl;
  std::cout << equal(first1, limit1, first2, limit2) << std:: endl;
  std::cout << minimum(first1, limit1) << std::endl;
  std::cout << &a[0] << std::endl;
  std::cout << maximum(first1, limit1) << std::endl;
  std::cout << &a[5] << std::endl;
  fill(first2, limit2, 3);
  print(first1, limit1);
  std::cout << std::endl;
  std::cout << compare(first1, limit1, first2, limit2);
  copy(first1, limit1, first2, limit2);
  std::cout << std::endl;
  print(first1, limit1);
  std::cout << std::endl;
  std::cout << compare(first1, limit1, first2, limit2) << std:: endl;
  // Alternatively, we can just write this:
  //print(a, a + 5);
}
