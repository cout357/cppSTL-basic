#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

/*�����ص�: 
	���ܱ���,��֧���������
	���ṩ������
	��ջ��stack�����񣬵������Ƚ��ȳ�
*/ 

/*������ҵ:
	queue�������ָ��
	queue�������stack����
	����ӡ
*/
 
int main(){
	//��ʼ�� 
	queue<int> q1;
	queue<int> q2(q1);
	
	//�Ӷ�β���Ԫ�أ����Ŷ�һ�� 
	q1.push(10);
	q1.push(20);
	q1.push(30);
	q1.push(40);
	q1.push(50);
	
	//���ض�βԪ�� 
	cout << "q1.back() = " << q1.back() << endl;
	//���ض�ͷԪ�� 
	cout << "q1.front() = " << q1.front() << endl;
	
	while(!q1.empty()){
		cout << q1.front() << " ";
		q1.pop();	//�Ӷ�ͷɾ��һ��Ԫ�� 
	}
	cout << endl;
	
	return 0;
}
