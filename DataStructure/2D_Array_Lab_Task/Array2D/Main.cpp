#include<iostream>
#include "Array2D.h"
using namespace std;
int main(){
    int arr[3][3]={{4,9,2},{3,5,7},{8,1,6}};
    Array result;
    //result.InItArray();    //input value
    result.InItArray(arr);  //Fixed value
    result.PrintArray();
    result.PrintLeftDiagonal();
    result.PrintRightDiagonal();
    result.PrintMagicSquare();
    result.PrintAlternate();
    result.SumUp();
    return 0;
}