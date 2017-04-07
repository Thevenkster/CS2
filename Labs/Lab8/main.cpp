#include <iostream>
#include <cassert>

int a[] = {1, 2, 3, 4, 5};
int* first = a + 1;
int* limit = first + 3;

template <typename Iter>
void print(Iter first, Iter limit)
{
  while (first != limit) {
    std::cout << *first << ' ';
    ++first;
  }
}

template <typename Iter>
Iter find(Iter* first, Iter* limit, Iter value)
{
  while (first != limit)
  {
    if (value == *first) return *first;
    ++first;
  }
  return *limit;
}

template <typename Iter>
bool in(Iter* first, Iter* limit, Iter value)
{
  while (first != limit)
  {
    if (value == *first) return true;
    ++first;
  }
  return false;
}

template <typename Iter>
int count(Iter* first, Iter* limit, Iter value)
{
  int count = 0;
  while (first != limit)
   {
    if (*first == value) ++count;
    ++first;
  }
  return count;
}

template <typename Iter>
bool equal(Iter* first1, Iter* limit1, Iter* first2, Iter* limit2)
{
  while((first1 != limit1) && (first2 != limit2))
  {
  if (*first1 != *first2) return false;
  ++first1;
  ++first2;
  }
  return true;
}

template <typename Iter>
Iter minimum(Iter a, Iter b)
{
  if (a > b) return a;
  return b;
}

template <typename Iter>
Iter *minimum(Iter* first, Iter* limit)
{
  if (first == limit) return limit;
  Iter min = *first;
  Iter *minp;
  while (first != limit)
  {
   min = minimum(min, *first);
   minp = limit;
    ++first;
  }
  return minp;
}

template <typename Iter>
Iter maximum(Iter a, Iter b)
{
  if (a < b) return a;
  return b;
}

template <typename Iter>
Iter *maximum(Iter* first, Iter* limit)
{
  if (first == limit) return limit;
  Iter max = *limit;
  Iter *maxp;
  while (first <= limit)
  {
   max = maximum(max, *limit);
   maxp =  limit;
    --limit;
  }
  return maxp;
}

template <typename Iter>
Iter compare(Iter* first1, Iter* limit1, Iter* first2, Iter* limit2)
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

template <typename Iter>
void copy(Iter* first1, Iter* limit1, Iter* first2, Iter* limit2)
{
  assert((limit1-first1)==(limit2-first2));
  while((first1 != limit1) && (first2 != limit2))
  {
    *first1 = *first2;
    ++first1;
    ++first2;
  }
}

template <typename Iter>
void fill(Iter* first, Iter* limit, Iter value)
{
  while (first != limit)
  {
    *first = value;
    ++first;
  }
}

template<typename Iter>
void reverse(Iter* first, Iter* limit)
{
  while (first < limit)
  {
    --limit;
    std::swap(*first, *limit);
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
  std::cout << std::endl;
  print(first1, limit1);
  std::cout << std::endl;
  std::cout << std::endl;
  reverse(first1, limit1);
  print(first1, limit1);
  std::cout << std::endl;
  std::cout << std::endl;
  fill(first2, limit2, 3);
  print(first2, limit2);
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
