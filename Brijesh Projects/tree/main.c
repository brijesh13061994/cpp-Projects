#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<stdbool.h>


#define Left  0
#define Right 1

struct treenode{
int data;
struct treenode *left,*right;
};

typedef struct treenode treenode;
void printSpace(int n)
{
    
    while(n)
    {
        printf("\t");
        n--;
    }
}
void printTree(treenode * node,int n)
{
    
    if(node==NULL)
    {   printSpace(n);
        printf("--NULL\n");
        return ;
    }
    //printSpace(n);
    printTree(node->left,n+1);
    printSpace(n);
    printf("--%d \n",node->data);
    //printSpace(n);
    printTree(node->right,n+1);
    

    return;


}

treenode * create_treenode(int data)
{
    treenode * result=(treenode*)malloc(sizeof(treenode));
    if(result!=NULL)
    {
        result->left=NULL;
        result->right=NULL;
        result->data= data;
        printf("\nNode Created data=  %d \n",result->data);
        return result;
    }
    else 
    printf("Failed to create a node with data  %d \n",data);
    
}

void add_node_to_bst(treenode * temp_head, int data)
{

    if( temp_head->data < data )
    {   
        if(temp_head->right == NULL)
            temp_head->right = create_treenode(data);
        else
            add_node_to_bst(temp_head->right,data);
        return;
    }
    
    else if( temp_head->data > data )
    {
        if(temp_head->left == NULL)
            temp_head->left = create_treenode(data);
        else
            add_node_to_bst(temp_head->left,data);
        return;
        
    }

    // else if((temp_head->data > data) && (temp_head->left!=NULL))
    // {
    // add_node_to_bst(temp_head->left,data);
    
    // }

    // else if( (temp_head->data > data) && (temp_head->right!=NULL))
    // {
    
    // return;
    // }



}

void create_random_tree()
{
     treenode *n1,*n2,*n3,*n4,*n5,*n6,*n7,*n8,*n9,*n10,*n11,*n12,*n13,*n14,*n15;

    n1=create_treenode(1);
    n2=create_treenode(2);
    n3=create_treenode(3);
    n4=create_treenode(4);
    n5=create_treenode(5);
    n6=create_treenode(6);
    n7=create_treenode(7);
    n8=create_treenode(8);
    n9=create_treenode(9);
    n10=create_treenode(10);
    n11=create_treenode(10);
    n12=create_treenode(12);
    n13=create_treenode(13);
    n14=create_treenode(14);
    n15=create_treenode(15);


    n1->left=n2;
    n1->right=n3;
    
    n2->left=n4;
    n2->right=n5;
    
    n3->left=n6;
    n3->right=n7;

    n6->left=n10;
    n6->right=n11;
    
    n7->left=n12;
    n7->right=n13;

    n4->left=n8;
    n4->right=n9;
    
    n5->left=n14;
    n5->right=n15;


printTree(n1,0);

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);
    free(n6);
    free(n7);
    free(n8);
    free(n9);
    free(n10);
    free(n11);
    free(n12);
    free(n13);
    free(n14);
    free(n15);
}

void create_binary_search_tree(int * arr,int n)
{
    int i;
    treenode * bst_head = create_treenode(arr[0]);
    for(i=1;i<n;i++)
    {
        add_node_to_bst(bst_head,arr[i]);

    }
    printTree(bst_head,0);


}
int main()
{
    int num;
    //system("cls");
    printf("\n\n\nHello Welcome to the tree\n");
    //create_random_tree();
    int arr[]={66,1,4,55,5,7,11,9,22,44,88};
    int size = sizeof(arr)/sizeof(int);

    create_binary_search_tree(arr,size);
    

    return 0;

}