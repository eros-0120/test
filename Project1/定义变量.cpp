#include<iostream>
using namespace std;

//按顺序分别定义char、int、long、double类型的变量，并用sizeof()依次输出这几个变量在内存中所占用的字节数。
int main() {

	char a;
	int b;
	long c;
	double d;

	cout << sizeof(char) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(double) << endl;


	return 0;
}