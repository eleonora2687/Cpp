#include "Circle.h"

Circle::Circle()
{
   //ctor
}

Circle::~Circle()
{
   //dtor
}

Circle::Circle(const Circle& other)
{
   //copy ctor
}

Circle& Circle::operator=(const Circle& rhs)
{
   if (this == &rhs) return *this; // handle self assignment
   //assignment operator
   return *this;
}
