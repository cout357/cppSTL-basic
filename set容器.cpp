#include<iostream>
#include<set>

using namespace std;

void print(set<int> s){
	for(set<int>::iterator it = s.begin();it != s.end();it++){
		cout << *it << " ";
	}
	cout << endl;
}

void chushihua();		//set容器常用初始化操作 
void charu();			//set容器常用插入删除操作
void chazhao();			//set容器常用查找操作 

int main(){
	//chushihua();
	//charu();
	chazhao();
	
	return 0;
}

void chushihua(){
	set<int> s1;	//默认从小到大自动排序 
	s1.insert(2);		//添加元素 
	s1.insert(5);
	s1.insert(1);
	s1.insert(7);
	s1.insert(4);
	print(s1);
	set<int> s2(s1);		//拷贝构造 
	print(s2);
	set<int> s3 = s2;		//重载了=运算符 
	print(s3);
}

void charu(){
	set<int> s1;
	//插入一个2 ,因为会自动排序，所以不需要指定位置 
	s1.insert(2);
	s1.insert(5);
	s1.insert(1);
	//删除指定迭代器的元素,会返回下一个元素的迭代器 
	s1.erase(s1.begin());
	print(s1);
	//删除s1中值为5的元素
	s1.erase(5); 
	print(s1);
	//删除指定区间内的元素 ,返回下一个元素的迭代器 
	s1.erase(s1.begin(),s1.end());
	//清除所有元素 
	s1.clear();
}

void chazhao(){
	set<int> s1;	 
	s1.insert(2);		 
	s1.insert(5);
	s1.insert(1);
	s1.insert(7);
	s1.insert(4);
	
	//find()用于查找key是否存在，若存在，则返回该键的元素的迭代器,若不存在,返回map.end() 
	set<int>::iterator sit = s1.find(2);
	if(sit == s1.end())
		cout << "no find." << endl;
	else
		cout << *sit << endl;
	
	//lower_bound()返回大于等于查找值的第一个元素的迭代器,不存在则返回map.end() 
	sit = s1.lower_bound(2);
	if(sit == s1.end())
		cout << "no find." << endl;
	else
		cout << *sit << endl; 
	
	//upper_bound()返回第一个大于查找值的元素的迭代器,不存在则返回map.end()
	sit = s1.upper_bound(2);
	if(sit == s1.end())
		cout << "no find." << endl;
	else 
		cout << *sit << endl; 
		
	//equal_range同时返回lower_bound()和upper_bound()
	pair<set<int>::iterator,set<int>::iterator> myret = s1.equal_range(2);
	if(myret.first == s1.end())
		cout << "no find." << endl;
	else{
		cout << "myret.first = " << *myret.first << endl;
		cout << "myret.second = " << *myret.second << endl;
	}
	
}
