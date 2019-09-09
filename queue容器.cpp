#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

/*队列特点: 
	不能遍历,不支持随机访问
	不提供迭代器
	和栈（stack）很像，但它是先进先出
*/ 

/*练手作业:
	queue容器存放指针
	queue容器存放stack容器
	最后打印
*/
 
int main(){
	//初始化 
	queue<int> q1;
	queue<int> q2(q1);
	
	//从队尾添加元素，和排队一样 
	q1.push(10);
	q1.push(20);
	q1.push(30);
	q1.push(40);
	q1.push(50);
	
	//返回队尾元素 
	cout << "q1.back() = " << q1.back() << endl;
	//返回队头元素 
	cout << "q1.front() = " << q1.front() << endl;
	
	while(!q1.empty()){
		cout << q1.front() << " ";
		q1.pop();	//从队头删除一个元素 
	}
	cout << endl;
	
	return 0;
}
