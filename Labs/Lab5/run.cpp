// $NAME <$ID@uakron.edu>
// University of Akron

#include <iostream>


struct Regular_type
{
  Regular_type()
  {
    std::cout << "default ctor " << this << std::endl;
  }
  Regular_type(Regular_type const& x)
 {
   std::cout << "copy ctor " << this << std::endl;
 }

  Regular_type& operator=(Regular_type const& x)
 {
   std::cout << "copy assign " << this << std::endl;
 }

  ~Regular_type()
  {
    std::cout << "dtor " << this << std::endl;
  }

  void f()
  {
    std::cout << "member " << this << std::endl;
  }
};

struct Pair
{
  Regular_type first;
  Regular_type second;
};

void test_composite()
{
  Pair p1;
  Pair p2 = p1;
  p2 = p1;
}


void test_default_1()
{
  Regular_type a;
  Regular_type b;
}

void test_default_2()
{
  Regular_type a[3];
}

void test_member()
{
  Regular_type r;
  std::cout << "object: " << &r << '\n';
  r.f();
}

void test_copy_1()
{
  Regular_type a;
  Regular_type b = a;
  Regular_type c(a);
  Regular_type d { a };
}

void test_assign_1()
{
  Regular_type x;
  Regular_type a[3];
  for (int i = 0; i < 3; ++i)
    a[i] = x;
}

void test_temporary()
{
  Regular_type a = Regular_type();
  Regular_type b = Regular_type(a);
  b = Regular_type(a);
}

void input_1(Regular_type a, Regular_type const& b)
{
  std::cout << "input_1\n";
}

void test_input_1()
{
  Regular_type x, y;
  std::cout << "before input_1\n";
  input_1(x, y);
  std::cout << "after input_1\n";
}

Regular_type output_1()
{
  std::cout << "output_1\n";
  return Regular_type();
}


Regular_type output_2()
{
  std::cout << "output_2\n";
  static Regular_type r;
  return r;
}

void test_output_1()
{
  std::cout << "before output_1\n";
  Regular_type r1 = output_1();
  std::cout << "after output_1\n";

  std::cout << "before output_2\n";
  Regular_type r2 = output_2();
  std::cout << "after output_2\n";

  std::cout << "before output_2\n";
  r2 = output_2();
  std::cout << "after output_2\n";
}

std::ostream& operator << (std::ostream & , Regular_type );

std::istream& operator >> (std::istream & , Regular_type &);

int main()
{
  //test_default_1();
  //test_default_2();
  //test_composite();
  //test_member();
  //test_copy_1();
  //test_assign_1();
  //test_temporary();
  //test_input_1();
  test_output_1();
}
