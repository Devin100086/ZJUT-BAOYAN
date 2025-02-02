
#include <stdio.h>
#include <malloc.h>

/**********************************************************
  *                          ע    ��                                                                   
  * 1���������޸Ĵ��ļ���ԭ�еĳ������
  * 2����������Ĳ��Դ���main����֮ǰ���κεط�����κδ��빩����⺯������
  * 3�����������ļ��а���C���Ե�����ͷ�ļ�
  * 4����֤�ύ�ĳ�������ܱ���ͨ�������벻���Ĵ���ֱ����Ϊ0��
  * 5�����ĳ���ʱʹ��visual studio 2019���뻷�������Ĺ��̲�������Ϊ�����������ǿ��Բ��õı��벻ͬ����������
  * 6������ύ�����ļ�ʱ�����Լ��Ĳ��Դ���main��������ע��
  **********************************************************/

//-----------------------------------------------------------
// ˵���������1
// ������: getMostFrequent()
//������char* numStr:  ���������ַ���, �������
//          char* resultStr: ����Ҫ��������ַ������������
//                          �ò����ռ��㹻�󣬲���Ҫ�����ַ����������
//����ֵ������ַ����׵�ַ
//-----------------------------------------------------------
char* getMostFrequent(char* numStr,  char* resultStr)
{

	return resultStr;
}

//-----------------------------------------------------------
// ˵���������2
// ������: getTrgNum()
//������unsigned int arry[]:  ����������
//          int num: ���������Ԫ�ظ�����ʵ�ʲ���ֵ�������4
//����ֵ����������Ԫ�ع��ɶ��׵Ȳ�������ȱ�ٵ�����
//-----------------------------------------------------------
unsigned int getTrgNum(unsigned int arry[], int num)
{
	unsigned int item = 0;   // ȱ�ٵ�����

	return item;
}

//-----------------------------------------------------------
// ˵���������3
// ������: getMostWeight()
//������char* wordStr: һ��ֻ�����ո����ĸ���ַ���
//����ֵ���������������Ȩ��ֵ
//-----------------------------------------------------------
float getMostWeight(char* wordStr)
{
	float value = 0;

	return value;
}

//-----------------------------------------------------------
// ˵���������4
// ������: isSameCage()
//������unsigned int heads: ͷ������
//          unsigned int feet: �ŵ�����
//����ֵ��1---��ʾ����ͬ�������н⣬0---��ʾ����ͬ�������޽�
//-----------------------------------------------------------
int isSameCage(unsigned int heads, unsigned int feet)
{
	int flag = 0;    // Ĭ���޽�


	return  flag;
}

//=================================================
// ˵���������5
//=================================================
typedef struct Node {	// ��������
	int entry;              //������
	struct Node* next;     //ָ����	
}Node, *LinkedList;


LinkedList createList(int a[], int n) { //������n��Ԫ�صĴ�ͷ���ĵ�����	
	LinkedList head = (Node*)malloc(sizeof(Node));   // ����ͷ���      
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

void clearList(LinkedList head) {	//������� 
	Node* q = NULL, *p = head;
	while (p != NULL)
	{
		q = p;
		p = p->next;
		free(q);
	}
}

void traverseList(LinkedList head)  // �����ͷ��㵥����������ֵ
{
	Node* p = head->next;
	while (p != NULL) {
		printf("%d ", p->entry);
		p = p->next;
	}
	printf("\n");
}

//-----------------------------------------------------------
// ˵���������5����Ҫ����������������
// ������: re_arrange()
//������LinkedList head:  ����ͷ�ڵ�
//����ֵ����
//-----------------------------------------------------------
void re_arrange(LinkedList head) {	// ��Ҫ����������������

}

//=================================================
// ˵���������6
//=================================================
typedef struct BinaryNode {
	char data;
	struct BinaryNode* left, *right;
}BinaryNode, *BinaryTree;

//ʹ�������ַ��������������ĵݹ麯��
BinaryNode* recursive_create(char* preorder, int* index) {
	int k = *index;
	char data = preorder[k];
	*index += 1;    // �޸��ַ�������
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

//���������ַ������õݹ麯������������
BinaryNode* createBinaryTree(char* preorder) {
	int index = 0;
	return  (recursive_create(preorder, &index));
}

//�ͷŶ������ĵݹ麯��
BinaryNode* release(BinaryNode* root) {
	if (root) {
		root->left = release(root->left);
		root->right = release(root->right);
		free(root);
		root = NULL;
	}
	return root;
}

//���õݹ麯���ͷŶ������ĺ���
void clearBinaryTree(BinaryNode* root) {
	release(root);
}

//-----------------------------------------------------------
// ˵���������6������ֵΪx�Ľ�㵽���������Ҷ�ӵ�·������
// ��ʾ�������������������closestleaf()���� 
// ������: closestleaf()
// ������char x: ����ֵ
//       BinaryNode* root: �����������
// ����ֵ��ֵΪx�Ľ�㵽���������Ҷ�ӵ�·������
//-----------------------------------------------------------
int closestleaf(BinaryNode* root, char x) 
{
	int  len = 0;    // ·������

	return  len;
}


//-----------------------------------------------------------
// ˵���������7
// ������: getNumOfColoredScheme()
//������unsigned int n: ��������
//          unsigned int k: ��ͬ��ɫ����
//����ֵ��������ĿҪ���Ϳɫ��������
//-----------------------------------------------------------
unsigned long  getNumOfColoredScheme(unsigned int n, unsigned int k)
{
	unsigned long  countSum = 0;


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


//=====�Լ��Ĳ��Դ�������ڴ�main������========
//=====����ύʱ��ע�ʹ�main����=========
int main()
{
	

	return 0;
}
