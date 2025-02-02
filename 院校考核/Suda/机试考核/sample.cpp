
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

/**********************************************************
  *                          ע    ��
  * 1���������޸Ĵ��ļ���ԭ�еĳ������
  * 2����������Ĳ��Դ���main����֮ǰ���κεط�����κδ��빩����⺯������
  * 3�����������ļ��а���C++���Ե�����ͷ�ļ�
  * 4����֤�ύ�ĳ�������ܱ���ͨ�������벻���Ĵ���ֱ����Ϊ0��
  * 5�����ĳ���ʱʹ��visual studio 2019���뻷�������Ĺ��̲�������Ϊ�����������ǿ��Բ��õı��벻ͬ����������
  * 6������ύ�����ļ�ʱ�����Լ��Ĳ��Դ���main��������ע��
  **********************************************************/

  //-----------------------------------------------------------
  // ˵���������1
  // ������: getMostFrequent()
  //������const string &numStr:  ���������ַ���
  //����ֵ������Ҫ��������ַ���
  //-----------------------------------------------------------
string getMostFrequent(const string& numStr)
{
	string resultStr = "";

	return resultStr;
}

//-----------------------------------------------------------
// ˵���������2
// ������: getTrgNum()
//������const vector<unsigned int> & vec_uint:  ����������
//����ֵ����������Ԫ�ع��ɶ��׵Ȳ�������ȱ�ٵ�����
//-----------------------------------------------------------
unsigned int getTrgNum(const vector<unsigned int>& vec_uint)
{
	unsigned int item = 0;   // ȱ�ٵ�����

	return item;
}

//-----------------------------------------------------------
// ˵���������3
// ������: getMostWeight()
//������const string& wordStr: һ��ֻ�����ո����ĸ���ַ���
//����ֵ���������������Ȩ��ֵ
//-----------------------------------------------------------
float getMostWeight(const string& wordStr)
{
	float value = 0;

	return value;
}

//-----------------------------------------------------------
// ˵���������4
// ������: isSameCage()
//������unsigned int heads: ͷ������
//          unsigned int feet: �ŵ�����
//����ֵ��true---��ʾ����ͬ�������н⣬false---��ʾ����ͬ�������޽�
//-----------------------------------------------------------
bool isSameCage(unsigned int heads, unsigned int feet)
{
	bool flag = true;    // Ĭ���޽�


	return  flag;
}

//=================================================
// ˵���������5
//=================================================
struct Node {		// ����������
	int entry;          //������
	Node* next;       //ָ����
	Node(int data) {
		entry = data;
		next = NULL;
	}
};

class LinkedList {		// ��������
private:
	Node* head;      //�������ͷָ��
	
public:
	LinkedList(int a[], int n) {    //������n��Ԫ�صĴ�ͷ���ĵ�����	
		head = new Node(0);
		Node* r = head, *s = NULL;
		for (int i = 0; i < n; i++) {
			s = new Node(0); s->entry = a[i];
			r->next = s; r = s;
		}
		r->next = NULL;
	}

	~LinkedList() {   //��������
		Node* q = NULL, *p = head;
		while (p != NULL) {
			q = p;
			p = p->next;
			delete q;
		}
	}

	void traverse() {  // �����ͷ��㵥����������ֵ	
		Node* p = head->next;
		while (p != NULL) {
			cout << p->entry << " ";
			p = p->next;
		}
		cout << endl;
	}

	//-----------------------------------------------------------
	// ˵����1�������5����Ҫ����������������
	//           2���������ӳ�Ա�������������޸��Ѿ����ڵĳ�Ա����
	// ������: re_arrange()
	// ��������
	// ����ֵ����
	//-----------------------------------------------------------
	void re_arrange() {	// ��Ҫ����������������

	}
};


//=================================================
// ˵���������6
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
	BinaryTree() {  // ���캯��
		root = NULL;
	}

	~BinaryTree() {  // ��������
		release(root);
	}

	void release(BinaryNode*& bt) {// �Ƿ�������ĵݹ��Ա����
		if (bt) {
			release(bt->left);
			release(bt->right);
			delete bt;
			bt = NULL;
		}
	}

	BinaryNode* recursive_create(string& preorder) { // ���������ַ��������������ĵݹ��Ա����
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

	void create(string preorder) {  // �����������ĳ�Ա����
		root = recursive_create(preorder);
	}
	   
	//-----------------------------------------------------------
	// ˵���������6������ֵΪx�Ľ�㵽���������Ҷ�ӵ�·������
	// ��ʾ���������ӳ�Ա�������������޸��Ѿ����ڵĳ�Ա����
	// ������: closestleaf()
	// ������char x: ����ֵ
	// ����ֵ��ֵΪx�Ľ�㵽���������Ҷ�ӵ�·������
	//-----------------------------------------------------------
	int closestleaf(char x) {

		return 0;
	}
};




//-----------------------------------------------------------
// ˵���������7
// ������: getNumOfColoredScheme()
//������unsigned int n: ��������
//          unsigned int k: ��ͬ��ɫ����
//����ֵ��������ĿҪ���Ϳɫ��������
//-----------------------------------------------------------
unsigned long  getNumOfColoredScheme(unsigned int n, unsigned int k)
{
	unsigned long countSum = 0;



	return countSum;
}

//-----------------------------------------------------------
// ˵���������8
// ������: getNumOfBallCombinations()
//������unsigned int n: �÷�ֵ
//����ֵ��������ĿҪ���С���������
//-----------------------------------------------------------
unsigned long getNumOfBallCombinations(unsigned int scores)
{
	unsigned long count = 0;


	return count;
}


//=====�����ǲ��Դ����������Լ��Ĳ��Դ�������ڴ�main������=========
//=====�Լ��Ĳ��Դ�������ڴ�main������========
//=====����ύʱ��ע�ʹ�main����=========
int main()
{


	return 0;
}
