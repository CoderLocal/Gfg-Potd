class Solution
{
    public:
     void kDistantFromLeafUtil(Node* node,int &counter,bool visited[],int pathLen,int k)
    {
    	if (node==NULL) return;
    	visited[pathLen] = false;
    	pathLen++;
    	if (node->left == NULL && node->right == NULL &&
    		pathLen-k-1 >= 0 && visited[pathLen-k-1] == false)
    	{
    		counter++;
    		visited[pathLen-k-1] = true;
    		return;
    	}
    	kDistantFromLeafUtil(node->left, counter, visited, pathLen, k);
    	kDistantFromLeafUtil(node->right, counter, visited, pathLen, k);
    }
    int printKDistantfromLeaf(Node* root, int k)
    {
    	int counter = 0;
    	bool visited[MAX_HEIGHT] = {false};
    	kDistantFromLeafUtil(root, counter, visited, 0, k);
    	return counter; 
    	
    }
};
