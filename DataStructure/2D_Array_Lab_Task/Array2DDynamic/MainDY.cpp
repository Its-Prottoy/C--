#include<iostream>
#include "Array2DDynamic.h"
using namespace std;
int main(){
    int arr[3][3]={{4,9,2},{3,5,7},{8,1,6}};      //Fixed value
    int R,C;
    cout<<"Enter Row Number: ";
    cin>>R;
    cout<<"Enter Column Number: ";
    cin>>C;
    Array result(R,C);
    //result.InItArray();         //input value
    result.InItArray(arr);    //Fixed value
    result.PrintArray();
    result.PrintLeftDiagonal();
    result.PrintRightDiagonal();
    result.PrintMagicSquare();
    result.PrintAlternate();
    result.SumUp();
    return 0;
}