#include <iostream>
#include <cmath>
using namespace std;
char p;
int n;
int Number;
int factorial(int n) {
    int i,f=1;
    for(i=1;i<=n;i++) {
    f=f*i;
    }
    return f;
    return 0;
}
double CalculateSeriesSum (int N) {
    double i;
    double sum=0;
    for (i=1;i<=N;i++) {
        sum=sum+1/i;
    }
    return sum;
}
int Num;
void IsPrime (int Num) {
    int i,count=0;
    for (i=1;i<=Num;i++) {
        if (Num%i==0) {
        count+=1; 
    }
    }
    if (count==2) {
     std::cout<<"Prime number "<<endl;   
    }else {
    std::cout<<"Not prime number "<<endl;   
    }
    
  }
int main () {
    do
    {
                
    std::cout<<"Please enter the operation ";
    cin>>p;
    
    
    switch(p)

    {
              case '+':
               int x,y;
               std::cout<<"enter the 1st num ";
               cin>>x;
               std::cout<<"enter the 2nd num ";
               cin>>y;
              cout<<"the answer is = "<<x+y<<endl;
              break;
              case '-':
               double a,b;
               std::cout<<"enter the 1st num ";
               cin>>a;
               std::cout<<"enter the 2nd num ";
               cin>>b;
               cout<<"the answer is = "<<a-b<<endl;
               break;
              case '*':
               double num1,num2,num3;
               std::cout<<"enter the 1st num ";
               cin>>num1;
               std::cout<<"enter the 2nd num ";
               cin>>num2;
               num3=num1*num2;
               cout<<"the answer is = "<<num3<<endl;
               break;
              case '/':
               double e,d;
               std::cout<<"enter the 1st num ";
               cin>>e;
               std::cout<<"enter the 2nd num ";
               cin>>d;
               if (d!=0) {
                std::cout<<"the answer is = "<<e/d<<endl;
               }else {
                std::cout<<"sorry we can't divide by 0 \n";
               }
               break;
             case '%':
               int f,g;
               std::cout<<"enter the 1st num ";
               cin>>f;
               std::cout<<"enter the 2nd num ";
               cin>>g;
               if (g!=0) {
                std::cout<<"the answer is = "<<f%g<<endl;
               }else {
                std::cout<<"sorry we can't divide by 0 \n";
               }
              break;
             case 'f':
               int num;
               std::cout<<"enter the num ";
               cin>>num;
               std::cout<<"Factorial is "<<factorial(num)<<endl;
             break;
              case 'w':
              int m1,m2;
               std::cout<<"enter num1 : ";
               cin>>m1;
               std::cout<<"enter num2 : ";
               cin>>m2;
               std::cout<<"The result is : "<<pow(m1,m2)<<endl;
              break;

              case 'r':
              int A,B,j;
              std::cout<<"enter the 1st num ";
              cin>>A;
              std::cout<<"enter the 2nd num ";
              cin>>B;
              for (j=A;j>=B;j--) {
                std::cout<<j<<" ";
                
               }
              break; 
              
              case 's':
              int N;
              std::cout<<"Enter an integer number (N) : ";
              cin>>N;
              std::cout<<"The summation of the series is :"<<CalculateSeriesSum(N)<<endl;
              break;
              case 'P':
              int NUM;
              std::cout<<"Enter the num ";
              cin>>NUM;
              IsPrime(NUM);
              break;
              default:
              cout<<"invalid input";
             
    } 
    }
                                                                         
    while(p!='0');

return 0;
}


