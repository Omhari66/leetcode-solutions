class Solution {
public:
    class Node{
    public:
        string word;
        Node* children[26];
        Node(){
        word="";
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        }
    };
    void insert(Node* root, string& word){
        Node* curr=root;
        for(char ch:word){
            int idx=ch-'a';
            if(curr->children[idx]==NULL){
                curr->children[idx]=new Node();
            }
            curr=curr->children[idx];
        }
        curr->word=word;
    }
        void dfs(int r,int c,Node* node,vector<vector<char>>&board,vector<string>& ans){
            if(r<0||c<0||r>=board.size()||c>=board[0].size()||board[r][c]=='#'){
                return;
            }
            char ch=board[r][c];
            Node* next=node->children[ch-'a'];
            if(next==NULL) return;

            if(next->word!=""){
                ans.push_back(next->word);
                next->word="";
            }
            board[r][c] = '#'; 

        dfs(r + 1, c, next,board,ans);
        dfs(r - 1, c, next,board,ans);
        dfs(r, c + 1, next,board,ans);
        dfs(r, c - 1, next,board,ans);

        board[r][c] = ch;
        }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Node* root=new Node();
        vector<string>ans;
        for(string word:words){

        insert(root,word);
        }
        int rs=board.size();
        int cs=board[0].size();
        for(int r=0;r<rs;r++){
            for(int c=0;c<cs;c++){

        dfs(r,c,root,board,ans);
            }
        }
        return ans;
    }
};