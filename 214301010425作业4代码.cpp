#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;
struct SListNode
{
	float coef;
	int index;
	SListNode* next;
};

SListNode* BuyListNode(float co, int in)
{
	SListNode* newnode = new SListNode;
	if (newnode == nullptr)
	{
		exit(-1);
	}
	else
	{
		newnode->coef = co;
		newnode->index = in;
		newnode->next = nullptr;
	}

	return newnode;
}

void SListPushFront(SListNode*& pphead, float co, int in)
{
	SListNode* newnode = BuyListNode(co, in);
	newnode->next = pphead;
	pphead = newnode;
}

void SListSub(SListNode*& pphead)
{
	SListNode* cur = pphead;
	int maxin = 0;
	while (cur != nullptr)
	{
		if (cur->index > maxin)
		{
			maxin = cur->index;
		}
		cur = cur->next;
	}
	vector<float> v(maxin);
	cur = pphead;
	while (cur != nullptr)
	{
		float co = cur->coef;
		int in = cur->index;
		v[in] += co;

		cur = cur->next;
	}

	for (int i = 0; i <= maxin; ++i)
	{
		if (v[i] != 0)
		{
			cout << v[i] << ' ' << i << endl;
		}
	}
	cout << '#';
}
int main()
{
	SListNode* slist = nullptr;

	float co;
	int in;
	char ch;
	
	for (int i = 0; i < 3; ++i)
	{
		cin >> co >> in;
		SListPushFront(slist, co, in);
	}
	cin >> ch;

	for (int i = 0; i < 3; ++i)
	{
		cin >> co >> in;
		co = -co;
		SListPushFront(slist, co, in);
	}
	cin >> ch;

	for (int i = 0; i < 3; ++i)
	{
		cin >> co >> in;
		co = -co;
		SListPushFront(slist, co, in);
	}
	cin >> ch;

	SListSub(slist);

	return 0;
}
