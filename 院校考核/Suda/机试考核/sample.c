
#include <stdio.h>
#include <malloc.h>

/**********************************************************
  *                          注    意                                                                   
  * 1、不允许修改此文件中原有的程序代码
  * 2、可以在你的测试代码main函数之前的任何地方添加任何代码供编程题函数调用
  * 3、不允许在文件中包含C语言的万能头文件
  * 4、保证提交的程序代码能编译通过，编译不过的代码直接判为0分
  * 5、批阅程序时使用visual studio 2019编译环境，批阅过程不处理因为编译器与你们考试采用的编译不同产生的问题
  * 6、最后提交程序文件时，把自己的测试代码main函数整体注释
  **********************************************************/

//-----------------------------------------------------------
// 说明：编程题1
// 函数名: getMostFrequent()
//参数：char* numStr:  整数序列字符串, 输入参数
//          char* resultStr: 满足要求的整数字符串，输出参数
//                          该参数空间足够大，不需要考虑字符串溢出问题
//返回值：结果字符串首地址
//-----------------------------------------------------------
char* getMostFrequent(char* numStr,  char* resultStr)
{

	return resultStr;
}

//-----------------------------------------------------------
// 说明：编程题2
// 函数名: getTrgNum()
//参数：unsigned int arry[]:  正整数数组
//          int num: 整数数组的元素个数，实际参数值必须大于4
//返回值：整数数组元素构成二阶等差数列所缺少的整数
//-----------------------------------------------------------
unsigned int getTrgNum(unsigned int arry[], int num)
{
	unsigned int item = 0;   // 缺少的整数

	return item;
}

//-----------------------------------------------------------
// 说明：编程题3
// 函数名: getMostWeight()
//参数：char* wordStr: 一个只包含空格和字母的字符串
//返回值：单词序列中最大权重值
//-----------------------------------------------------------
float getMostWeight(char* wordStr)
{
	float value = 0;

	return value;
}

//-----------------------------------------------------------
// 说明：编程题4
// 函数名: isSameCage()
//参数：unsigned int heads: 头的数量
//          unsigned int feet: 脚的数量
//返回值：1---表示鸡兔同笼问题有解，0---表示鸡兔同笼问题无解
//-----------------------------------------------------------
int isSameCage(unsigned int heads, unsigned int feet)
{
	int flag = 0;    // 默认无解


	return  flag;
}

//=================================================
// 说明：编程题5
//=================================================
typedef struct Node {	// 单链表结点
	int entry;              //数据域
	struct Node* next;     //指针域	
}Node, *LinkedList;


LinkedList createList(int a[], int n) { //建立有n个元素的带头结点的单链表	
	LinkedList head = (Node*)malloc(sizeof(Node));   // 创建头结点      
	Node* r = head, *s = NULL;
	int i = 0;
	for (i = 0; i < n; i++) {
		s = (Node*)malloc(sizeof(Node));
		if (s == NULL)
			break;
		s->next = NULL;
		s->entry = a[i];
		r->next = s; r = s;
	}
	r->next = NULL;
	return head;
}

void clearList(LinkedList head) {	//链表清空 
	Node* q = NULL, *p = head;
	while (p != NULL)
	{
		q = p;
		p = p->next;
		free(q);
	}
}

void traverseList(LinkedList head)  // 输出带头结点单链表中所有值
{
	Node* p = head->next;
	while (p != NULL) {
		printf("%d ", p->entry);
		p = p->next;
	}
	printf("\n");
}

//-----------------------------------------------------------
// 说明：编程题5，按要求对链表结点进行重排
// 函数名: re_arrange()
//参数：LinkedList head:  链表头节点
//返回值：无
//-----------------------------------------------------------
void re_arrange(LinkedList head) {	// 按要求对链表结点进行重排

}

//=================================================
// 说明：编程题6
//=================================================
typedef struct BinaryNode {
	char data;
	struct BinaryNode* left, *right;
}BinaryNode, *BinaryTree;

//使用先序字符串创建二叉树的递归函数
BinaryNode* recursive_create(char* preorder, int* index) {
	int k = *index;
	char data = preorder[k];
	*index += 1;    // 修改字符串索引
	if (data == '#')
		return NULL;
	else {
		BinaryNode* new_root = (BinaryNode*)malloc(sizeof(BinaryNode));
		if (new_root == NULL)
			return NULL;
		new_root->data = data;
		new_root->left = recursive_create(preorder, index);
		new_root->right = recursive_create(preorder, index);
		return new_root;
	}
}

//根据先序字符串调用递归函数创建二叉树
BinaryNode* createBinaryTree(char* preorder) {
	int index = 0;
	return  (recursive_create(preorder, &index));
}

//释放二叉树的递归函数
BinaryNode* release(BinaryNode* root) {
	if (root) {
		root->left = release(root->left);
		root->right = release(root->right);
		free(root);
		root = NULL;
	}
	return root;
}

//调用递归函数释放二叉树的函数
void clearBinaryTree(BinaryNode* root) {
	release(root);
}

//-----------------------------------------------------------
// 说明：编程题6，返回值为x的结点到离它最近的叶子的路径长度
// 提示：可以添加其他函数供closestleaf()调用 
// 函数名: closestleaf()
// 参数：char x: 结点的值
//       BinaryNode* root: 二叉树根结点
// 返回值：值为x的结点到离它最近的叶子的路径长度
//-----------------------------------------------------------
int closestleaf(BinaryNode* root, char x) 
{
	int  len = 0;    // 路径长度

	return  len;
}


//-----------------------------------------------------------
// 说明：编程题7
// 函数名: getNumOfColoredScheme()
//参数：unsigned int n: 房子数量
//          unsigned int k: 不同颜色种量
//返回值：符合题目要求的涂色方案数量
//-----------------------------------------------------------
unsigned long  getNumOfColoredScheme(unsigned int n, unsigned int k)
{
	unsigned long  countSum = 0;


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


//=====自己的测试代码添加在此main函数中========
//=====最后提交时请注释此main函数=========
int main()
{
	

	return 0;
}
