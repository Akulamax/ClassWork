/*Напишите программу, находящую все натуральные составные числа не превосходящие N.
Программа должна быть эффективной по времени.*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int N;
    cout << "Input a number: " << endl;
    cin >> N;
    bool *A=new bool[N+1];
    for(int i = 0; i < N; ++i)
      A[i] = 0;
for (int i=2;i<N;i++)
    if (A[i]==0)
    for (int j=i*2;j<N+1;j+=i)
    A[j]=1;
for (int i=0;i< N + 1;i++)
    if (A[i] == 1)
    cout << i << " ";
    system("pause");
    return 0;
}
