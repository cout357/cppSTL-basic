#include<iostream>
#include<stack>
#include<cstdio>

using namespace std;

/*特点：
	栈不能遍历，也不支持随机存取，只能通过top从栈顶获取和删除元素
*/ 
int main(){
	//初始化
	stack<int> s1;
	
	stack<int> s2(s1);
	
	//添加元素
	s2.push(10);
	s2.push(20);
	s2.push(30);
	s2.push(40);
	s2.push(50);
	cout << "s2.top() = " << s2.top() << endl;
	
	while(!s2.empty()){
		cout << s2.top() << " ";
		s2.pop();
	}
	cout << endl;
	cout << "s2.size() = " << s2.size() << endl;
	
	return 0; 
}
