#include<iostream>
using namespace std;

class stack
{
    private:
    int top;
    int maxSize;
    char* arr;
    
    public:
    stack(int size)
    {
        maxSize=size;
        arr=new char[maxSize];
        top=0;
    }

    bool isEmpty()
    {
        return top==0;
    }

    bool isFull()
    {
        return top==maxSize;
    }

    void push(char val)
    {
        if(!isFull())
        {
            arr[top]=val;
            top++;
        }
        else cout<<"Stack is Full"<<endl;
    }

    void pop()
    {
        if(!isEmpty())
        {
            top--;
        }
        else cout<<"Stack is Empty"<<endl;
    }

    char getTop()
    {
        if(!isEmpty())
        {
            return arr[top-1];
        }
        return '\0';
    }

    void show()
    {
        for(int i=0;i<top;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void reSizeStack(int newSize)
    {
        if(top>newSize)
        {
            cout<<"New size is less then the previous size, so truncating."<<endl;
            top=newSize;
        }
        char* newarr;
        newarr=new char[newSize];
        for(int i=0;i<top;i++)
        {
            newarr[i]=arr[i];
        }
        delete[] arr;
        arr=newarr;
        maxSize=newSize;
        
    }

    ~stack()
    {
        delete[] arr;
    }

    int precedence(char operat)
    {
        if(operat=='+' || operat=='-')
        {
            return 1;
        }
        else if(operat=='*' || operat=='/')
        {
            return 2;
        }
        else if(operat=='^')
        {
            return 3;
        }
        else
        {
            return 0;
        }
    }

    string InfixtoPostfix(char* infix, int InSize)
    {
        stack s(InSize);

        s.push('(');
        int i=0;
        while(infix[i]!='\0')
        {
            i++;
        }
        infix[i]=')';
        infix[i+1]='\0';

        string output="";
        for(int j=0;infix[j]!='\0';j++)
        {
            char ch=infix[j];
            if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            {
                output+=ch;
            }
            else if(ch=='(')
            {
                s.push(ch);
            }
            else if(ch==')')
            {
                while(!s.isEmpty() && s.getTop()!='(')
                {
                    output+=s.getTop();
                    s.pop();
                }
                s.pop();
            }
            else
            {
                if(!s.isEmpty() && s.precedence(s.getTop())<s.precedence(ch))
                {
                    s.push(ch);
                }
                else
                {
                    while(!s.isEmpty() && s.precedence(s.getTop())>=s.precedence(ch))
                    {
                        output+=s.getTop();
                        s.pop();
                    }
                    s.push(ch);
                }
            }
        }
        return output;
    }
};