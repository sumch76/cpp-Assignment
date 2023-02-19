/*1.Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==*/
#include<iostream>
using namespace std;
class Complex
{
    private:
     int real,img;
     public:
     void setData(int x, int y)
     {
        real=x;
        img=y;
     }
     void showData()
     {
        cout<< "Real = " << real << " img = " << img << endl;
     }
     Complex operator+(Complex C)
     {
        Complex temp;
        temp.real=real+C.real;
        temp.img=img+C.img;
        return temp;
     }
     Complex operator-(Complex C)                               //if it is friend functiomn we pass two arguments
     {                                                          //Complex operator-(Complex c1, Complex c2)
        Complex temp;                                           //{
        temp.real=real-C.real;                                  //Complex temp;
        temp.img=img-C.img;                                     //temp.real=c1.real-c2.real;
        return temp;                                            //temp.img=c1.img-c2.img;
     }                                                          //return temp;}
     Complex operator*(Complex C)
     {
        Complex temp;
        temp.real=real*C.real;
        temp.img=img*C.img;
        return temp;
     }
     bool operator==(Complex C)
     {
        if (real==C.real && img==C.img)
        return true;
        return false;
     }
};
int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    c1.setData(3,5);
    c2.setData(4,6);
    c3=c1.operator+(c2);
    c3.showData();
    c4=c1.operator-(c2);
    c4.showData();
    c5=c1.operator*(c2);
    c5.showData();
    bool result =c1==c2;
    result?cout<<"Equal":cout<<"Not Equal ";
    return 0;
}

//2 Write a C++ program to overload unary operators that is increment and decrement.
#include<iostream>
using namespace std;
class  Complex
{
    private:
    int real,img;
    public:
    void setData(int x,int y)
    {
        real=x;
        img=y;
    }
    void showData()
    {
        cout<<real<<"+"<<img<<"i"<< endl;
    }
    Complex operator++()    //pre increment
    {
        Complex temp;
        temp.real=++real;
        temp.img=++img;
        return temp;
    }
    Complex operator++(int)///post increment
    {
        Complex temp;
        temp.real=real++;
        temp.img=img++;
        return temp;
    }
};
int main()
{
    Complex c1,c2,c3,c4;
    c1.setData(5,6);
    c2.setData(4,3);
    c1.showData();
    c2.showData();
    c3=++c2;
    c4=c1++;
    c3.showData();
    c4.showData();
    c4=c1;
    c4.showData();
    return 0;
}

/*3. Write a C++ program to add two complex numbers using operator overloaded by a
friend function.*/
#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,img;
    public:
    void setData(int x,int y)
    {
        real=x;
        img=y;
    }
    void showData()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    friend Complex operator+(Complex,Complex);
    
};
 Complex operator+(Complex x, Complex y)
 {
    Complex temp;
    temp.real=x.real+y.real;
    temp.img=x.img+y.img;
    return temp;
 }
 int main()
 {
    Complex c1,c2,c3;
    c1.setData(5,6);
    c2.setData(6,7);
    c1.showData();
    c2.showData();
    c3=operator+(c1,c2);   //c3=c1+c2;
    c3.showData();
    return 0;
 }

/*4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.*/
#include <iostream>
using namespace std;
class Time
{
private:
    int hours, minutes, second;

public:
    friend void operator>>(istream &cin, Time &t);
    friend void operator<<(ostream &cout, Time t);
    friend bool operator==(Time t1, Time t2);
};
bool operator==(Time t1, Time t2)
{
    if (t1.hours == t2.hours && t1.minutes == t2.minutes && t1.second == t2.second)
        return true;
    return false;
}
void operator<<(ostream &cout, Time t)
{
    cout << "Hours: " << t.hours << endl;
    cout << "Minutes: " << t.minutes << endl;
    cout << "Second: " << t.second << endl;
}
void operator>>(istream &cin, Time &t)
{
    cout << "Enter Hours: ";
    cin >> t.hours;
    cout << "Enter Minutes: ";
    cin >> t.minutes;
    cout << "Enter Second: ";
    cin >> t.second;
}
int main()
{
    Time t1, t2, t3;
    cout << "Enter First Time: \n";
    cin >> t1; // operator>>(cin,t1);
    cout << "First Time: \n";
    cout << t1; // operator << (cout, t1);
    cout << "Enter Second Time: \n";
    cin >> t2; //operator >> (cin,t2);
    cout << t2;//operator<< (cout,t2);
    bool result = (t1 == t2);
    result ? cout << "Time are same" : cout << "Time are not same";
    return 0;
}

/*5.Consider the following class members ;
class numbers
{
    int x,y,z;
    public:
    //methods
};
overload the operator unary minus(-) to negate the numbers. */
#include<iostream>
using namespace std;
class  Number
{
    private:
    int x,y,z;
    public:
    void set_data(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void show_data()
    {
        cout<<"x ="<<x<<" y = "<<y<<" z = "<<z<<endl;
    }
    Number operator-()
    {
        Number temp;
        temp.x= -x;
        temp.y= -y;
        temp.z= -z;
        return temp;
    }
     Number operator-(Number N )  //in memeber we pass only one parameter
    {
        Number temp;
        temp.x=x-N.x;
        temp.y=y-N.y;
        temp.z=z-N.z;
        return temp;
    }
};
int main()
{
    Number n1,n2,n3;
    n1.set_data(5,4,2);
    n2.set_data(4,1,1);
    n2=n1.operator-();                              //n2=-n1
    n1.show_data();
    n2.show_data();
    n3=n1-n2;
    n3.show_data();

   
}

/*6.Create a class Cstring to represent a string.
a) overload the +operator to concatenate two strings.
b) to compare two strings. */
#include<iostream>
#include<cstring>
using namespace std;
class Cstring
{
    private:
    char str[100];
    public:
    void get_string()
{
    cout<<"\nEnter string :  ";
    cin>>str;
}
void show()
{ 
    cout<<str<<endl;
}
 Cstring operator+(Cstring x)
 {
    Cstring s;
    strcpy(s.str,str);
    strcat(s.str,x.str);
    return s;
 }
 int operator==(Cstring &t);
};
int Cstring::operator==(Cstring &t)
{
    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=0;str[j]!='\0';j++)
        {
            if(str[i]==t.str[j])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
}
int main()
{
    Cstring str1,str2,str3;
    int result  =0;
    str1.get_string();
    str2.get_string();
    cout<<"\n-------------------------------";
    cout<<"\n\n First string is                 :";
    str1.show();
    cout<<"\n-------------------------------";
    cout<<"\n\n Second string is                :";
    str2.show();
    str3=str1+str2;
    cout<<"\n\n Concatenate string is           :";
    str3.show();
    result=str1==str2;
    if(result==0)
    {
        cout<<"\nBoth strings are equal";
    }
    else
    cout<<"\n strings are not equal";
    }

/*7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>*/
#include<iostream>
#include<stdio.h>
using namespace std;
class fraction
{
    private :
    long num,deno;
    public:
    fraction(long int n=0,long int d=0)
    {
        num=n;
        deno=d;
    }
    friend void operator>>(istream &in,fraction &f)
    {
        cout<<"\n Numerator      :";
        in>>f.num;
        cout<<"\n denominator    :";
        in>>f.deno;
    }
     friend void operator<<(ostream &out,fraction &f)
    {
      out<<f.num<<"/"<<f.deno;
    }
    fraction operator++()
    {
        ++num;
        ++deno;
        return(*this);
    }
    fraction operator++(int s)
    {
        fraction tmp=*this;
        num++;
        deno++;
        return tmp;
    }
};
int main()
{
    fraction f1,f2;
    cout<<"\n f1     :";
    cout<<f1;
    cout<<"\n f2     :";
    cout<<f2;
    cout<<"\nEnter first fraction value\n     :";
    cin>>f1;
    cout<<"\n f1++   :";
    f1++;
    cout<<f1;
    cout<<"\n ++f1   :";
    ++f1;
    cout<<f1;
    cout<<"\nEnter second fraction value\n     :";
    cin>>f2;
    f2=++f1;
    cout<<"\nf2=++f1  :";
    cout<<"\n f1      :";
     cout<<f1;
     cout<<"\n f2     :";
     cout<<f2;
    f2=f1++;
     cout<<"\nf2=f1++ :";
    cout<<"\n f1      :";
     cout<<f1;
     cout<<"\n f2     :";
    cout<<f2;
}

/*8. Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.*/
#include<iostream>
using namespace std;
class matrix
{
    int a[3][3];
    public:
    void accept();
    void show();
    void operator-();
};
void matrix::accept()
{
    cout<<"\n Enter matrix  element(3*3) :\n\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<" ";
            cin>>a[i][j];
        }
    }
}
    void matrix::show()
    {
                cout<<"\n  matrix  element(3*3) is :\n\n";
    for(int i=0;i<3;i++)
    {
        for( int j=0;j<3;j++)
        {
            cout<<" ";
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
}
void matrix::operator-()
{
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]= -a[i][j];
        }
    }
}
int main()
{
    matrix m;
    m.accept();
    m.show();
    m.operator-();           //-m
    m.show();
}

 /*9. Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).*/
#include<iostream>
#include<string.h>
using namespace std;
class myString
{
    private:
    char str[100];
    public:
    void get_string()
{
    cout<<"\nEnter string :  ";
    cin>>str;
}
void show()
{ 
    cout<<str<<endl;
}
 void operator!();
};
void myString::operator!()
{
    for(int i=0;str[i]!='\0';i++)
    {
            if(str[i]>=65 && str[i]<=96)
            {
                str[i]=str[i]+32;
            }
            else if(str[i]>=97 && str[i]<=122){
                str[i]=str[i]-32;
            }
        }
        cout<<"\n\n Reverse case string is :"<<str;
    }
    int main()
    {
        myString s1;
        s1.get_string();
        cout<<"\n\n string is   :";
        s1.show();
        s1.operator!();
        return 0;
    }

/*10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).*/
#include<iostream>
using namespace std;
class matrix
{
    int a[3][3];
    public:
     void get_matrix()
     {
        cout<<"\nenter matrix element 3*3  : \n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<" ";
                cin>>a[i][j];
            }
        }
             }

             void show_matrix()
             {
                for(int i=0;i<3;i++)
                {
                    cout<<" ";
                    for(int j=0;j<3;j++)
                    {
                        cout<<a[i][j]<<"\t";
                    }
                    cout<<"\n";
                }
             }
             void operator+(matrix x)
             {
                int mat[3][3];
                for(int i=0;i<3;i++)
                {
                    for(int j=0;j<3;j++)
                    {
                        mat[i][j]=a[i][j]+x.a[i][j];
                    }
                }
                           cout<<"\n Addition of matrix is  :  \n\n";
                for (int i=0;i<3;i++)
                {
                    cout<<" ";
                    for(int j=0;j<3;j++)
                    {
                        cout<<mat[i][j]<<"\t";
                    }
                    cout<<"\n";
                }
              }
             
};
int main()
{
matrix m1,m2,m3;
m1.get_matrix();
m2.get_matrix();
cout<<"\n first matrix is  :\n";
m1.show_matrix();
cout<<"\n Second matrix is :\n";
m2.show_matrix();
m1.operator+(m2);
}


