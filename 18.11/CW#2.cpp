/*Напишите программу выписывающую из массива все числа имеющие ровно 3 делителя.
Программа должна быть эффективной по времени.
Гарантируется, что в массиве таких чисел не менее трети.*/
#include <iostream>
using namespace std;
int main()
{
int n,a=2;
cin >> n;
int*A=new int[n];
for( int i=0; i<n; i++)
cin >> A[i];
for(int i=0;i<n;i++){
    for(int k=2;k*k<=A[i];k++){
    if(A[i]%k==0)
    a++;
    }
if (a==3)
cout << A[i] << " ";
 a=2;
 }
delete []A;
 return 0;
 }
