#include <iostream>
#include <thread>
#include <fork2>

long b1 = 0;
long b2 = 0;
long j  = 0;

fork2([&] {
  // first branch
  b1 = 1;
}, [&] {
  // second branch
  b2 = 2;
});
// join point
j = b1 + b2;

std::cout << "b1 = " << b1 << "; b2 = " << b2 << "; ";
std::cout << "j = " << j << ";" << std::endl;