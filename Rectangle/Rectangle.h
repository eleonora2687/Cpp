#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
   public:
      Rectangle();
      virtual ~Rectangle();
      Rectangle(const Rectangle& other);
      Rectangle& operator=(const Rectangle& other);

      void setX(int x)
      {
         this->x=x;
      }
      void setY(int y)
      {
         this->y=y;
      }

      int getX()
      {
         return this->x;
      }

      int getY()
      {
         return this->y;
      }

      int Area()
      {
         return getX()*getY();
      }

       int Perimeter()
       {
          return 2*(getX()+getY());
       }
   protected:

   private:
      int x, y;
};

#endif // RECTANGLE_H
