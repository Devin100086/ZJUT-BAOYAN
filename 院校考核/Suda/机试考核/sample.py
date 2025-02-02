def getMostFrequent(lst):
    pass

def getTrgNum(lst):
    pass


def getMostWeight(words):
    pass


def isSameCage(heads,feet):
    pass

class Node:  # 单链表结点类
    def __init__(self, data, link=None):
        self.entry = data  # 数据域
        self.next = link   # 指针域


class LinkedList:   # 单链表类
    def __init__(self):
        self._head = Node(None)  # 创建头结点

    def create(self, py_lst):  # 通过列表py_lst创建单链表
        r = self._head
        for v in py_lst:
            new_node = Node(v)
            r.next = new_node
            r = new_node

    def traverse(self):  # 输出带头结点单链表中所有值
        p = self._head.next
        while p:
            print(p.entry, end=" ")
            p = p.next
        print()

    def re_arrange(self):  # 按要求对链表结点进行重排
        pass


class BinaryNode:
    def __init__(self, data="#", left=None, right=None):
        self.data = data
        self.left = left
        self.right = right


class BinaryTree:
    def __init__(self):
        self._root = None

    def create(self, pre):
        self._root = self.recursive_create(pre)

    def recursive_create(self, preorder):
        if len(preorder) == 0:
            return None
        data = preorder.pop(0)
        if data == '#':
            return None
        else:
            new_root = BinaryNode(data)
            new_root.left = self.recursive_create(preorder)
            new_root.right = self.recursive_create(preorder)
            return new_root

    #  -----------------------------------------------------------
    # 说明：编程题6，返回值为x的结点到离它最近的叶子的路径长度
    # 提示：可以增加成员函数，但不得修改已经存在的成员函数
    # 函数名: closestleaf()
    # 参数：x: 字符类型，表示结点的值
    # 返回值：整型，表示值为x的结点到离它最近的叶子的路径长度
    # -----------------------------------------------------------
    def closestleaf(self, x):
        pass



def func7(n,k):
    pass

def func8(score):
    pass


if __name__ == "__main__":
    print(getMostFrequent("60, 36, 1, 49, 135, 35, 2"))
    print(getMostFrequent("60, 36, 235, 122, 3, 17, 235, 2"))

    print(getTrgNum([1, 3, 6, 15, 21]))
    print(getTrgNum([1, 4,7,11,16]))

    print(getMostWeight("This is a test"))
    print(getMostWeight("This is a python program"))

    print(isSameCage(35,94))
    print(isSameCage(4,2))

    lst = LinkedList()
    lst.create([1, 2, 3, 4, 5])
    lst.re_arrange()
    lst.traverse()

    lst = LinkedList()
    lst.create([1, 2, 3, 4, 5, 6])
    lst.re_arrange()
    lst.traverse()

    bt = BinaryTree()
    lst = list("AaB##EF###bG##h##")
    bt.create(lst)
    print(bt.closestleaf('b'))

    bt = BinaryTree()
    lst = list("124##5#7##36###")
    bt.create(lst)
    print(bt.closestleaf('7'))

    print(func7(4,3))
    print(func7(8,10))

    print(func8(15))
    print(func8(0))








