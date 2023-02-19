//1.define complex class with appropriate members.also define function to add two complex numbers
#include<iostream>
using namespace std;
class Complex
{
    private :
    int a,b;
    public:
    Complex(int x)
    {
       a=x;
       b=0;
    }
    Complex()
    {
      a=0;
      b=0;
    }
    Complex(int x ,int y) {
      //cout<<"hello world"<<endl;
          a=x;
          b=y;
    }
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<endl<<"real="<<a<<" img="<<b;
    }
    Complex add(Complex C) //here complex is a data type here add is member name
  //returnType FunctionName(ClassName object);   call by object  
    {
        Complex temp(0,0);//it work as a object it should take argument.
        temp.a=a+C.a;
       temp.b=b+C.b;
        return temp;
      //classname FunctionName();  
    }
};
int main()
{
   Complex c1(3,5),c2(6,8),c3(4),c4;
   c1.showData();// 3,5
   c2.showData();// 6,8
   c3.showData();// 4,0
  //  c1.setData(3,4);
  //  c2.setData(5,4);
   c3=c1.add(c2);//c3=c1+c2
   c3.showData();////// 9 13
   c4.showData();///output is 0 ,0
    cout<<endl;
}    
 or
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    void setData(int x, int y)
    {
        real = x;
        img = y;
    }
    void showData()
    {
        cout << "Real = " << real << " img = " << img << endl;
    }
    Complex add(Complex C)
    {
        Complex temp;
        temp.real = real + C.real;
        temp.img = img + C.img;
        return temp;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c2.setData(3, 4);
    c1.showData();
    c2.showData();
    c3 = c1.add(c2);
    c3.showData();
    return 0;
}

//2. Define a class Time to represent a time with instance variables h,m and s to store
//hour, minute and second. Also define following member functions
//a. void setTime(int,int,int)
//b. void showTime()
//c. void normalize()
//d. Time add(Time)
#include<iostream>
using namespace std;
class Time
{
    private:
    int HR, MIN,SEC;
    public:
    void setTime(int x,int y, int z)
    {
        HR=x;
        MIN=y;
        SEC=z;
    }
    void showTime()
    {
        cout<<endl<<HR<<":"<<MIN<<":"<<SEC;
    }
    void normalize()
    {
        MIN=MIN+SEC/60;
        SEC=SEC%60;
        HR=HR+MIN/60;
        MIN=MIN%60;
    }
    Time  add(Time t)
    {
        Time temp;
        temp.SEC= SEC + t.SEC;
        temp.MIN= MIN + t.MIN;
        temp.HR= HR + t.HR;
        temp.normalize();
          return (temp);
    }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(5,50,30);
    t2.setTime(7,20,34);
    //operator overloading
    t3=t1.add(t2);
    t1.showTime();
    t2.showTime();
    t3.showTime();
}

//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;
class cube
{
    public:
       double side;
     double volume()
     {
        return( side*side*side);
     }
     cube(double side1)
     {
        cout<<"\nA constructor is called"<<endl;   ////constructor
        side=side1;
     }
     cube()
     {
          cout<<"\nA default constructor is called"<<endl;
     }
     ~cube()
     {
        cout<<"\nDestructing  "<<side<<endl;
     }
};
int main()
{
     cube c1(2.34);
     cube c2;
     cout <<"\nThe  side of the cube is :" << c1.side <<endl;
     cout<<"\nThe volume of the first cube is :"<<c1.volume()<<endl;
     cout<<"\nenter the length of second cube : ";
     cin>>c2.side;
     cout<<"\nThe volume of second cube is :"<<c2.volume()<<endl;
     return 0;
     
}

//4. Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;
class counter
{
private:
int count;
public :
   counter()           //constructor
   {
    count=0;
   }
   void int_count ()
   {
    count++;
   }
   int get_count()
   {
    return count;
   }
};
int main()
{
    counter c1;
    cout<<"\nBefore calling counter function, Count= ";
    cout<<c1.get_count();

    c1.int_count() ;
     c1.int_count() ;
    cout<<"\nAfter calling counter function, Count= ";
    cout<<c1.get_count();
    cout<<"\n";
    return 0;
}

//5.Define a class date  and write a program to display date and intialise date object
//using constructor
#include<iostream>
using namespace std;
class date
{
    private :
    int dd,mm,yy;
    public:
    date()
    {
        dd=31;
        mm=12;
        yy=2016;
        cout<<"\nDate object has been created..........\n";
    }
    void display()
    {
        cout<<"\nthe entered date is ::";
        cout<<dd<<"-"<<mm<<"-"<<yy<<"\n";
    }
};
int main()
{
    date date1;
    date1.display();
    return 0;
}

//6.define a class student and write a program to enter srudent  details using constructor  and define  member function
//to display details of students
#include<iostream>
using namespace std;
class student
{
    private:
    int  marks;
    char grade;
    public :
    student (int m, char g)
    {
        marks=m;
        grade=g;
    }
    void  show()
    {
        cout<<"\nMarks="<<marks<<endl;
        cout<<"\nGrade= "<<grade<<endl;
    }
};
int main()
{
    student s1(730,'A'), s2(621,'B');
    cout<<"Record of student 1::-------------------"<<endl;
    s1.show();
    cout<<"Record of student 2::-------------------"<<endl;
    s2.show();
    return 0;
}


//7.define a class  Box  aND  write a program to enter length, breadth, and height and intialise object using constructor also define  membewr function
//to calculate volume of the box
#include<iostream>
using namespace std;
class box
{
    private: 
    int length,breadth,height;
    public:
     box(int l,int b,int h)
     {
        length=l;
        breadth=b;
        height=h;
     }
     void show()
     {
        cout<<"\nlength="<<length<<endl;
        cout<<"\nbreadth= "<<breadth<<endl;
        cout<<"\nheight= "<<height<<endl;
     }
     int getvolume()
     {
        return length*breadth*height;
     } 
};
int main()
{
    box v1(2,3,6);
    v1.show();
    cout<<"volume  is "<<v1.getvolume();
    return 0;
}

//8. Define a class Bank and define member functions to read principal , rate of interest
///and year. Another member functions to calculate simple interest and display it.
//Initialise all details using constructor.
#include<iostream>
using namespace std;
class bank
{
     private: 
    int principal,year;
    float roi;
    public:
     bank(int p,int y,float r )
     {
        principal=p;
        year=y;
        roi=r;
     }
     void show()
     {
        cout<<"\nprincipal="<<principal<<endl;
        cout<<"\nyear= "<<year<<endl;
        cout<<"\nroi= "<<roi<<endl;
     }
     int getSimpleInterest()
     {
        return (principal*year*roi)/100;
     } 
};
int main()
{
    bank b(2000,3,2.5);
    b.show();
    cout<<"\nsimple interest is "<<b.getSimpleInterest();
}

//9 Define a class Bill and define its member function get() to take detail of customer ,
//calculateBill() function to calculate electricity bill using below tariff :
//Upto 100 unit RS. 1.20 per unit
//From 100 to 200 unit RS. 2 per unit
//Above 200 units RS. 3 per unit.
#include<iostream>
using namespace std;
class Bill
{
    private:
    int cust_id,consume_unit;
    char cust_name[20];
    public:
    void get()
    {
        cout<<"\nEnter the customer id : ";
        cin>>cust_id;
        cout<<"\nEnter customer  name :";
        fflush(stdin);
        gets(cust_name);
        cout<<"\nenter total consume unit :";
        cin>>consume_unit;
    }
    int calculateBill()
    {
        int totalRs=0;
        if(consume_unit<=100)
        {
            totalRs=consume_unit*1.20;
        }
        else if(consume_unit<=200)
        {
            totalRs=(100*1.20)+(consume_unit -100)*2.0;
        }
        else if(consume_unit>200)
        {
            totalRs=(100*1.20)+(100*2.0)+(consume_unit-200)*3.0;
        }
        return totalRs;
    }
};
int main()
{
    Bill b;
    b.get();
    cout<<"\ntotal bill is --->"<<b.calculateBill();
    return 0;
}

//10.Define a class StaticCount and create a static variable. Increment this variable in a
//function and call this 3 times and display the result.
#include<iostream>
using namespace std;
class StaticCount
{
    private:
    static int count;
     public:
     static int  fun()

     {
        count++;
     }
      static int getCount()
     {
        return count;
     }
};
int StaticCount::count=0;
int main()
{
    StaticCount::fun();
    StaticCount::fun();
    StaticCount::fun();
    StaticCount::fun();
    cout<<"calling times :"<<StaticCount::getCount();
}
