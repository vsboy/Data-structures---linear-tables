#include <iostream>           //引用输入输出流库函数的头文件
using namespace std;
#include "SeqList.cpp"           //引用顺序表的类声明和定义
void main( )
{
      int r[5]={1, 2, 3, 4, 5};    
      SeqList<int> L(r, 5);
      cout<<"逆置前数据为："<<endl;
      L.PrintList( );              //输出所有元素
	  L.Reverse();
	  cout<<"逆置后数据为："<<endl;
	  L.PrintList( ); 
}
