#include "Rectangle.h"

Rectangle::Rectangle()
{
   //ctor
}

Rectangle::~Rectangle()
{
   //dtor
}

Rectangle::Rectangle(const Rectangle& other)
{
   //copy ctor
}

Rectangle& Rectangle::operator=(const Rectangle& rhs)
{
   if (this == &rhs) return *this; // handle self assignment
   //assignment operator
   return *this;
}
