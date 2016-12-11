#include <iostream>

using namespace std;

typedef int valueType;

struct ListNode
{
	valueType val;
	ListNode* next;

	ListNode(valueType val, ListNode* next=0)
		: val(val), next(next) {}
};

class LinkedList
{
private:
	ListNode* header;
	ListNode* tail;
	ListNode* runner;
	ListNode* new_runner;
	void free_list();

public:
	LinkedList();
	~LinkedList();
	void print_list();
	void insert_at_runner(valueType x);
	void append(valueType x);
	void delete_at_runner();
	void next();
	void begin();
	void set_runner();
};

LinkedList::LinkedList()
{
	header = new ListNode(0);
	runner = tail = header;
}

LinkedList::~LinkedList()
{
  	free_list();
}

void LinkedList::print_list()
{
	ListNode* node = header->next;
  	while(node != 0)
	{
	    cout << node->val << " ";
		node = node->next;
	}
}

void LinkedList::free_list()
{
	while(header != 0)
	{
		ListNode* n = header->next;
		delete header;
		header = n;
	}
}

void LinkedList::insert_at_runner(valueType x)
{
	ListNode* new_node = new ListNode(x);
	new_node->next = new_runner->next;
	new_runner->next = new_node;
	new_runner = new_node;
}

void LinkedList::append(valueType x)
{
	ListNode* new_node = new ListNode(x);
	tail->next = new_node;
	tail = new_node;
	if(runner==header)
	{
		runner = tail;
	}
}

void LinkedList::delete_at_runner()
{
	if(runner->next!=0)
	{
		runner->next = runner->next->next;
	}
}

void LinkedList::next()
{
	if(runner->next!=0)
	{
		runner = runner->next;
	}
}

void LinkedList::begin()
{
	runner = header->next;
}

void LinkedList::set_runner()
{
	new_runner = runner;
}

main() {
    LinkedList list;
    int n = 0,m = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int temp = 0;
        cin >> temp;
        list.append(temp);
    }
    for (int i = 0; i < m; i++) {
        int command = 0;
        cin >> command;
        if (command == 1) {
            list.next();
        } else if (command == 2) {
            list.begin();
        } else if (command == 3) {
            int del = 0;
            cin >> del;
            for (int j = 0; j < del; j++) {
                list.delete_at_runner();
            }
        } else if (command == 4) {
            int add = 0;
            cin >> add;
            list.set_runner();
            for (int j = 0; j < add; j++) {
                int x = 0;
                cin >> x;
                list.insert_at_runner(x);
            }
        }
    }
    list.print_list();


}



