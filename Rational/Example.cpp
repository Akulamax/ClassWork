// Example program
#include <iostream>
#include <string>
using namespace std;  
int gcd(int a,int b){
    if (b==0) return a;
    return gcd(b,a%b);
}
typedef struct Rational {
    int M;
    unsigned int N;
    
    Rational(unsigned int A, int B):M(A),N(B){
        int d=gcd(M,N);
        M/=d;
        N/=d;
    }
    
    Rational mul(Rational A){
    return Rational(M*A.M,N*A.N);
    }
    
    void print(){
        std::cout<<M<<"/"<<N;
    }   
    
    friend ostream& operator<<(ostream& os, Rational R)  
    {  
        os << R.M << '/' << R.N;
	return os;  
    }  
}Rational;

int main()
{
    Rational A(3,5);
    Rational B(10,12);
    Rational C=A.mul(B);
    std::cout<<C<<endl;
    //C.print();
}
