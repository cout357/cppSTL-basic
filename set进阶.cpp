#include<iostream>
#include<set>
#include<string>

using namespace std;

class student{
public:
	student(){
		
	}
	
	student(long long tid,int tage,string tname){
		id = tid;age = tage;name = tname;
	}
	
	long long id;
	int age;
	string name;
};

class mycompare{
public :
	bool operator()(int v1,int v2){
		return v1>v2;		//定义为从大到小排序 
	}
	bool operator()(student s1,student s2){
		return s1.id<s2.id;
	}
		
};

void print(set<int,mycompare> s){
	for(set<int>::iterator it = s.begin();it != s.end();it++)
		cout << *it << " ";
	cout << endl;
}

void print(set<student,mycompare> s){
	for(set<student>::iterator it = s.begin();it != s.end();it++)
		cout << (*it).id << " " << (*it).age << " " << (*it).name << endl;	//*重点 
}
int main(){
	//自定义排序规则 
	set<int,mycompare> s1;
	s1.insert(7);
	s1.insert(2);
	s1.insert(9);
	s1.insert(3);
	s1.insert(1);
	print(s1);
	
	//向set容器存放对象时，需要指定排序规则，不然set不知道该怎么排
	set<student,mycompare> s2;
	s2.insert({2018040101115,17,string("jack")});
	s2.insert({2018040101116,19,string("mark")});
	s2.insert({2018040101117,18,string("mary")});
	print(s2);
	
	//注意，对象查找，查找条件是排序时所用到的值，只要那个值相同，find就认为是同一个对象 
	student stu(2018040101115,20,string("bob"));
	set<student>::iterator sit = s2.find(stu);
	if(sit == s2.end())
		cout << "no find." << endl;
	else
		cout << "s2.find() : " << (*sit).id << " " << (*sit).age << " " << (*sit).name << endl;
	 
	return 0;
}
