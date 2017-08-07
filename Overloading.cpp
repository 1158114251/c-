#include <iostream>
#include <iomanip>
#include<stdio.h>
using namespace std;
/*
 2017年8月6日20:44:08 张

 函数名相同 ，参数个数 ，类型 顺序不同为重载 ，相当于c的变参函数
但是返回值不同不够成重载。c++ 的重载底层实现原理是函数名的修改
换句话说在编译后这些重载函数名是不一样的，具体构成又命名空间+其他形成。

*/


int over(int);
int over(int ,int);

int main (void)
{
   cout<<"ni hao"<<endl;

   cout << setbase(16)<<100<<endl;

   over(1);
   over(2,3);


}



int over(int a )
{

printf("function 1\n");
return -1;

}

int over(int a ,int b)
{

printf("function 2\n");

return 0;

}


