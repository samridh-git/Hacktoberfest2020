int minValue(Node* root)
{
    int mind = INT_MAX;
    while(root){
        mind = min(root->data,mind);
        root=root->left;
    }
    return mind;
}
