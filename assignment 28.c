/*1.Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator*/
#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    complex(int x,int i)
{
    real=x;
    img=i;
}
   complex()
   {

   }
   friend ostream & operator <<(ostream &os,complex &c)
   {
    os<<"REAL ="<<c.real<<"IMG ="<<c.img<<endl;
    return os;
   }
//    void set_data(int real,int img)
//    {
//     this->real=real=real;
//     this
//    }

};
int main()
{
    complex c1(2,3);
    complex c2(4,6);
    cout<<c1<<c2;  //we dont need object to call object
}

/*2. Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables.*/
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex(int x, int y)
    {
        real = x;
        img = y;
    }
    void set_data(int real, int img)
    {
        this->real=real;///ye wo manajayega jo apke object ke andr hain
        this->img=img;
    }
    Complex() {}
    friend ostream &operator<<(ostream &output, Complex c);
    friend istream &operator>>(istream &input, Complex c);
};
ostream &operator<<(ostream &output, Complex c)
{
    output << "Real = " << c.real << " Imag = " << c.img << endl;
    return output;
}
 istream &operator>>(istream &input, Complex c)
 {
     input >> c.real >> c.img;
     return input; 
 }
int main()
{
    Complex c1(2, 3);
    Complex c2;
    c2.set_data(3,8);
    cout << c1 << c2;
    return 0;
}

/*3. Overload subscript operator [] that will be useful when we want to check for an index
out of bound.*/
#include <iostream>
using namespace std;
class Array
{
private:
    int arr[100];
    const int size = 100;
public:
    void setValue(int value, int index)
    {
        if (index >= size)
        {
            cout << "Array Index is Out of Bound Exception..!" << endl;
            exit(0);
        }
        arr[index] = value;
    }
    void showValue(int index)
    {
        if (index >= size)
        {
            cout << "Array Index is out of bound exception...!" << endl;
            exit(0);
        }
        cout << arr[index] << endl;
    }
    int operator[](int index)
    {
        if (index >= size)
        {
            cout << "Array index is out of bound exception...!" << endl;
            exit(0);
        }
        return arr[index];
    }
};
int main()
{
    Array b;
    b.setValue(35, 55);
    b.setValue(343, 3);
   // b.setValue(3,343);
    b.showValue(55);
    b.showValue(3);
    //b.showValue(343);   //out of bound
    cout << b[55] << endl;
    return 0;
}

/*6. Create a complex class and overload assignment operator for that class.*/
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex() {}
    Complex(int x, int y)
    {
        real = x;
        img = y;
    }
    void display() 
     { 
        cout << "Real = " << real << " Imag = " << img << endl;
         }
    Complex operator=(Complex c)
    {
        // if we crete dma memory then first free this memory
        // but first check both the object are not equal
        // third point is c1=c2=c3
        // here we don't need to check this all condition because we don't cretae dma memory
        this->real = c.real;
        this->img = c.img;
        return *this;
    }
};
int main()
{
    Complex c1(5, 4), c2(5, 3);
    c1.operator=(c2);//c1=c2
    c1.display();
    c2.display();
    return 0;
}

//7.Create an Integer class and overload logical not operator for that class.
#include <iostream>
using namespace std;
class Integer
{
private:
    int value;
public:
    Integer(int i) : value(i)//intializer list value(instance variable)(i local var)
     {}
    int operator!()
    {
        return -value; // return !value;
    }
};
int main()
{
    Integer x(5); // x = 5(PC constructor called )
    cout << !x << endl;
    return 0;
}

/*8. Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class.*/
#include<iostream>
using namespace std;
class coord3d
{
    private:
    double x,y,z;
    public:
    coord3d()
    {
        x=y=z=0;
    }
    coord3d(double x,double y,double z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void display()
    {
        cout<<"x= "<<x<<endl;
        cout<<"y= "<<y<<endl;
        cout<<"z= "<<z<<endl;
    }
    coord3d operator,(coord3d obj)
    {
        coord3d temp;
        temp.x=obj.x;
        temp.y=obj.y;
        temp.z=obj.z;
        return temp;
    }
};
int main()
{
    coord3d c1(1,3,4);
    coord3d c2(2,4,5);
    coord3d c3;
    c3=(c1,c2);
    c3.display();
    cout<<endl;
    coord3d c4(10,20,15);
    c3=(c2,c1,c4);
    c3.display();
}

//9..Create an Integer class that contains int x as an instance variable and overload
//casting int() operator that will type cast your Integer class object to int data type.
#include<iostream>
#include <iostream>
using namespace std;

class Integer {
private:
    int x;

public:
    Integer(int i) :x(i)
    
     {
        //this ->x=i;
     }

    operator int() const {
        return x;
    }
};

int main() {
    Integer obj(42);
    int value = obj; // type cast the Integer object to int
    cout << "Integer object value: " << obj << endl;
    cout << "Type casted value: " << value << endl;
    return 0;
}

//10. Create a Distance class having 2 instance variable feet and inches. Also create
//default constructor and parameterized constructor takes 2 variables . Now overload ()
//function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
//inches = a+b + 15.
#include<iostream>
using namespace std;
class Distance
{
    private:
    int inches,feet;
    public:

    Distance()
    {
         cout<<"default called"<<endl;
       // cout<<"feet = "<<feet<<"inches = "<<inches<<endl;
    }
   
   Distance(int f,int i)
   {
    cout<<"paramiterized called"<<endl;
    feet=f;
    inches=i;
   }
   Distance operator()(int a ,int b ,int c)
   {
    Distance d;
    d.feet=a+c+5;
    d.inches=a+b+15;
    return d;
   }
   void display()
   {
    cout<<" Feet = "<<feet<<" inches = "<<inches<<endl;
   }
};
int main()
{
    Distance d1(5,10);
    Distance d2;
    d1.display();
    Distance d3;
    d2=d1(10,20,30);
    d1.display();
    d2.display();
    d3=d2(12,10,12);
    d3.display();

    return 0;
}

/*11Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function.*/
#include<iostream>
using namespace std;
class Marks
{
    private:
    int marks;
    public:
    Marks()
    {}
    Marks(int x)
    {
        marks=x;
    }
    void printMarks()
    {
        cout<<"marks = "<<marks<<endl;
    }
    Marks *operator->()
    {
        return this;
    }
};
int main()
{
    Marks m1(234);
    m1->printMarks();
}
