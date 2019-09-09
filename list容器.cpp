#include<iostream>
#include<list>

using namespace std;

void print(list<int> lis);	//打印链表 
void chushihua();			//链表常用初始化操作 
void charu();				//链表常用插入删除操作
void daxiao();				//链表常用大小操作 
void fuzhi();				//链表常用赋值操作 
void paixu();				//链表常用排序反转操作
bool mysort(int i1,int i2); 
 
 //注意，链表有自己的sort（）方法 
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
	list<int> lis2(6,7);	//初始化为六个7,调用的是有参构造 
	list<int> lis3(lis2);	//拷贝构造
	//拷贝指定范围进行初始化 
	list<int> lis4(lis3.begin(),lis3.end());
	cout << "lis4: ";print(lis4);  
} 

void charu(){
	list<int> list1(12,7);
	//尾部插入 
	list1.push_back(6);
	//头部插入
	list1.push_front(2);
	//指定位置插入一个
	print(list1); 
	list1.insert(list1.begin(),9);	//插入在链表头部头部 
	print(list1); 
	
	//尾部删除
	list1.pop_back();
	//头部删除
	list1.pop_front(); 
	print(list1);
	//删除指定位置的元素
	list1.erase(list1.begin());
	print(list1); 
	//删除指定范围的元素
	list1.erase(list1.begin(),list1.end());	//参数只能是迭代器，不能是整型值，所以不能用加减法
	//删除所有元素
	list1.clear();
	
	list1.push_back(2); 
	list1.push_back(3);
	list1.push_back(2);
	list1.push_back(5);
	print(list1);
	//删除所有与之匹配的元素 
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
	list1.resize(12,9);	//重设list大小，并指定默认值 
	print(list1);
} 

void fuzhi(){
	list<int> list1(20,7);
	print(list1);
	list1.assign(10,6);		//先把之前的元素全部清掉,然后赋值为10个6  
	print(list1);
	
	list<int> list2;
	list2 = list1;		//可以用=号直接赋值
	print(list2);
	
	list2.assign(10,3);
	list2.swap(list1);	//交换两个链表
	//front()返回第一个元素，back()返回最后一个元素
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
	 
	//反转链表元素
	list1.reverse();
	cout << "list1:";print(list1); 
	
	//默认排序
	list1.sort();
	cout << "list1:";print(list1); 
	
	//自定义排序 
	list1.sort(mysort);
	cout << "list1:";print(list1);
}

bool mysort(int i1,int i2){
	return i1>i2;
}
