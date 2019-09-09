#include<iostream>
#include<cstdio>
#include<map>

using namespace std;

void chushihua();		//map常用初始化与赋值操作 

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
	
	//插入元素,第一种 
	ma.insert(pair<int,char>(101,'e')); 
	ma.insert(pair<int,char>(97,'a')); 
	ma.insert(pair<int,char>(112,'p')); 
	ma.insert(pair<int,char>(99,'c')); 
	ma.insert(pair<int,char>(111,'o')); 
	//第二种
	ma.insert(make_pair(98,'b'));
	//第三种
	ma.insert(map<int,char>::value_type(100,'d'));
	print(ma);
	//第四种,但是第四种与前面三种有点不同
	//用这种插入时，当发现key值不存在，则会创建pair对组进入map
	//如果存在，则会修改该key值对应的value值 
	ma[102] = 'f';
	ma[97] = 'h';
	//不能插入key值相同的元素,map.insert()的返回值为pair<iterator,bool>
	pair<map<int,char>::iterator,bool> ret = ma.insert(make_pair(102,'g'));
	if(ret.second)  cout << "Insert data successfully." << endl;
	else			cout << "Insert data failed."  << endl;		//因为已经有了key值为102的元素，所以会执行这条语句 
	print(ma);
	
	//还可以通过map[key]的方式打印value值,注意如果不存在该key值，则会在map中添加该元素，并且该元素的value为默认值
	cout << "ma[98] = " << ma[98] << endl; 
}
