#include<iostream>
#include "../stack/stack.h"

using namespace std;
SeqStack<int> *S;

//ת��ΪN������
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
  return 0;
}

