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
  if( num < N )
  {
    cout << num<< endl;
  }
  else
  {
    int temp=num%N;
    cout << temp;
    TransformWithRec(temp,N);
  }
}

int main()
{
  int num,N;
  num=236;
  N=8;
  S=new SeqStack<int>();
  S->InitStack();
  Transform(num,N);
  while(!S->StackEmpty())
  {
    cout<<S->Pop();
  }
  cout<<endl;
  TransformWithRec(236,8);
  return 0;
}

