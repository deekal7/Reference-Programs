#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

const int ALPHABET_SIZE = 26;

using namespace std;

struct TrieNode
{
	struct TrieNode *children[ALPHABET_SIZE];
	bool isEndOfWord;
};

struct TrieNode *newNode(void)
{
	struct TrieNode *pNode = new TrieNode;
	pNode->isEndOfWord = false;
	rep(i,0,ALPHABET_SIZE)
	pNode->children[i]=NULL;
	return pNode;
}

void insert(struct TrieNode *root, string key)
{
	struct TrieNode *pCrawl = root;
	rep(i,0,key.size())
	{
		int index = key[i]-'a';
		if(!pCrawl->children[index])
			pCrawl->children[index]=newNode();
		pCrawl = pCrawl->children[index];
	}
	pCrawl->isEndOfWord=true;
}

bool search(struct TrieNode *root, string key)
{
	struct TrieNode *pCrawl = root;
	rep(i,0,key.size())
	{
		int index = key[i]-'a';
		if(!pCrawl->children[index])
			return false;
		pCrawl = pCrawl->children[index];
	}
	return(pCrawl != NULL && pCrawl->isEndOfWord);
}

bool leafNode(struct TrieNode *pNode)
{
	return (pNode->isEndOfWord);
}

bool isFreeNode(struct TrieNode *pNode)
{
	rep(i,0,ALPHABET_SIZE)
	{
		if(pNode->children[i])
			return false;
	}
	return true;
}

bool deleteHelper(struct TrieNode *pNode, string key, int level, int len)
{
	if(pNode)
	{
		if(level==len)
		{
			if(pNode->isEndOfWord)
			{
				pNode->isEndOfWord=false;
				if(isFreeNode(pNode))
					return true;
				return false;
			}
		}
		else
		{
			int index = key[level]-'a';
			if(deleteHelper(pNode->children[index], key, level+1, len))
			{
				pNode->children[index]=NULL;
				return (!leafNode(pNode) && isFreeNode(pNode));
			}
		}
	}
	return false;
}

void deleteKey(struct TrieNode *root, string key)
{
	int len=key.size();
	if(len)
	{
		deleteHelper(root, key, 0, len);
	}
}

int main()
{
	  #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	  #endif
	ll n;
	cin>>n;
	string s[n];
	rep(i,0,n)
	cin>>s[i];
	struct TrieNode *root = newNode();
	rep(i,0,n)
	{
		insert(root,s[i]);
	}
	string t;
	cin>>t;
	cout<<search(root,t)<<"\n";
	deleteKey(root, t);
	cout<<search(root,t)<<"\n";
	return 0;
}
