/*Напишите программу находящую в двумерном массиве элементы значения которых ровно втрое больше суммы индексов этого элемента.
В этой задаче массив неравномерен по ширине, т.е. размеры подмассивов могут отличаться.
Для удобства размеры подмассивов должны хранится, как первые элементы подмассивов(т.е. под нулевым индексом).
Способ ввода остается на ваше усмотрение. */
#include <iostream>
#include <math.h>
using namespace std;
void dig_trench(int** A,int n,int N){
for (int i=0;i<n;i++){
for (int j=0;j<N;j++){
A[i][j]=n-sqrt((i-j)*(i-j));}
}
}
int main()
{int n,N;
cin>>n;
cin>>N;
int** Trench=new int *[n];
for(int i = 0; i < n; i++) {
Trench[i] = new int[N];
for(int j = 0; j < N; j++) {
Trench[i][j]=0;
}
}
dig_trench(Trench,n,N);
for (int i=0;i<n;i++){
for (int j=0;j<N;j++){
cout<<Trench[i][j]<<" ";}
for(int i=0;i<n;i=i+n)
cout<<endl;
}
cout<<endl;
for (int i=0;i<n;i++)
for (int j=0;j<N;j++){
if ((Trench[i][j])==3*(i+j))
    cout <<Trench[i][j]<<" ";}
 for (int i=0;i<n;i++)
delete []Trench[i];
delete []Trench;
return 0;
}
