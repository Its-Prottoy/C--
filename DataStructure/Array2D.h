#include<iostream>
using namespace std;
class Array
{
    private:
    int arr[5][5];
    int row,col;

    public:
    Array()
    {
        row=3;
        col=3;
    }

    void InItArray()
    {
        cout<<"InItArray input: "<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<"Arr["<<i<<"]["<<j<<"] = ";
                cin>>arr[i][j];
                cout<<endl;
            }
        }
    }

    void InItArray(int array[3][3])
    {
        cout<<"InItArray Fixed Value: "<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                arr[i][j] = array[i][j];
            }
        }
    }

    void PrintArray()
    {
        cout<<"PrintArray: "<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    void PrintLeftDiagonal()
    {
        cout<<"PrintLeftDiagonal: "<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(i==j)
                {
                    cout<<arr[i][j]<<" ";
                }
                else 
                {
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }

    void PrintRightDiagonal()
    {
        cout<<"PrintRightDiagonal: "<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(i+j==(col-1))
                {
                    cout<<arr[i][j]<<" ";
                }
                else 
                {
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }

    void PrintMagicSquare()
    {
        cout<<"PrintMagicSquare: "<<endl;
        int sumL=0,sumR=0,sum=0;
        int rowSum=0,colSum=0;
        bool magicSquare=true;

        for(int j=0;j<col;j++)
        {
            sum=sum+arr[0][j];
        }

        for(int i=1;i<row;i++)
        {
            rowSum=0;
            for(int j=0;j<col;j++)
            {
                rowSum=rowSum+arr[i][j];
            }
            if(rowSum!=sum)
            {
                magicSquare=false;
                break;
            }
        }

        for(int j=0;j<col;j++)
        {
            colSum=0;
            for(int i=0;i<row;i++)
            {
                colSum=colSum+arr[i][j];
            }
            if(colSum!=sum)
            {
                magicSquare=false;
                break;
            }
        }

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
               if(i==j)
                {
                    sumL=sumL+arr[i][j];
                } 
            }
        }

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(i+j==(col-1))
                {
                    sumR=sumR+arr[i][j];
                }

            }
        }

        if(sumL!=sum || sumR!=sum)
        {
            magicSquare=false;
        }
        
        if(magicSquare)
        {
            cout<<"MagicSquare";
        }
        else
        {
            cout<<"Not MagicSquare";
        }
        cout<<endl<<endl;
    }

    void PrintAlternate()
    {
        cout<<"PrintAlternate: "<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(i==j || (i+j==(col-1)))
                {
                    cout<<arr[i][j]<<" ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }

    int SumUp()
    {
        int sum=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                sum=sum+arr[i][j];
            }
        }
        cout<<"SumUp Result: "<<sum<<endl<<endl;
        return sum;
    }
    
};