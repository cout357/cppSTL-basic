#include<iostream>
#include<stack>
#include<cstdio>

using namespace std;

/*�ص㣺
	ջ���ܱ�����Ҳ��֧�������ȡ��ֻ��ͨ��top��ջ����ȡ��ɾ��Ԫ��
*/ 
int main(){
	//��ʼ��
	stack<int> s1;
	
	stack<int> s2(s1);
	
	//���Ԫ��
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
