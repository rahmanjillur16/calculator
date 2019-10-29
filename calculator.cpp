#include <cstdlib>
#include <iostream>
double sum(double a,double b);
void menu();
double subtract(double a,double b);
double multiply(double a,double b);
double divide(double a,double b);
using namespace std;
int main(int argc, char *argv[])
{ 

  int c;
  double r,a,b;
  menu(); 
  cout<<"Enter your choice: "<<endl;
  cin>>c;
  switch(c){
         case 1:cout<<"Enter a: ";cin>>a;
                   cout<<"Enter b: ";cin>>b;
                   r=sum(a,b);
                   cout<<"Result:"<<r<<endl;break;
         case 2:cout<<"Enter a: ";cin>>a;
                   cout<<"Enter b: ";cin>>b;
                   r=subtract(a,b);
                   cout<<"Result:"<<r<<endl;break;
         case 3:cout<<"Enter a: ";cin>>a;
                  cout<<"Enter b: ";cin>>b;
                  r=multiply(a,b);
                 cout<<"Result:"<<r<<endl;break;

          case 4:cout<<"Enter a: ";cin>>a;
                  cout<<"Enter b: ";cin>>b;
                  r=divide(a,b);
                  cout<<"Result:"<<r<<endl;break;
          default:cout<<"Invalid choice"<<endl; 

}

       system("PAUSE");
       return EXIT_SUCCESS;
}

double sum(double a,double b){
       double result_sum= a+b;
       return result_sum;
}


double subtract (double a, double b){
       double result_subtract =a-b;
       return result_subtract; 
}
double multiply (double a, double b){
      double result_multiply =a*b;
      return result_multiply;

}

double divide (double a, double b){
       double result_divide =a/b;
       return result_divide; 
}
void menu(){
      cout<<"Please choose an option (1,2,3,4):";
      cout<<"1. Sum"<<endl;
      cout<<"2. Subtract"<<endl;
      cout<<"3. Multiply"<<endl;
      cout<<"4. Divide"<<endl; 
}
