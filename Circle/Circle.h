#ifndef CIRCLE_H
#define CIRCLE_H
#define M_PI  3.14159265358979323846

class Circle
{
   public:
      /** Default constructor */
      Circle();
      /** Default destructor */
      virtual ~Circle();
      /** Copy constructor
       *  \param other Object to copy from
       */
      Circle(const Circle& other);
      /** Assignment operator
       *  \param other Object to assign from
       *  \return A reference to this
       */
      Circle& operator=(const Circle& other);

      void setRadius(float radius)
      {
         this->radius=radius;
      }

      float getRadius()
      {
         return this->radius;
      }

      float Perimeter()
      {
         return 2*M_PI*this->radius;
      }

      float Area()
      {
         return M_PI*this->radius*this->radius;
      }

   protected:

   private:
      float radius;
};

#endif // CIRCLE_H
