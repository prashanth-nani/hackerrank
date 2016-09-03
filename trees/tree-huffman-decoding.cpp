void decode_huff(node * root,string s)
{
    int pos = 0;
    while(s[pos] != '\0')
    {
        node* p = root;
        while(p->data == '\0')
        {
            if(s[pos] == '0')
                p = p->left;
            else
                p = p->right;
            pos++;
        }
        cout<< p->data;
        p = root;
    }
}