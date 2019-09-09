#include<iostream>

using namespace std;

void test1();

int main(){
	test1();
	
	return 0;
}

void test1(){
	//构造方法 
	float f = 3.14156;
	pair<float,int> myp(f,int(f));
	cout << myp.first << "," << myp.second << endl;
	
	//第二种创建方式
	pair<string,int> myp2 = make_pair(string("hello"),5);
	cout << myp2.first << "," << myp2.second << endl;
	
	//重载=运算符
	pair<string,int> myp3 = myp2; 
	cout << myp3.first << "," << myp3.second << endl;
}
