#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define SIZE(name,type) sizeof(name)/sizeof(type)
using namespace std;

void printv2(int x){
	cout << x << " ";
}

void print(vector<int> &v){
	for(vector<int>::iterator i = v.begin();i < v.end();i++)  
		cout << *i << " ";
	cout << endl;
}

void chushihua();	//���ó�ʼ������ 
void fuzhi();		//���ø�ֵ���� 
void daxiao();		//���ô�С���� 
void cunqu();		//���ô�ȡ���ݲ��� 
void charu();		//���ò���ɾ������ 
int main(){
	//chushihua(); 
	//fuzhi();
	//daxiao(); 
	//cunqu();
	//charu();
	
	return 0; 
}

void chushihua(){
	//��ʼ��
	vector<int> v1;	//Ĭ�Ϲ����ʼ��
	
	//�������ʼ�� 
	int nums[] = {1,2,3,4,5,6,7,8,9,0};
	vector<int> v2(nums,nums+SIZE(nums,int));
	//��for_each()��ӡ 
	vector<int>::iterator v2Bengin = v2.begin();
	vector<int>::iterator v2End = v2.end();
	cout << "v2:" << endl; 
	for_each(v2Bengin,v2End,printv2);
	cout << endl;
	
	//����ָ�����ȳ�ʼ��
	vector<int> v3(v2.begin(),v2.end()); 
	cout << "v3:" << endl;print(v3);	//�õ�������ӡ 
	
	//ֱ�ӿ�����ʼ��
	vector<int> v4(v3); 
	cout << "v4:" << endl;print(v4);	//�õ�������ӡ
	
	//��n��Ԫ�س�ʼ��
	vector<int> v5(20,7);
	cout << "v5:" << endl;print(v5); 
}
void fuzhi(){
	int nums[] = {1,2,3,4,5,6,7,8,9,0};
	vector<int> v1(nums,nums+SIZE(nums,int));
	
	vector<int> v2;
	//��assign������v2���и�ֵ��ע�⣬������������滻ָ����Χ�ڵ�Ԫ�أ�
	//���ǰ�ָ����Χ�ڵ�Ԫ�ر�Ϊv2����Ԫ�� 
	v2.assign(v1.begin(),v1.end());
	cout << "v2:" << endl;print(v2);
	
	vector<int> v3;
	//������=���и�ֵ 
	v3 = v2;
	cout << "v3:" << endl;print(v3);
	
	int nums1[] = {3,4,5};
	vector<int> v4(nums1,nums1+SIZE(nums1,int));
	cout << "v4:" << endl;print(v4);
	//��swap��v4��v3��ָ�뽻��ָ��λ�� 
	v4.swap(v3); 
	cout << "v3:" << endl;print(v3);
	cout << "v4:" << endl;print(v4);
}

void daxiao(){
	int nums[] = {1,2,3,4,5,6,7,8,9,0};
	vector<int> v1(nums,nums+SIZE(nums,int));
	//v.size��������v��Ԫ�ظ��� 
	cout << "v1.size = " << v1.size() << endl;	//���Ϊ10 
	//v.empty���������ж�v1�Ƿ�Ϊ��,�շ���1���񷵻�0 
	cout << "v1.empty = " << v1.empty() << endl;
	
	//v.resize���������趨v��������С����Ԫ�ظ���������������д�С����
	//��Ĭ��ֵ�����λ�ã�С����ɾ��β������Ԫ�� 
	//v1.resize(20);
	v1.resize(20,1);	//Ĭ��ֵ��Ϊ1 
	cout << "v1:" << endl;print(v1);	 
	v1.resize(5);
	cout << "v1:" << endl;print(v1);
	
	//capacity��������v���������������ڻ����size��Ԫ�ظ���
	cout << "v1.size = " << v1.size() << endl;	//�ȿ�һ��size��С 
	cout << "v1.capacity() = " << v1.capacity() << endl;
	
	//��ǰ����һ���Ԫ���ڴ�ռ�,�����ظ��������ݿ����¿ռ�,ʹ�������Ч 
	v1.reserve(10000);
}

void cunqu(){
	int nums[] = {1,2,3,4,5,6,7,8,9,0};
	vector<int> v1(nums,nums+SIZE(nums,int));
	//����,��[]��v.at������������������±�Խ��,v.at�����쳣,��[]���� 
	for(int i = 0;i < v1.size();i++)  cout << v1[i] << " ";
	cout << endl;
	
	for(int i = 0;i < v1.size();i++)  cout << v1.at(i) << " ";
	cout << endl;
	
	//v.front()����v�е�һ��Ԫ��,v.back()�������һ��Ԫ�� 
	cout << "v1.front() = " << v1.front() << endl;
	cout << "v1.back() = " << v1.back() << endl;
}

void charu(){
	int nums[] = {1,2,3,4,5,6,7,8,9,0};
	vector<int> v1(nums,nums+SIZE(nums,int));
	
	//��β������һ��Ԫ�� 
	v1.push_back(16);
	cout << "v1:" << endl;print(v1);
	
	//�������ָ��λ��ǰ�����һ��Ԫ��
	v1.insert(v1.begin()+2,23);	//�ڵ�����Ԫ��ǰ�����Ԫ��23 
	cout << "v1:" << endl;print(v1);
	//���䣺֧�������±���ʵģ�һ�㶼֧���������
	//֧��������ʵ���������������ֱ��+2 +4 -8 ����
	
	//ɾ��ָ����ָ����Χ��Ԫ��
	v1.erase(v1.begin());
	cout << "v1:" << endl;print(v1);
	v1.erase(v1.begin()+1,v1.begin()+3);	//ɾ���ӵ�һ���������ڶ����������������ڶ������� 
	cout << "v1:" << endl;print(v1); 
	
	//v.clear����ɾ������Ԫ��
	v1.clear();
	cout << "v1.size() = " << v1.size() << endl;
	cout << "v1.capacity() = " << v1.capacity() << endl;
}
