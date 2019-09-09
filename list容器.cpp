#include<iostream>
#include<list>

using namespace std;

void print(list<int> lis);	//��ӡ���� 
void chushihua();			//�����ó�ʼ������ 
void charu();				//�����ò���ɾ������
void daxiao();				//�����ô�С���� 
void fuzhi();				//�����ø�ֵ���� 
void paixu();				//����������ת����
bool mysort(int i1,int i2); 
 
 //ע�⣬�������Լ���sort�������� 
int main(){
	//chushihua();
	//charu();
	//daxiao();
	//fuzhi();
	paixu();
	 
	return 0;
}

void print(list<int> lis){
	for(list<int>::iterator it = lis.begin();it != lis.end();it++){
		cout << *it << " ";
	}
	cout << endl;
}

void chushihua(){
	list<int> lis1;
	list<int> lis2(6,7);	//��ʼ��Ϊ����7,���õ����вι��� 
	list<int> lis3(lis2);	//��������
	//����ָ����Χ���г�ʼ�� 
	list<int> lis4(lis3.begin(),lis3.end());
	cout << "lis4: ";print(lis4);  
} 

void charu(){
	list<int> list1(12,7);
	//β������ 
	list1.push_back(6);
	//ͷ������
	list1.push_front(2);
	//ָ��λ�ò���һ��
	print(list1); 
	list1.insert(list1.begin(),9);	//����������ͷ��ͷ�� 
	print(list1); 
	
	//β��ɾ��
	list1.pop_back();
	//ͷ��ɾ��
	list1.pop_front(); 
	print(list1);
	//ɾ��ָ��λ�õ�Ԫ��
	list1.erase(list1.begin());
	print(list1); 
	//ɾ��ָ����Χ��Ԫ��
	list1.erase(list1.begin(),list1.end());	//����ֻ���ǵ�����������������ֵ�����Բ����üӼ���
	//ɾ������Ԫ��
	list1.clear();
	
	list1.push_back(2); 
	list1.push_back(3);
	list1.push_back(2);
	list1.push_back(5);
	print(list1);
	//ɾ��������֮ƥ���Ԫ�� 
	list1.remove(2);
	print(list1); 
}

void daxiao(){
	list<int> list1(12,7);
	print(list1);
	cout << "list1.size() = " << list1.size() << endl;
	cout << "list1.empty() = " << list1.empty() << endl;
	list1.resize(6);
	print(list1);
	list1.resize(12,9);	//����list��С����ָ��Ĭ��ֵ 
	print(list1);
} 

void fuzhi(){
	list<int> list1(20,7);
	print(list1);
	list1.assign(10,6);		//�Ȱ�֮ǰ��Ԫ��ȫ�����,Ȼ��ֵΪ10��6  
	print(list1);
	
	list<int> list2;
	list2 = list1;		//������=��ֱ�Ӹ�ֵ
	print(list2);
	
	list2.assign(10,3);
	list2.swap(list1);	//������������
	//front()���ص�һ��Ԫ�أ�back()�������һ��Ԫ��
	cout << "list2.front() = " << list2.front() << endl;
	cout << "list2.back() = " << list2.back() << endl; 
}

void paixu(){
	list<int> list1;
	list1.push_back(3);
	list1.push_back(2);
	list1.push_back(9);
	list1.push_back(1);
	list1.push_back(7);
	cout << "list1:";print(list1);
	 
	//��ת����Ԫ��
	list1.reverse();
	cout << "list1:";print(list1); 
	
	//Ĭ������
	list1.sort();
	cout << "list1:";print(list1); 
	
	//�Զ������� 
	list1.sort(mysort);
	cout << "list1:";print(list1);
}

bool mysort(int i1,int i2){
	return i1>i2;
}
