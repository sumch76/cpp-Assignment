
//1.Write a c++ program to print hello mysirg on the screen.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello MySirg";
}

/*2.write  a program to print HELLO on the first line and mysurg on thr second line
using endl*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello"<<endl<<"MySirg";
}

//3. Write a C++ program to calculate the sum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,sum;
    cout<<"enter two numbers:";
    cin>>a>>b;
    sum=a+b;
    cout<<"sum of two numbers is " <<sum;
}

// 4.Write a c++ program to calculate the area of circle.
#include<iostream>
using namespace std;
int main()
{
    int r;
    float area;
    cout<<"enter the radius of circle :";
    cin>>r;
    area=3.14*r*r;
    cout<<"area of circle is " <<area;
}
//5. Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    float l,b,h;
    float volume;
    cout<<"enter the length, breadth and height :";
    cin>>l>>b>>h;
    volume=l*b*h;
    cout<<"Volume of cuboid is " <<volume;
}
//6.write a program to calculate the average of three numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float avg;
    cout<<"enter three numbers :";
    cin>>a>>b>>c;
    avg=(a+b+c)/3;
    cout<<"average of three numbers is :"<<avg;

    return 0;

}

//7.write a program in c++to print square of number.
#include<iostream>
using namespace std;
int main()
    {
        
        int x,y;
        cout<<"enter a number:";
        cin>>x;
        y=x*x;
        cout<<"square of "<<x<<" is "<<y;
        cout<<endl;
        return 0;
    }
//8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter two numbers :";
    cin>>x>>y;
   x=x+y;
   y=x-y;
   x=x-y;
    cout<<"after swapping " <<x <<endl <<y;
}
//9. Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers :";
    cin>>a>>b;
    cout<<endl;
    if(a>b)
    cout<<a <<" is maximum number";
    else
    cout<<b<<" is maximum number";
}
//10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int i, a[10],sum=0;
    cout<<"enter 10 numbers :";
    for(i=0;i<=9;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<"sum of 10 numbers is " <<sum;
}
