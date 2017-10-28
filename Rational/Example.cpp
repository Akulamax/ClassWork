// Example program
#include <iostream>
#include <string>
using namespace std;  
int gcd(int a,int b){		//НОД. Рекурсивный алгоритм Евклида: http://e-maxx.ru/algo/euclid_algorithm
    if (b==0) return a;
    return gcd(b,a%b);
}
typedef struct Rational {
    int M;			//Числитель
    unsigned int N;		//Знаменатель
    
    Rational(unsigned int A, int B):M(A),N(B){ // конструктор
        int d=gcd(M,N);
        M/=d;
        N/=d;
    }
    
    Rational mul(Rational A){	// метод, умножающий текущий объект на A
    return Rational(M*A.M,N*A.N);
    }
    
    void print(){	// метод print, выписывающий дробь
        cout<<M<<"/"<<N<<endl;
    }   
 /* friend ostream& operator<<(ostream& os, Rational R)   //Перегрузка оператора <<
    {  
        os << R.M << '/' << R.N;
	return os;  
    }  */
}Rational;		//Здесь закончилось описание структуры Rational!

Rational multiply(Rational A,Rational B){	//внешняя функция умножения, использующая наш новый тип
    return Rational(B.M*A.M, B.N*A.N);
    }

int main()
{
    Rational A(3,5);
    Rational B(10,12);
    Rational C=A.mul(B);
    cout<<C.M<<"/"<<C.N<<endl;
    A.mul(A).print();
    multiply(B,C).print();
    //C.print();
}
