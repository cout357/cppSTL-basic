#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

class date{
public:
	int year;
	int month;
	int day;
	
};

//�ص�����������for_eachӦ��������ÿ��Ԫ��,���������е�Ԫ�ؿ������û��Զ�������� 
void printVf(float vf){
	printf("%f\n",vf);
	
}

void printVf2(date vf2){
	cout << vf2.year <<"," << vf2.month << "," << vf2.day << endl;
}



int main(){
	/*
	vector<float> vf;
	vf.push_back(87.5f);	//������ĩβ���Ԫ�� 
	vf.push_back(89.32f);
	vf.push_back(91.2f);
	vf.push_back(92.0f);
	
	vector<float>::iterator pBegin = vf.begin();
	vector<float>::iterator pEnd = vf.end();
	
	//ǰ����������������Ӧ�ĵ����������һ���ص�������ע�ⲻ�üӿո�ֻҪд���������ɣ� 
	for_each(pBegin,pEnd,printVf);
	*/
	
	//�����Զ��庯�� 
	vector<date> vf2;
	vf2.push_back({2018,1,21});
	vf2.push_back({2017,2,22});
	vf2.push_back({2016,4,23});
	vf2.push_back({2015,5,24});
	
	vector<date>::iterator p2Begin = vf2.begin();
	vector<date>::iterator p2End = vf2.end();
	
	for_each(p2Begin,p2End,printVf2); 
	
	return 0;
}
