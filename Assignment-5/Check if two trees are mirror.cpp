
using System;
using System.Collections;
using System.Collections.Generic;

class GFG{

class Node
{
	public int data;
	public Node left, right;
};


static void inorder(Node n, ref List<int> v)
{
	if (n.left != null)
		inorder(n.left, ref v);

	v.Add(n.data);

	if (n.right != null)
		inorder(n.right, ref v);
}


static bool areMirror(Node a, Node b)
{
	if (a == null && b == null)
		return true;
	if (a == null || b == null)
		return false;


	List<int> v1 = new List<int>();
	List<int> v2 = new List<int>();

	inorder(a, ref v1);
	inorder(b, ref v2);

	if (v1.Count != v2.Count)
		return false;


	for(int i = 0, j = v2.Count - 1; j >= 0;
			i++, j--)

	if (v1[i] != v2[j])
		return false;

	return true;
}


static Node newNode(int data)
{
	Node node = new Node();
	node.data = data;
	node.left = node.right = null;
	return(node);
}


static void Main(string []args)
{
	Node a = newNode(1);
	Node b = newNode(1);

	a.left = newNode(2);
	a.right = newNode(3);
	a.left.left = newNode(4);
	a.left.right = newNode(5);

	b.left = newNode(3);
	b.right = newNode(2);
	b.right.left = newNode(5);
	b.right.right = newNode(4);

	if (areMirror(a, b))
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
}
