#include<iostream>
#include<cstdio>
#include<deque>

using namespace std;

//deque�Ƿ���˫����������
/*�����ܽ�:
	˫�˲����ɾ��Ԫ��Ч�ʽϸ�
	ָ��λ�ò���Ҳ�ᵼ������Ԫ���ƶ�������Ч��
	�������ȡ,Ч�ʸ�
*/ 
 
void print(deque<int> deq){
	for(int i = 0;i < deq.size();i++)
		cout << deq[i] << " ";
	cout << endl;
}

void chushihua();		//���ó�ʼ������
void fuzhi();			//���ø�ֵ����С����
void charu(); 
int main(){
	//chushihua();
	//fuzhi();
	charu(); 
	return 0;
}

void chushihua(){
	deque<int> deq1;
	
	deque<int> deq2(20,7);
	cout << "deq2 :";print(deq2);
	
	deque<int> deq3(deq2.begin(),deq2.end());
	cout << "deq3 :";print(deq3);
	
	deque<int> deq4(deq3);
	cout << "deq4 :";print(deq4);
}

void fuzhi(){
	deque<int> deq1;
	deq1.assign(20,6);
	cout << "deq1 :";print(deq1);
	
	deque<int> deq2;
	deq2.assign(deq1.begin(),deq1.end());
	cout << "deq2 :";print(deq2);
	
	deque<int> deq3;
	deq3 = deq2;
	cout << "deq3 :";print(deq3); 
	
	deque<int> deq4;
	deq4.swap(deq3);
	cout << "deq4 :";print(deq4); 
	
	if(deq3.empty())  cout << "empty" << endl;
	else 			  cout << "no empty" << endl;
	
	cout << "deq3.size() = " << deq3.size() << endl;
	cout << "deq4.size() = " << deq4.size() << endl;
	
	//��Ԫ�ظ�������Ϊ5����������ԭ�������ˣ��¼ӵ�ֵΪĬ��ֵ����������ˣ���ɾȥĩβԪ�� 
	deq4.resize(5,3);	//�ڶ���Ĭ��ֵ�������Բ��� 
}

void charu(){
	deque<int> deq;
	
	//ĩβ����
	deq.push_back(3);
	
	//��ͷ����
	deq.push_front(2);
	//��ӡ 
	print(deq); 
	
	//��ĩβɾ��һ��Ԫ�� 
	deq.pop_back();
	print(deq);
	//�ӿ�ͷɾ��һ��Ԫ�� 
	deq.pop_front(); 
	print(deq);
}
