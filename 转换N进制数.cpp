//////////////////////////////////////////////////////////////////////////////
//
//  5. ����һ��ʮ����������ת���� N ��������0<N<=16)��  
//////////////////////////////////////////////////////////////////////////////
//ֻ����������

#include "stdafx.h"
#include<iostream>
#include "E:\programming\pass\c_c++\s���ݽṹ���㷨\ջ\stack.h"

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

