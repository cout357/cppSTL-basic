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

//回调函数，告诉for_each应该如何输出每个元素,比如容器中的元素可能是用户自定义的类型 
void printVf(float vf){
	printf("%f\n",vf);
	
}

void printVf2(date vf2){
	cout << vf2.year <<"," << vf2.month << "," << vf2.day << endl;
}



int main(){
	/*
	vector<float> vf;
	vf.push_back(87.5f);	//向容器末尾添加元素 
	vf.push_back(89.32f);
	vf.push_back(91.2f);
	vf.push_back(92.0f);
	
	vector<float>::iterator pBegin = vf.begin();
	vector<float>::iterator pEnd = vf.end();
	
	//前两个参数是容器对应的迭代器，最后一个回调函数，注意不用加空格，只要写函数名即可！ 
	for_each(pBegin,pEnd,printVf);
	*/
	
	//遍历自定义函数 
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
