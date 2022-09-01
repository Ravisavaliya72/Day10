#include <iostream>
using namespace std;

class A{
    public :
    
    void fun (int a,int b){
        
        cout << "Your Division : "<<a/b<<endl;
    }
    
    void fun (int a,int b ,int c){
        
        cout << "Your subtraction of 3 Number : "<< a-b-c<<endl;
    }
    
    void fun (int a,int b ,int c,int d ){
        
        cout << "Your Multiplication of 4 Number : "<< a*b*c*d<<endl;    
    }
    void fun (int a,int b ,int c,int d ,int e){
		
        cout << "Your Addition of 5 Number : "<< a+b+c+d+e<<endl;        
    }
};

main() {
    
    A arithmetic;
    
    arithmetic.fun(1,2);
    arithmetic.fun(1,2,3);
    arithmetic.fun(1,2,3,4);
    arithmetic.fun(1,2,3,4,5);

}
