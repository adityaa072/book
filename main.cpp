#include<iostream>
using namespace std;
void add(int a, int b)
{
	int c=a+b;
	std::cout<<"Result of addition"<<c<<std::endl;
}
int main()
{
	std::cout<<"I am in main"<<std::endl;
	int res=add(4,5);
	return 0;
}