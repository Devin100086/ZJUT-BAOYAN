
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

/**********************************************************
  *                          注    意
  * 1、不允许修改此文件中原有的程序代码
  * 2、可以在你的测试代码main函数之前的任何地方添加任何代码供编程题函数调用
  * 3、不允许在文件中包含C++语言的万能头文件
  * 4、保证提交的程序代码能编译通过，编译不过的代码直接判为0分
  * 5、批阅程序时使用visual studio 2019编译环境，批阅过程不处理因为编译器与你们考试采用的编译不同产生的问题
  * 6、最后提交程序文件时，把自己的测试代码main函数整体注释
  **********************************************************/

  //-----------------------------------------------------------
  // 说明：编程题1
  // 函数名: getMostFrequent()
  //参数：const string &numStr:  整数序列字符串
  //返回值：满足要求的整数字符串
  //-----------------------------------------------------------
string getMostFrequent(const string& numStr)
{
	string resultStr = "";

	return resultStr;
}

//-----------------------------------------------------------
// 说明：编程题2
// 函数名: getTrgNum()
//参数：const vector<unsigned int> & vec_uint:  正整数向量
//返回值：整数向量元素构成二阶等差数列所缺少的整数
//-----------------------------------------------------------
unsigned int getTrgNum(const vector<unsigned int>& vec_uint)
{
	unsigned int item = 0;   // 缺少的整数

	return item;
}

//-----------------------------------------------------------
// 说明：编程题3
// 函数名: getMostWeight()
//参数：const string& wordStr: 一个只包含空格和字母的字符串
//返回值：单词序列中最大权重值
//-----------------------------------------------------------
float getMostWeight(const string& wordStr)
{
	float value = 0;

	return value;
}

//-----------------------------------------------------------
// 说明：编程题4
// 函数名: isSameCage()
//参数：unsigned int heads: 头的数量
//          unsigned int feet: 脚的数量
//返回值：true---表示鸡兔同笼问题有解，false---表示鸡兔同笼问题无解
//-----------------------------------------------------------
bool isSameCage(unsigned int heads, unsigned int feet)
{
	bool flag = true;    // 默认无解


	return  flag;
}

//=================================================
// 说明：编程题5
//=================================================
struct Node {		// 单链表结点类
	int entry;          //数据域
	Node* next;       //指针域
	Node(int data) {
		entry = data;
		next = NULL;
	}
};

class LinkedList {		// 单链表类
private:
	Node* head;      //单链表的头指针
	
public:
	LinkedList(int a[], int n) {    //建立有n个元素的带头结点的单链表	
		head = new Node(0);
		Node* r = head, *s = NULL;
		for (int i = 0; i < n; i++) {
			s = new Node(0); s->entry = a[i];
			r->next = s; r = s;
		}
		r->next = NULL;
	}

	~LinkedList() {   //析构函数
		Node* q = NULL, *p = head;
		while (p != NULL) {
			q = p;
			p = p->next;
			delete q;
		}
	}

	void traverse() {  // 输出带头结点单链表中所有值	
		Node* p = head->next;
		while (p != NULL) {
			cout << p->entry << " ";
			p = p->next;
		}
		cout << endl;
	}

	//-----------------------------------------------------------
	// 说明：1、编程题5，按要求对链表结点进行重排
	//           2、可以增加成员函数，但不得修改已经存在的成员函数
	// 函数名: re_arrange()
	// 参数：无
	// 返回值：无
	//-----------------------------------------------------------
	void re_arrange() {	// 按要求对链表结点进行重排

	}
};


//=================================================
// 说明：编程题6
//=================================================
struct BinaryNode {
	char data;
	BinaryNode* left, *right;
	BinaryNode(char entry) {
		data = entry;
		left = NULL;
		right = NULL;
	}
};

class BinaryTree {
private:
	BinaryNode* root;
public:
	BinaryTree() {  // 构造函数
		root = NULL;
	}

	~BinaryTree() {  // 析构函数
		release(root);
	}

	void release(BinaryNode*& bt) {// 是否二叉树的递归成员函数
		if (bt) {
			release(bt->left);
			release(bt->right);
			delete bt;
			bt = NULL;
		}
	}

	BinaryNode* recursive_create(string& preorder) { // 根据先序字符串创建二叉树的递归成员函数
		if (preorder.empty())
			return NULL;
		char data = preorder[0];
		preorder.erase(0, 1);
		if (data == '#')
			return NULL;
		else {
			BinaryNode* new_root = new BinaryNode(data);
			new_root->left = recursive_create(preorder);
			new_root->right = recursive_create(preorder);
			return new_root;
		}
	}

	void create(string preorder) {  // 创建二叉树的成员函数
		root = recursive_create(preorder);
	}
	   
	//-----------------------------------------------------------
	// 说明：编程题6，返回值为x的结点到离它最近的叶子的路径长度
	// 提示：可以增加成员函数，但不得修改已经存在的成员函数
	// 函数名: closestleaf()
	// 参数：char x: 结点的值
	// 返回值：值为x的结点到离它最近的叶子的路径长度
	//-----------------------------------------------------------
	int closestleaf(char x) {

		return 0;
	}
};




//-----------------------------------------------------------
// 说明：编程题7
// 函数名: getNumOfColoredScheme()
//参数：unsigned int n: 房子数量
//          unsigned int k: 不同颜色种量
//返回值：符合题目要求的涂色方案数量
//-----------------------------------------------------------
unsigned long  getNumOfColoredScheme(unsigned int n, unsigned int k)
{
	unsigned long countSum = 0;



	return countSum;
}

//-----------------------------------------------------------
// 说明：编程题8
// 函数名: getNumOfBallCombinations()
//参数：unsigned int n: 得分值
//返回值：符合题目要求的小球组合数量
//-----------------------------------------------------------
unsigned long getNumOfBallCombinations(unsigned int scores)
{
	unsigned long count = 0;


	return count;
}


//=====以下是测试代码样例，自己的测试代码添加在此main函数中=========
//=====自己的测试代码添加在此main函数中========
//=====最后提交时请注释此main函数=========
int main()
{


	return 0;
}
