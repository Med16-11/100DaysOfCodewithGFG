//Vertical Traversal of Binary Tree
vector<int> verticalOrder(Node *root)
    {
        vector<int>ans;
        map<int, vector<int> > m;
        queue<pair<int,Node*>>q;
        q.push(make_pair(0,root));

 
        while (!q.empty()) {
            int pos=q.front().first;
            Node* temp = q.front().second;
            q.pop();
            m[pos].push_back(temp->data);
 
            
            if (temp->left)
                q.push(make_pair(pos-1,temp->left));
            if (temp->right)
                q.push(make_pair(pos+1, temp->right));
        }
 
            for(auto x:m){
                for(auto it:x.second){
                    ans.push_back(it);
                }
            }
        return ans;
    }
