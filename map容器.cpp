#include<iostream>
#include<cstdio>
#include<map>

using namespace std;

void chushihua();		//map���ó�ʼ���븳ֵ���� 

void print(map<int,char> ma){
	for(map<int,char>::iterator it = ma.begin();it != ma.end();it++){
		printf("%-5d%c\n",(*it).first,(*it).second);
	}
	cout << endl;
}
int main(){
	chushihua();
	
	return 0;
}

void chushihua(){
	map<int,char> ma;
	
	//����Ԫ��,��һ�� 
	ma.insert(pair<int,char>(101,'e')); 
	ma.insert(pair<int,char>(97,'a')); 
	ma.insert(pair<int,char>(112,'p')); 
	ma.insert(pair<int,char>(99,'c')); 
	ma.insert(pair<int,char>(111,'o')); 
	//�ڶ���
	ma.insert(make_pair(98,'b'));
	//������
	ma.insert(map<int,char>::value_type(100,'d'));
	print(ma);
	//������,���ǵ�������ǰ�������е㲻ͬ
	//�����ֲ���ʱ��������keyֵ�����ڣ���ᴴ��pair�������map
	//������ڣ�����޸ĸ�keyֵ��Ӧ��valueֵ 
	ma[102] = 'f';
	ma[97] = 'h';
	//���ܲ���keyֵ��ͬ��Ԫ��,map.insert()�ķ���ֵΪpair<iterator,bool>
	pair<map<int,char>::iterator,bool> ret = ma.insert(make_pair(102,'g'));
	if(ret.second)  cout << "Insert data successfully." << endl;
	else			cout << "Insert data failed."  << endl;		//��Ϊ�Ѿ�����keyֵΪ102��Ԫ�أ����Ի�ִ��������� 
	print(ma);
	
	//������ͨ��map[key]�ķ�ʽ��ӡvalueֵ,ע����������ڸ�keyֵ�������map����Ӹ�Ԫ�أ����Ҹ�Ԫ�ص�valueΪĬ��ֵ
	cout << "ma[98] = " << ma[98] << endl; 
}
