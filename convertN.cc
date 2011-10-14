#include<iostream>
#include "../stack/stack.h"

using namespace std;
SeqStack<int> *S;

//转化为N进制数
void Transform(int num,int N)
{
  do
  {
    S->Push(num%N);
    num=(num/N);
  }while(num>=N);
  S->Push(num%N);

}
void TransformWithRec(int num,int N)
{
  int temp=num%N;
  if( num < N )
  {
    cout << num;
  }
  else
  {
    TransformWithRec(num/N,N);
    cout << temp;
  }
}

int main()
{
  int num,N;
  num=236;
  N=8;
  S=new SeqStack<int>();
  S->InitStack();
  cout<<"stack's method's output"<<endl;
  Transform(num,N);
  while(!S->StackEmpty())
  {
    cout<<S->Pop();
  }
  cout<<endl;
  cout<<"Rec's method's output"<<endl;
  TransformWithRec(236,8);
  cout<<endl;
  return 0;
}

