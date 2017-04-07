//Karthik Venkat <kv39@zips.uakron.edu>

#include "machine.hpp"

#include <map>
#include <iostream>
#include <sstream>
#include <string>

// Returns the op code found in the first n characters of s. Throws an
// exception if the operation name is invalid.
static int get_op(String const& s)
{
  // A lookup table that maps from strings to opcodes.
  static std::map<String, int> ops
  {
    {"push", push_op},
    {"pop", pop_op},
    {"copy", copy_op},
    {"add", add_op},
    {"sub", sub_op},
    {"mul", mul_op},
    {"div", div_op},
    {"rem", rem_op},
    {"print", print_op},
    {"read", read_op},
    {"halt", halt_op},
  };

  auto iter = ops.find(s);
  if (iter == ops.end())
  {
    String msg = "no such opcode '" + s + "'";
    throw std::runtime_error(msg.data());
  }
  return iter->second;
}

int get_arg(String const& s)
{
  if (s.empty())
    return 0;
  else
    return std::stoi(s.data());
}

Machine::Machine(std::istream& is)
{
  // Parse instructions from input
  typedef std::basic_string<char> String;

  while (is)
  {
    String s;
    std::getline(is, s);
    if (!is)
      break;

    // Search for a ';', indicating a comment and strip that from the line.
    std::size_t k = s.find(';');
    if (k != String::npos)
      s = s.substr(0, k);

    // Skip empty lines.
    if (s.empty())
      continue;

    // Parse out the opcode and operand.
    std::stringstream ss(s.data());
    std::string opstr, argstr;
    ss >> opstr >> argstr;

    int op = get_op(opstr.data());
    int arg = get_arg(argstr.data());
    Instruction ins(op, arg);
    prog.push_back(ins);
  }
}


void Machine::run()
{
  // Start the pc at the first instruction.
  pc = 0;

  while (pc != prog.size())
  {

    // Get the next instruction.
    Instruction ins = fetch();

    // "Decode" and execute the instruction.
    switch (ins.op)
    {
      case push_op:
        push(ins.arg);
        break;
      case pop_op:
        pop();
        break;
      case copy_op:
        copy();
        break;
      case add_op:
        add();
        break;
      case sub_op:
        sub();
        break;
      case mul_op:
        mul();
        break;
      case div_op:
        div();
        break;
      case rem_op:
        rem();
        break;
      case print_op:
        print();
        break;
      case read_op:
        read();
        break;
      case halt_op:
        halt();
        break;
    }
  }
}

Instruction Machine::fetch() //fetch instruction
{
  return prog[pc++];
}

int Machine::top() const //top element
{
  return stack.top();
}

void Machine::push(int n) //push to top
{
  stack.push(n);
}

int Machine::pop() //pop from top
{
  int returnthis = stack.top();
  stack.pop();
  return returnthis;
}

void Machine::copy() //push a copy of the top operand on the stack

{
  stack.push(stack.top());
}

void Machine::add() //Add top two elements
{
  int result = pop();
  result = result + pop();
  stack.push(result);
}

void Machine::sub() //Subtract top two elements
{
  int result = stack.top();
  stack.pop();
  result = result - stack.top();
  stack.pop();
  stack.push(result);
}

void Machine::mul() //multiply top two elements
{
  int result = stack.top();
  stack.pop();
  result = result * stack.top();
  stack.pop();
  stack.push(result);
}

void Machine::div() //divide top two elements
{
  int result = stack.top();
  stack.pop();
  assert(result != 0);
  result = stack.top() / result;
  stack.pop();
  stack.push(result);
}

void Machine::rem() //return mod of top 2 elements
{
  int result = stack.top();
  stack.pop();
  assert(result != 0);
  result = stack.top() % result;
  stack.pop();
  stack.push(result);
}

void Machine::print() //print top element
{
  int output = stack.top();
  stack.pop();
  std::cout << output << std::endl;
}

void Machine::read() //read input
{
  int input;
  std::cin >> input;
  stack.push(input);
}

void Machine::halt() //halt program
{
  pc = prog.size();
}
