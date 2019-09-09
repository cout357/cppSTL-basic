#include<iostream>
#include<cstdio>
#include<deque>

using namespace std;

//deque是方便双向插入的容器
/*特性总结:
	双端插入和删除元素效率较高
	指定位置插入也会导致数据元素移动，降低效率
	可随机存取,效率高
*/ 
 
void print(deque<int> deq){
	for(int i = 0;i < deq.size();i++)
		cout << deq[i] << " ";
	cout << endl;
}

void chushihua();		//常用初始化操作
void fuzhi();			//常用赋值及大小操作
void charu(); 
int main(){
	//chushihua();
	//fuzhi();
	charu(); 
	return 0;
}

void chushihua(){
	deque<int> deq1;
	
	deque<int> deq2(20,7);
	cout << "deq2 :";print(deq2);
	
	deque<int> deq3(deq2.begin(),deq2.end());
	cout << "deq3 :";print(deq3);
	
	deque<int> deq4(deq3);
	cout << "deq4 :";print(deq4);
}

void fuzhi(){
	deque<int> deq1;
	deq1.assign(20,6);
	cout << "deq1 :";print(deq1);
	
	deque<int> deq2;
	deq2.assign(deq1.begin(),deq1.end());
	cout << "deq2 :";print(deq2);
	
	deque<int> deq3;
	deq3 = deq2;
	cout << "deq3 :";print(deq3); 
	
	deque<int> deq4;
	deq4.swap(deq3);
	cout << "deq4 :";print(deq4); 
	
	if(deq3.empty())  cout << "empty" << endl;
	else 			  cout << "no empty" << endl;
	
	cout << "deq3.size() = " << deq3.size() << endl;
	cout << "deq4.size() = " << deq4.size() << endl;
	
	//将元素个数重设为5个，如果相比原先增长了，新加的值为默认值，如果减少了，就删去末尾元素 
	deq4.resize(5,3);	//第二个默认值参数可以不加 
}

void charu(){
	deque<int> deq;
	
	//末尾插入
	deq.push_back(3);
	
	//开头插入
	deq.push_front(2);
	//打印 
	print(deq); 
	
	//从末尾删除一个元素 
	deq.pop_back();
	print(deq);
	//从开头删除一个元素 
	deq.pop_front(); 
	print(deq);
}
