/*Напишите программу заполняющую двумерный массив размера N×N диагоналями, как показано в примере.*/
#include <iostream>
#include <math.h>
using namespace std;
void dig_trench(int** A,int n){
for (int i=0;i<n;i++){
for (int j=0;j<n;j++){
A[i][j]=n-sqrt((i-j)*(i-j));}
}
}
int main()
{int n;
cin>>n;
int** Trench=new int *[n];
for(int i = 0; i < n; i++) {
Trench[i] = new int[n];
for(int j = 0; j < n; j++) {
Trench[i][j]=0;
}
}
dig_trench(Trench,n);
for (int i=0;i<n;i++){
for (int j=0;j<n;j++){
cout<<Trench[i][j]<<" ";}
for(int i=0;i<n;i=i+n)
cout<<endl;
}
delete []Trench;
return 0;
}
