
/*
  https://fw-geekycoder.blogspot.com/2010/12/creating-static-and-shared-libraries.html
  Static libraty
  g++ -Wall -c Hello.cpp
  ar -cvq libhello.a Hello.o
  g++ Main.cpp -o Main libhello.a

  Shared Library
  g++ -Wall -fPIC -c Hello.cpp
  g++ -shared Hello.o -o ./libhello.so
  g++ Main.cpp -o Main ./libhello.so

  Call the function
  ./Main
*/
#include "Hello.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
  // Hello hello;
  // hello.sayHello();
  string str = hello();
  cout << str << endl;

  return 0;
}