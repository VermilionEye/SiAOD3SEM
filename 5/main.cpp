#include<iostream>

using namespace std;
//Вариант 30
//P.S. Не понял, каким образом я должен был находить сумму листьев при типе данных
//String, поэтому значение узла дерева у меня целочисленное
class BST
{
    struct node
    {
        int key;
        node* left;
        node* right;
        int height;
    };



    node* insert(int x, node* t)
    {
        if(t == NULL)
        {
            t = new node;
            t->key = x;
            t->height = 0;
            t->left = t->right = NULL;
        }
        else if(x < t->key)
        {
            t->left = insert(x, t->left);
            if(height(t->left) - height(t->right) == 2)
            {
                if(x < t->left->key)
                    t = singleRightRotate(t);
                else
                    t = doubleRightRotate(t);
            }
        }
        else if(x > t->key)
        {
            t->right = insert(x, t->right);
            if(height(t->right) - height(t->left) == 2)
            {
                if(x > t->right->key)
                    t = singleLeftRotate(t);
                else
                    t = doubleLeftRotate(t);
            }
        }
        t->height = max(height(t->left), height(t->right))+1;
        return t;
    }

    node* singleRightRotate(node* &t)
    {
        node* u = t->left;
        t->left = u->right;
        u->right = t;
        t->height = max(height(t->left), height(t->right))+1;
        u->height = max(height(u->left), t->height)+1;
        return u;
    }

    node* singleLeftRotate(node* &t)
    {
        node* u = t->right;
        t->right = u->left;
        u->left = t;
        t->height = max(height(t->left), height(t->right))+1;
        u->height = max(height(t->right), t->height)+1 ;
        return u;
    }

    node* doubleLeftRotate(node* &t)
    {
        t->right = singleRightRotate(t->right);
        return singleLeftRotate(t);
    }

    node* doubleRightRotate(node* &t)
    {
        t->left = singleLeftRotate(t->left);
        return singleRightRotate(t);
    }

    node* findMin(node* t)
    {
        if(t == NULL)
            return NULL;
        else if(t->left == NULL)
            return t;
        else
            return findMin(t->left);
    }

    node* findMax(node* t)
    {
        if(t == NULL)
            return NULL;
        else if(t->right == NULL)
            return t;
        else
            return findMax(t->right);
    }

    int height(node* t)
    {
        return (t == NULL ? -1 : t->height);
    }

    int getBalance(node* t)
    {
        if(t == NULL)
            return 0;
        else
            return height(t->left) - height(t->right);
    }

    void print_Tree(node * p,int level)
    {
        if(p)
        {
            print_Tree(p->left,level + 1);
            for(int i = 0;i< level;i++) cout<<"   ";
            cout << p->key << endl;
            print_Tree(p->right,level + 1);
        }
    }




        bool isLeaf(node *node) {
            if (node == NULL)
                return false;
            if (node->left == NULL && node->right == NULL)
                return true;
            return false;
        }




public:
    node* root;
    BST()
    {
        root = NULL;
    }

    void insert(int x)
    {
        root = insert(x, root);
    }

    void display()
    {
        print_Tree(root, 0);
        cout << endl;
    }

    void Normal(node *root) {
        if (root == NULL) {
            return;
        }
        cout << root->key << " ";
        Normal(root->left);
        Normal(root->right);
    }
    void Symmetrical(node *root) {
        if (root == NULL) {
            return;
        }
        Normal(root->left);
        cout << root->key << " ";
        Normal(root->right);
    }
    void Reverse(node *root) {
        if (root == NULL) {
            return;
        }
        Normal(root->left);
        Normal(root->right);
        cout << root->key << " ";
    }

    int LeavesSum(node *root) {
        if (root == NULL) {
            return 0;
        }
        else if (isLeaf(root)) {
            return root->key;
        }
        else {
            return LeavesSum(root->left) + LeavesSum(root->right);
        }
    }

    int Sum(node *root) {
        if (root == NULL) {
            return 0;
        }
        return (root->key + Sum(root->left) + Sum(root->right));
    }
};

int main()
{
    BST t;
    //Ввод дерева. При желании можно загнать в цикл
    t.insert(20);
    t.insert(25);
    t.insert(15);
    t.insert(10);
    t.insert(30);
    t.insert(5);
    t.insert(35);
    t.insert(67);
    t.insert(43);
    t.insert(21);
    t.insert(10);
    t.insert(89);
    t.insert(38);
    t.insert(69);
    cout<<"Symmetrical:\n";
    t.Symmetrical(t.root);
    cout<<"Reverse: \n";
    t.Reverse(t.root);
    cout<<"Sum of nodes in tree\n";
    cout<<t.Sum(t.root);
    cout<<"Sum of leaves in tree:\n";
    cout<<t.LeavesSum(t.root);
}
