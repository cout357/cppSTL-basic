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

void chushihua();	//常用初始化操作 
void fuzhi();		//常用赋值操作 
void daxiao();		//常用大小操作 
void cunqu();		//常用存取数据操作 
void charu();		//常用插入删除操作 
int main(){
	//chushihua(); 
	//fuzhi();
	//daxiao(); 
	//cunqu();
	//charu();
	
	return 0; 
}

void chushihua(){
	//初始化
	vector<int> v1;	//默认构造初始化
	
	//用数组初始化 
	int nums[] = {1,2,3,4,5,6,7,8,9,0};
	vector<int> v2(nums,nums+SIZE(nums,int));
	//用for_each()打印 
	vector<int>::iterator v2Bengin = v2.begin();
	vector<int>::iterator v2End = v2.end();
	cout << "v2:" << endl; 
	for_each(v2Bengin,v2End,printv2);
	cout << endl;
	
	//拷贝指定长度初始化
	vector<int> v3(v2.begin(),v2.end()); 
	cout << "v3:" << endl;print(v3);	//用迭代器打印 
	
	//直接拷贝初始化
	vector<int> v4(v3); 
	cout << "v4:" << endl;print(v4);	//用迭代器打印
	
	//用n个元素初始化
	vector<int> v5(20,7);
	cout << "v5:" << endl;print(v5); 
}
void fuzhi(){
	int nums[] = {1,2,3,4,5,6,7,8,9,0};
	vector<int> v1(nums,nums+SIZE(nums,int));
	
	vector<int> v2;
	//用assign方法对v2进行赋值，注意，这个方法不是替换指定范围内的元素，
	//而是把指定范围内的元素变为v2所有元素 
	v2.assign(v1.begin(),v1.end());
	cout << "v2:" << endl;print(v2);
	
	vector<int> v3;
	//用重载=进行赋值 
	v3 = v2;
	cout << "v3:" << endl;print(v3);
	
	int nums1[] = {3,4,5};
	vector<int> v4(nums1,nums1+SIZE(nums1,int));
	cout << "v4:" << endl;print(v4);
	//用swap把v4和v3的指针交换指向位置 
	v4.swap(v3); 
	cout << "v3:" << endl;print(v3);
	cout << "v4:" << endl;print(v4);
}

void daxiao(){
	int nums[] = {1,2,3,4,5,6,7,8,9,0};
	vector<int> v1(nums,nums+SIZE(nums,int));
	//v.size方法返回v中元素个数 
	cout << "v1.size = " << v1.size() << endl;	//结果为10 
	//v.empty方法用于判断v1是否为空,空返回1，否返回0 
	cout << "v1.empty = " << v1.empty() << endl;
	
	//v.resize用于重新设定v的容器大小，即元素个数，如果大于现有大小，则
	//用默认值填充新位置，小于则删除尾部超出元素 
	//v1.resize(20);
	v1.resize(20,1);	//默认值设为1 
	cout << "v1:" << endl;print(v1);	 
	v1.resize(5);
	cout << "v1:" << endl;print(v1);
	
	//capacity方法返回v的容量，容量大于或等于size即元素个数
	cout << "v1.size = " << v1.size() << endl;	//先看一下size大小 
	cout << "v1.capacity() = " << v1.capacity() << endl;
	
	//提前申请一万个元素内存空间,避免重复复制内容开辟新空间,使程序更高效 
	v1.reserve(10000);
}

void cunqu(){
	int nums[] = {1,2,3,4,5,6,7,8,9,0};
	vector<int> v1(nums,nums+SIZE(nums,int));
	//遍历,用[]或v.at方法，区别在于如果下标越界,v.at会抛异常,而[]不会 
	for(int i = 0;i < v1.size();i++)  cout << v1[i] << " ";
	cout << endl;
	
	for(int i = 0;i < v1.size();i++)  cout << v1.at(i) << " ";
	cout << endl;
	
	//v.front()返回v中第一个元素,v.back()返回最后一个元素 
	cout << "v1.front() = " << v1.front() << endl;
	cout << "v1.back() = " << v1.back() << endl;
}

void charu(){
	int nums[] = {1,2,3,4,5,6,7,8,9,0};
	vector<int> v1(nums,nums+SIZE(nums,int));
	
	//向尾部插入一个元素 
	v1.push_back(16);
	cout << "v1:" << endl;print(v1);
	
	//向迭代器指向位置前面插入一个元素
	v1.insert(v1.begin()+2,23);	//在第三个元素前面插入元素23 
	cout << "v1:" << endl;print(v1);
	//补充：支持数组下标访问的，一般都支持随机访问
	//支持随机访问的容器迭代器可以直接+2 +4 -8 操作
	
	//删除指定或指定范围的元素
	v1.erase(v1.begin());
	cout << "v1:" << endl;print(v1);
	v1.erase(v1.begin()+1,v1.begin()+3);	//删除从第一个参数到第二个参数，不包括第二个参数 
	cout << "v1:" << endl;print(v1); 
	
	//v.clear用于删除所有元素
	v1.clear();
	cout << "v1.size() = " << v1.size() << endl;
	cout << "v1.capacity() = " << v1.capacity() << endl;
}
