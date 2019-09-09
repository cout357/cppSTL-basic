#include<iostream>
#include<set>

using namespace std;

void print(set<int> s){
	for(set<int>::iterator it = s.begin();it != s.end();it++){
		cout << *it << " ";
	}
	cout << endl;
}

void chushihua();		//set�������ó�ʼ������ 
void charu();			//set�������ò���ɾ������
void chazhao();			//set�������ò��Ҳ��� 

int main(){
	//chushihua();
	//charu();
	chazhao();
	
	return 0;
}

void chushihua(){
	set<int> s1;	//Ĭ�ϴ�С�����Զ����� 
	s1.insert(2);		//���Ԫ�� 
	s1.insert(5);
	s1.insert(1);
	s1.insert(7);
	s1.insert(4);
	print(s1);
	set<int> s2(s1);		//�������� 
	print(s2);
	set<int> s3 = s2;		//������=����� 
	print(s3);
}

void charu(){
	set<int> s1;
	//����һ��2 ,��Ϊ���Զ��������Բ���Ҫָ��λ�� 
	s1.insert(2);
	s1.insert(5);
	s1.insert(1);
	//ɾ��ָ����������Ԫ��,�᷵����һ��Ԫ�صĵ����� 
	s1.erase(s1.begin());
	print(s1);
	//ɾ��s1��ֵΪ5��Ԫ��
	s1.erase(5); 
	print(s1);
	//ɾ��ָ�������ڵ�Ԫ�� ,������һ��Ԫ�صĵ����� 
	s1.erase(s1.begin(),s1.end());
	//�������Ԫ�� 
	s1.clear();
}

void chazhao(){
	set<int> s1;	 
	s1.insert(2);		 
	s1.insert(5);
	s1.insert(1);
	s1.insert(7);
	s1.insert(4);
	
	//find()���ڲ���key�Ƿ���ڣ������ڣ��򷵻ظü���Ԫ�صĵ�����,��������,����map.end() 
	set<int>::iterator sit = s1.find(2);
	if(sit == s1.end())
		cout << "no find." << endl;
	else
		cout << *sit << endl;
	
	//lower_bound()���ش��ڵ��ڲ���ֵ�ĵ�һ��Ԫ�صĵ�����,�������򷵻�map.end() 
	sit = s1.lower_bound(2);
	if(sit == s1.end())
		cout << "no find." << endl;
	else
		cout << *sit << endl; 
	
	//upper_bound()���ص�һ�����ڲ���ֵ��Ԫ�صĵ�����,�������򷵻�map.end()
	sit = s1.upper_bound(2);
	if(sit == s1.end())
		cout << "no find." << endl;
	else 
		cout << *sit << endl; 
		
	//equal_rangeͬʱ����lower_bound()��upper_bound()
	pair<set<int>::iterator,set<int>::iterator> myret = s1.equal_range(2);
	if(myret.first == s1.end())
		cout << "no find." << endl;
	else{
		cout << "myret.first = " << *myret.first << endl;
		cout << "myret.second = " << *myret.second << endl;
	}
	
}
