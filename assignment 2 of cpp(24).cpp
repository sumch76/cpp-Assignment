//1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
int prime(int n);
 int main()
 {
    int n;
    cout<<"Enter a  number";
    cin>>n;
    prime(n)?cout<<"no is prime":cout<<"no is not prime";

 }
 int prime(int n)
 {
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
 }

//2. Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
 int highestDigit(int x)
 {
    int max=-1;
    while(x)
    {
    if(max<x%10)
    max=x%10;
    x=x/10;
    }
    return max;
 }
 int main()
 {
    int x;
 cout<<"enter a number"<<endl;
 cin>>x;
 cout<<"the highest no in digit is  " <<highestDigit(x);
 return 0;
 }
//3. Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int pow(int x,int y);
int pow(int x,int y)
{
    int a=1;
    while(y--)
    {
        a=a*x;
    }
    return a;
}
int main()
{
    int x,y;
    cout<<"enter 2 numbers:"<<endl;
    cin>>x>>y;
    cout <<x << "power" <<y<<" is "  <<pow(x,y);
}

//4. Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
int fact(int x)
{
    if(x<=0)
    return 1;
    int fact=1;
    for(int i=1;i<=x;i++)
    fact=fact*i;
    return fact;
}
int comb(int n,int r)
{
    int com=fact(n)/(fact(r)*fact(n-r));
    return com;
}
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int k=0;
            if(j==0)
            while(k++<=(n/2-i+1))
            printf(" ");
            printf("%d ",comb(i,j));
        }
        printf("\n");
    }
}
//5.Write a function to check whether a givem no is a term in a fibonacci series or  not.
#include<iostream>
using namespace std;
int fibonacci(int n);
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    fibonacci(n)==1?cout<<"no is in fibonacci series":cout<<"no is not in fibonacci series";
};
    int fibonacci(int n)
    {
        int a=0,b=1,c=0;
    while(c<n)
    {
        c=a+b;
    a=b;
    b=c;
    }
    if(c==n)
    return 1;
    else
    return 0;

};

//6.define a function to swap data of two int variables using call by reference.
#include<iostream>
using namespace std;
int swap(int &a , int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    int x,y;
    cout<<"enter 2 numbers :";
    cin>>x>>y;
    swap(x,y);
    cout<<"after swapping no will be " <<x <<" "<<y;
    return 0;
}

/*7.Write a function  using the default argument that is able to add
2 or 3 numbers.*/
#include<iostream>
using namespace std;
int add(int a,int b, int c=0)
{
    return a+b+c;
}
int main()
{
    int a,b,c;
    cout<<"addition of 2 number is"<<add(6,9)<<endl;

    cout<<"addition of 3 numbers is"<<add(10,20,30);

}
/*8. Define overloaded functions to calculate area of circle, 
area of rectangle and area of
triangle*/
#include<iostream>
using namespace std;
float area(int r)
{
    return 3.14*r*r;
}
int area(int x,int y)
{
    return x*y;
}
float area(float b,float h)
{
    return 0.5*b*h;
    }
    int main()
    {
        int x,y,r;
        float b,h;
        cout<<"enter length and breadth of a rectangle :";
        cin>>x>>y;

        cout<<"enter radius of circle :";
        cin>>r;

        cout<<"enter  base and height of a traingle :";
        cin>>b>>h;
         
         cout<<endl;
        cout<<"area of rectangle is :"<<area(x,y)<<endl;
        cout<<"area of circle is :"<<area(r)<<endl;
        cout<<"area of triangle is :"<<area(b,h)<<endl;
        return 0;
    }
//9. Write functions using function overloading to find a maximum of two numbers and
//both the numbers can be integer or real.
#include<iostream>
using namespace std;
 int maximum(int x, int y)
 {
  if(x>y)
  return x;
  else
  return y;
 }
 float maximum(float a , float b)
 {
  if(a>b)
  return a;
  else
  return b;
 }


int  main()
{
  int x,y;
  float a,b;
  cout<<"enter two number :";
  cin>>x>>y;

  cout<<"enter two numbers:";
  cin>>a>>b;

  cout<<"the maxmimum no is :"<<maximum(x,y)<<endl;
  cout<<"the maximum no is :"<<maximum(a,b)<<endl;
}
