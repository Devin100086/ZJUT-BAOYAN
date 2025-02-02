public class Sample{
	public static void main(String[] args){		
		//=============Testing 1======================================================
		System.out.println(getMostFrequent("60,36,1,49,135,35,2"));
		System.out.println(getMostFrequent("60, 36, 235, 122, 3, 17, 235, 2"));
		System.out.println(getMostFrequent("69, 369, 703,12, 4332, 69, 4332, 91, 6, 3"));
		System.out.println(getMostFrequent("15, 229, 692, 93, 23, 221, 2"));
		System.out.println(getMostFrequent("95, 95, 39, 125, 125, 23, 105, 150, 5"));
		System.out.println(getMostFrequent("9"));
		////=============Testing 2======================================================
		int[] src=new int[]{1,3,6,15,21};
		System.out.println(getTrgNum(src));
		src=new int[]{1,4,7,11,16};
		System.out.println(getTrgNum(src));
		src=new int[]{1,2,4,7,11,22};
		System.out.println(getTrgNum(src));
		//=============Testing 3======================================================
		System.out.println(getMostWeight("This is a test"));
		System.out.println(getMostWeight("This is a python program"));
		System.out.println(getMostWeight("I love program"));
		//=============Testing 4======================================================
		System.out.println(isSameCage(35, 94));
		System.out.println(isSameCage(2, 4));
		System.out.println(isSameCage(4, 2));
		System.out.println(isSameCage(35, 95));
		System.out.println(isSameCage(10, 30));
		//=============Testing 5======================================================
		int[] a=new int[] {11,12,13,14,15,16};
		LnkLst dtLst=new LnkLst(a);
		dtLst.re_arrange();
		System.out.println(dtLst.traverse());        
		a=new int[] {1,2,3,4,5,6};
		dtLst = new LnkLst(a);
		dtLst.re_arrange();
		System.out.println(dtLst.traverse());
		a=new int[]{34,35,37,29,12};
		dtLst = new LnkLst(a);
		dtLst.re_arrange();
		System.out.println(dtLst.traverse());
		System.out.println("**************************************************************");	
		//=============Testing 6======================================================
		String s="AaB##EF###bG##h##";	
		BinaryTree bt =new BinaryTree(s) ;
		System.out.println(bt.closestleaf('a'));
		System.out.println(bt.closestleaf('A'));
		System.out.println("**************************************************************");
		//=============Testing 7======================================================
		ColoringHouse p=new ColoringHouse();
		p.setParams(4, 3);			
		System.out.println(p.color_house());
		p.setParams(5, 6);
		System.out.println(p.color_house());
		p.setParams(8, 10);
		System.out.println(p.color_house());
		//=============Testing 8======================================================
		System.out.println(15+","+compound(15));
		System.out.println(5+","+compound(5));
		System.out.println(25+","+compound(25));
		System.out.println(0+","+compound(0));
	}		
	
	public static String getMostFrequent(String org){
		return null;
	}
		
	public static int getTrgNum(int[] src){
		return -1;
	}
	
	public static double getMostWeight(String lst){
		return -1;
	}
	
	public static boolean isSameCage(int head, int feet){
		return false;
	}
	
	public static int compound(int n){
		return -1;
	}
}

class Node{
	int data;	//data entry
	Node next;
	
	public Node(int dt){
		this.data=dt;
		this.next=null;
	}
}

class LnkLst{
	Node head;
	
	public LnkLst(){
		head=new Node(-1);
	}
	
	public LnkLst(int[] dig){
		this();
		Node mt=head;
		for (int i=0;i<dig.length;i++){
			mt.next=new Node(dig[i]);
			mt=mt.next;
		}
	}
	
	public String traverse(){
		StringBuffer bstr=new StringBuffer("");
		Node mt=head.next;
		while (mt!=null){
			bstr.append(mt.data+" ");
			mt=mt.next;
		}
		return bstr.toString();
	}
	
	public void re_arrange(){
	
		return;
	}
}

//========================================================================================================
class BinaryNode {
	char data;          //data entry
	BinaryNode left,right;       //left and right sub-trees
	
	public BinaryNode(char entry) {
		data = entry;
		left = null;
		right = null;
	}
}

class BinaryTree {	
	BinaryNode root; 	//the root of the binary tree
	
	public BinaryTree(){
		root = null; 
	}
		
	public BinaryTree(String str) {
		this();
		root=recursive_create(new StringBuffer(str));
	}
	
	//create a binary tree using the given pre-order string 
	private static BinaryNode recursive_create(StringBuffer preorder) {		
		char data = preorder.charAt(0);
		preorder.deleteCharAt(0);
		if (data == '#') 
			return null;				
		BinaryNode rt = new BinaryNode(data);
		rt.left=recursive_create(preorder);
		rt.right=recursive_create(preorder);
		return rt;		
	}
	
	
	public int closestleaf(char x) { // find the closest leaf rooted as the node containing 'x'
		return -1;
	}	
}

//===================================================================================================================
class ColoringHouse {
	int id_house;		//the number of house
	int id_color;		//the number of color
	long count;
	
	public ColoringHouse(){
		this.id_color=this.id_house=0;
		this.count=-1;
	}
	
	public void setParams(int h,int c){
		this.id_house=h;
		this.id_color=c;
	}
		
	public long color_house(){
		return -1;
	}
}