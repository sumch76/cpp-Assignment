//1.Define a class Complex to represent a complex number. Declare instance member
//variables to store real and imaginary part of a complex number, also define instance
//member functions to set values of complex number and print values of complex number
#include<iostream>
#include<string.h>
using namespace std;
class Complex
{
    private :
    int real;
    int img;
    public :
    void set(int r , int i)
    {
        real=r;
        img=i;
    }
    void print()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main()
{
    Complex c1,c2;
    c1.set(3,2);
    c2.set(5,3);
    c1.print();
    c2.print();
    return 0;
}
//2.Define a class  time to represent Time(3hr 45 min 20 sec). declare appropriate number
//of instance member variables and also define instance member functions to
//set values for time and display values of time. 
#include<iostream>
using namespace std;
class time
{
    private :
    int hour;
    int min;
    int sec;
    public :
    void set(int h , int m,int s)
    {
        hour=h;
        min=m;
        sec=s;
    }
    void print()
    {
        cout<<hour<<"hour "<<min<<"min "<<sec<<"sec "<<endl;
    }
};
int main()
{
    time c1;
    c1.set(3,45,20);
    c1.print();
    return 0;
}
//3.Define a class factorial and 
//define an  instance member function to find the factorial of a number using class
#include <iostream>
using namespace std;
class factorial
{
    private:
    int n;
    int fact;
    public:
    void setN(int x)
    {
        n=x;
    }
    int getN()
    {
        return n;
    }
    int getFactorial()
    {
        return fact;
    }
    void calculateFactorial()
    {
        int f=1,i;
        // if(n<=0)
        // {
        //     fact=1;
        //     return ;
        // }

    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    fact=f;
}
};
int main()
{
    factorial f;
    f.setN(5);
    f.calculateFactorial();
    cout<<"factorial of "<<f.getN()<<" is "<<f.getFactorial();
}

//5. Define a class Reverse and define an instance member function to find reverse of a number using class
#include<iostream>
using namespace std;
class reverse
{
    private:
    int actualNumber;
    int reverseNumber;
    public :
    void setActualNumber(int n)
    {
        actualNumber=n;
    }
    int getActualNumber()
    {
        return actualNumber;
    }
    int getReverseNumber()
    {
        return reverseNumber;
    }
    void calculateReverseNumber()
    {
        int i,actualNumber,r=0,rem;
        while(actualNumber!=0)
        {
            rem=actualNumber%10;
            r=r*10+rem;
           actualNumber=actualNumber/10;
        }
        
        reverseNumber=r;
    }
       };
    int main()
    {
   reverse r;
   r.setActualNumber(657);
   r.calculateReverseNumber();
  cout<<r.getActualNumber()<<endl<<r.getReverseNumber();
return 0;
    }


//4.Define a class LargestNumber and define an instance member function to find the
//Largest of three Numbers using the class.
#include <iostream>
using namespace std;
class largestNumber
{
    private:
    int a;
    int b;
    int c;
    public:
    void setN1(int x)
    {
        a=x;
    }
    void setN2(int y)
    {
        b=y;
    }
    void setN3(int z)
    {
        c=z;
    }
    int getN1()
    {
        return a;
    }
    int getN2()
    {
        return b;
    }
    int getN3()
    {
        return c;
    }
    int getLargest()
    {
        int f;
       f= a>b?(a>c?a:c):(b>c?b:c);
       return f;
    }
};
int main()
{
   largestNumber f;
   f.setN1(745);
   f.setN2(1289);
   f.setN3(23);
 cout<<"largest no is "<< f.getLargest();
} 

or

#include <iostream>
using namespace std;
class largestNumber
{
    private:
    int a;
    int b;
    int c;
    int largest;
    public:
    void setN1(int x)
    {
        a=x;
    }
    void setN2(int y)
    {
        b=y;
    }
    void setN3(int z)
    {
        c=z;
    }
    int getN1()
    {
        return a;
    }
    int getN2()
    {
        return b;
    }
    int getN3()
    {
        return c;
    }
    int getLargest()
    {
        return largest;
    }
    void calculateLargest()
    {
        int l;
       l =a>b?(a>c?a:c):(b>c?b:c);
        largest=l;
    }
};
int main()
{
   largestNumber f;
   f.setN1(56);
   f.setN2(777);
   f.setN3(1);
   f.calculateLargest();
    cout<<"largest no is "<<f.getLargest();
}

//8. Define a class Rectangle and define an instance member function to find the area of
//the rectangle.
#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    void setLength(int l)
    {
        length=l;
    }
    void setBreadth(int b)
    {
        breadth=b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getArea()
    {
        return length*breadth;
    }
};
int main()
{
 rectangle a;
 a.setLength(7);
 a.setBreadth(15);
 cout<<a.getArea();
}
  OR
  #include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    int area;
    public:
    void setLength(int l)
    {
        length=l;
    }
    void setBreadth(int b)
    {

        breadth=b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getarea()
    {
        return area;
    }
    void calculateArea()
    {
      int a;
      a=length*breadth;
      area=a;
    }
};
int main()
{
 rectangle a;
 a.setLength(9);
 a.setBreadth(21);
 a.calculateArea();
 cout<<a.getarea();
}


//9. Define a class Circle and define an instance member function to find the area of the circle.
#include<iostream>
using namespace std;
class circle
{
    private :
    int radius;
    float area;

    public:
     void setRadius(int r)
     {
        radius=r;
     }
     int getRadius()
     {
        return radius;
     }
     float getArea()
     {
         return area;
     }
      void calculateArea()
      {
        
        area=3.14*radius*radius;
      }
};
int main()
{
    circle a;
    a.setRadius(9);
    a.calculateArea();
    cout<<"area of circle with radius "<< a.getRadius() <<" is " <<a.getArea();
}


//10. Define a class Area and define instance member functions to find the area of the
//different shapes like square, rectangle , circle etc.
#include<iostream>
using namespace std;
class Area
{
    private:
    int length;
    int breadth;
    int radius;
    int side;
    public :
    void setLength(int l)
    {
        length=l;
    }
    void setBreadth(int b)
    {
        breadth=b;
    }
    void setRadius(int r)
    {
        radius=r;
    }
    void setSide(int s)
    {
        side=s;
    }

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getRadius()
    {
        return radius;
    }
    int getSide()
    {
        return side;
    }
    int AreaRectangle()
    {
        return length*breadth;
    }
    float AreaCircle()
    {
        return 3.14*radius*radius;
    }
    int AreaSquare()
    {
       return side*side;
    }
};
int main()
{
Area o;
o.setLength(7);
o.setBreadth(8);
o.setRadius(6);
o.setSide(9);
cout<<"Area of rectangle with length "<<o.getLength()<<" and breadth "<<o.getBreadth()<<" is "<<o.AreaRectangle()<<endl;
cout<<"Area of circle with radius "<<o.getRadius()<<" is "<<o.AreaCircle()<<endl;
cout<<"Area of square with side "<<o.getSide()<<" is "<<o.AreaSquare()<<endl;
}

