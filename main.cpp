#include <iostream>
#include "math.h"
using namespace std;
//
// int main(){
//
//     int intNumber = 24 ;
//     float floatNumber = 3.14 ;
//     double doubleNumber = 45.1234 ;
//     char charNumber = 'A' ;
//     cout <<"Value of integer number is: " << intNumber <<"." << " Size of it is : " << sizeof(intNumber)<<endl;
//     cout <<" Value of integer number is: " << floatNumber <<"."<< " Size of it is : " << sizeof(floatNumber) << endl;
//     cout <<"Value of integer number is: " << doubleNumber <<"."<< " Size of it is : " << sizeof(doubleNumber) << endl;
//     cout <<"Value of integer number is: " << charNumber <<"." << " Size of it is : " << sizeof(charNumber) << endl;
//
//     return 0;
//
// }

// Problem #2
// int main() {
//     string name = "Alijon Aliev";
//     int id = 23342;
//     string song = "Queen - The Show Must Go On";
//     string movie = "Titanic";
//     cout << name << endl;
//     cout << id << endl;
//     cout << song << endl;
//     cout << movie << endl;
//     return 0;
// }

// Problem #3
// int main() {
//     cout << "\"I'm standing\" on the edge of some crazy clif."
//             "\n What I have to do, I have to catch everybody\\"
//             "\n If they start to go over the cliff-I mean\\"
//             "\n \\if they're running and they don't look"
//             "\n  where they're going I have to come out "
//             "\n from somewhere and \t catch them. ";
//     return 0;
// }

// Problem #4
// int main() {
//     int a = 189;
//     char b ='B';
//     int decValue = b;
//     float num1 = a/3;
//     float num2 = (a+b)/5;
//     char c = b+a/10-1;
//     cout << a <<"\t" << b <<"\t"<< c<<"\t" << num1 <<"\t"<< num2 <<"\t"<< endl;
//     return 0;
// }

// Problem #5
// int main() {
//     int a = 12;
//     int b = 38;
//    int  sum = a + b;
//     int product = a * b;
//     cout <<"Sum = " << sum << endl;
//     cout <<"Product = " << product << endl;
//     return 0;
//
// }

// Problem #6
// int main() {
//    double x, y;
//    cout << "Please enter the first number:" << endl;
//    cin >> x;
//    cout << "Please enter the second number:" << endl;
//    cin >> y;
//    double sum = x+y;
//    cout << "Sum: "<<x<<"+"<<y<<"="<<sum << endl;
//    return 0;
// }
// Problem #7
// int main() {
//     double x, y;
//     cout << "Enter x value:";
//     cin >> x;
//     cout << "Enter y value:";
//     cin >> y;
//
//     int above = 3*(x*x+3);
//     int below = y/4+3;
//     int subs = above/below;
//     cout << subs << endl;
//     return 0;
// }

// Problem #8
// int main() {
//     double x;
//     cout << "Please enter a number: ";
//     cin >> x;
//     const double pi = 3.14159265358979323846;
//     double area = pi * pow(x, 2);
//     cout << "The area is " << area << endl;
//     return 0;
// }
// Problem #9
// int main() {
//     double x, y, z;
//     cout << "Enter the starting Velocity in m/s:" << endl;
//     cin >> x;
//     cout << "Enter the ending Velocity in m/s:" << endl;
//     cin >> y;
//     cout << "Enter the time span in seconds:" << endl;
//     cin >> z;
//     double a = (y-x)/z;
//     cout << "the average acceleration: " << a << endl;
//     return 0;
// }
// Problem #10
// int main() {
//     double x,y,z;
//     cout << "The distance to drive:" << endl;
//     cin >> x;
//     cout <<" the fuel efficency of the car in miles per gallon:" << endl;
//     cin >> y;
//     cout << "the price per gallon: " << endl;
//     cin >> z;
//     double a = x/y*z;
//     cout <<" the cost of driving is $" << a << endl;
//     return 0;
// }
// Problem #11
// int main() {
//     double x = 1.13e3;
//     double y = 411e-4;
//     cout << x << endl;
//     cout << y << endl;
//     return 0;
// }

//Problem #12
// int main() {
//     int totals = 241;
//     int groups = 11;
//     double pergroup = totals / groups;
//     int r = totals%groups;
//     double lg = r;
//     double fg = pergroup;
//     cout << "In first group:" <<fg << endl;
//     cout << "In last group:" <<lg << endl;
//    return 0;
// }
// Problem #13
// int main() {
//  double x;
//  cout << "Enter side of a hexagon:";
//  cin >> x;
//  double area = ((3*sqrt(3))/2)*x*x;
//  cout << "Area = " << area << endl;
// }
//Problem #14
// int main() {
//     double x;
//     cout << "Enter x: ";
//     cin >> x;
//    int num = x+1;
//     num = num*3;
//     num = num-14;
//     num = num/4;
//     num = num-1;
//     num = num%9;
//     cout << num << endl;
//     return 0;
// }
// Problem #15
// int main() {
//      char base = 'A';
//      char base2 = base + 1;
//      char base3 = base + 1;
//      char base4 = base + 14;
//      char base5 = base + 18;
//      char base6 = base - 32;
//      cout << base << base2 << base3 << base4 << base5 << base6 << endl;
//      return 0;
//
// }
// Problem #16
// int main() {
//     float x=17;
//     float y=1;
//     double z = (x+(++x))/(++y+y);
//     cout << z << endl;
//     return 0;
// }
//Problem #17
// int main() {
//     int a,b;
//     cin>>a>>b;
//     cout<<(a==b)<<endl;
//     return 0;
//
// }

//Problem #18
// int main() {
//     int a,b;
//     cout<<"Enter the first number: ";
//     cin>>a;
//     cout<<"Enter the second number: ";
//     cin>>b;
//     cout<<((a<140)&&(a<b) )<< endl;
//     return 0;

//
//
// }
//Problem #19
// int main() {
//     int a, b, c;
//     cout << "Please enter the first number: ";
//     cin >> a;
//     cout << "Please enter the second number: ";
//     cin >> b;
//     cout << "Please enter the third number: ";
//     cin >> c;
//     cout <<((a>b)&&(a>c)) <<endl;
//     return 0;
// }
//Problem #20
// int main() {
//     int a,b,c,d,e;
//     cout<<"Enter the first number: ";
//     cin>>a;
//     cout<<"Enter the second number: ";
//     cin>>b;
//     cout<<"Enter the third number: ";
//     cin>>c;
//     cout<<"Enter the fourth number: ";
//     cin>>d;
//     cout<<"Enter the fifth number: ";
//     cin>>e;
//     cout<<((a>=0)||(b>=0)||(c>=0)||(d>=0)||(e>=0)) <<endl;
//     return 0;
//
// }
//Problem #21
// int main() {
//     int x,y;
//     cout<<"Enter the first number:";
//     cin>>x;
//     cout<<"Enter the second number:";
//     cin>>y;
//     cout <<((x+y)>30&&(x*y)>30) <<endl;
//     cout <<((x+(y-10)>30)&&(x*(y-10))>30)<<endl;
//     cout <<((x)>30||(y)>30)<<endl;
//     return 0;
// }
// Problem #22
// int main() {
//     int x,y;
//     cout<<"enter Sardor height in cm:";
//     cin>>x;
//     cout<<"enter Mike width in cm:";
//     cin>>y;
//     double fx = x/30.48;
//     double fy = y/30.48;
//     cout <<(y>x) <<endl;
//     return 0;
// }
