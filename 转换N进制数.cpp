//////////////////////////////////////////////////////////////////////////////
//
//  5. 输入一个十进数，将其转换成 N 进制数（0<N<=16)。  
//////////////////////////////////////////////////////////////////////////////
//只能是整数型

#include "stdafx.h"
#include<iostream>
#include "E:\programming\pass\c_c++\s数据结构与算法\栈\stack.h"

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

int _tmain(int argc, _TCHAR* argv[])
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

