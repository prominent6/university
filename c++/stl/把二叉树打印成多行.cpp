//���ϵ��°����ӡ��������ͬһ��������������
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
        val(x), left(NULL), right(NULL) {
    }
};

class Solution {
public:
//	vector<int> Print(TreeNode* pRoot){
//		vector<int> res;
//		queue<TreeNode*> tmp;
//		TreeNode* ptr=nullptr;
//		if(pRoot==nullptr) return res;
//		tmp.push(pRoot);
//		while(!tmp.empty()){
//			ptr=tmp.front();
//			tmp.pop();
//			res.push_back(ptr->val);
//			if(ptr->left!=nullptr) tmp.push(ptr->left);
//			if(ptr->right!=nullptr) tmp.push(ptr->right);
//		}
//		return res;
//	};
	//�Ƚ�ÿ��ڵ��valֵ����һ�������ڣ��ڽ�����ѹ��res��
	vector<vector<int> > Print(TreeNode* pRoot){
		vector<vector<int>> res;
		queue<TreeNode*> tmp;
		TreeNode* ptr=nullptr;
		if(pRoot==nullptr) return res;
		tmp.push(pRoot);
		while(!tmp.empty()){
			vector<int> tmp1;
			int i=0,len=tmp.size();
			while(i++<len){
				ptr=tmp.front();
				tmp.pop();
				tmp1.push_back(ptr->val);
				if(ptr->left!=nullptr) tmp.push(ptr->left);
				if(ptr->right!=nullptr) tmp.push(ptr->right); 
			}
			res.push_back(tmp1);
		}
		return res;
	} 
};

