#pragma once
template <class T>
class clsDblLinkedList {
protected:
	int _Size = 0;

public:
    class Node {
    public:
        T Value;
        Node* Next;
        Node* Prev;
    };
    Node* Head = nullptr;
    void InsertAtBeginning(T Value)
    {

        /*
            1-Create a new node with the desired value.
            2-Set the next pointer of the new node to the current head of the list.
            3-Set the previous pointer of the current head to the new node.
            4-Set the new node as the new head of the list.
        */

        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = head;
        newNode->prev = NULL;

        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
		delete newNode;
		_Size++;

    }
    void PrintList()

    {
        Node* Current = head;

        while (Current != NULL) {
            cout << Current->value << " ";
            Current = Current->next;
        }
        cout << "\n";


    }
    Node* Find(T Value) {
        Node* Current = head;

        while (Current->Value != Null)
        {
            Current->Value == Value ? return Current : Current = Current->Next;
        }

    }
    void InsertAfter(Node* current, T value) {


        /*  1 - Create a new node with the desired value.
             2-Set the next pointer of the new node to the next node of the current node.
             3-Set the previous pointer of the new node to the current node.
             4-Set the next pointer of the current node to the new node.
             5-Set the previous pointer of the next node to the new node(if it exists).
        */

        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = current->next;
        newNode->prev = current;

        if (current->next != NULL) {
            current->next->prev = newNode;
        }
        current->next = newNode;
        delete newNode;
		_Size++;


    }
    void InsertAtEnd(T value) {

        /*
            1-Create a new node with the desired value.
            2-Traverse the list to find the last node.
            3-Set the next pointer of the last node to the new node.
            4-Set the previous pointer of the new node to the last node.
        */


        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = NULL;
        if (head == NULL) {
            newNode->prev = NULL;
            head = newNode;
        }
        else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }

        delete newNode;
		_Size++;
    }
    void DeleteNode(Node*& NodeToDelete) {

        /*
            1-Set the next pointer of the previous node to the next pointer of the current node.
            2-Set the previous pointer of the next node to the previous pointer of the current node.
            3-Delete the current node.
        */
        if (head == NULL || NodeToDelete == NULL) {
            return;
        }
        if (head == NodeToDelete) {
            head = NodeToDelete->next;
        }
        if (NodeToDelete->next != NULL) {
            NodeToDelete->next->prev = NodeToDelete->prev;
        }
        if (NodeToDelete->prev != NULL) {
            NodeToDelete->prev->next = NodeToDelete->next;
        }
        delete NodeToDelete;
		_Size--;


    }
    void DeleteFirstNode()
    {

        /*
            1-Store a reference to the head node in a temporary variable.
            2-Update the head pointer to point to the next node in the list.
            3-Set the previous pointer of the new head to NULL.
            4-Delete the temporary reference to the old head node.
        */

        if (head == NULL) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
		_Size--;

    }
    void DeleteLastNode() {

        /*
            1-Traverse the list to find the last node.
            2-Set the next pointer of the second-to-last node to NULL.
            3-Delete the last node.
        */

        if (head == NULL) {
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
			_Size--;
            return;
        }

        Node* current = head;
        // we need to find the node before last node.
        while (current->next->next != NULL)
        {
            current = current->next;
        }

        Node* temp = current->next;
        current->next = NULL;
        delete temp;
		_Size--;

    }
    int Size(){
		return _Size;
	}
    bool IsEmpty() {
        return _Size == 0;
    }
    void Clear() {
        while (!IsEmpty()) {
            DeleteFirstNode();
        }

	}
    void Reverse() {
		Node* current = head;
		Node* temp = nullptr;
        while (current != nullptr) {
            temp = current->prev;
            current->prev = current->next;
			current->next = temp;
			current = current->prev;
        }
        if (temp != nullptr) {
            head = temp->prev;
		}
    }
    Node* GetNode(int index) {
        if (index < 0 || index >= _Size) {
            return nullptr;
        }
        Node* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return current;
    }
    int GetItem(int index) {
        Node* node = GetNode(index);
        if (node != nullptr) {
            return node->value;
        }
        
	}
    bool UpdateItem(int index, T newValue) {
        Node* node = GetNode(index);
        if (node != nullptr) {
            node->value = newValue;
            return true;
        }
        return false;
	}
    bool InsertAfter(int index, T value) {
        Node* node = GetNode(index);
        if (node != nullptr) {
            InsertAfter(node, value);
			return true;
        }
		return false;
    }



};

