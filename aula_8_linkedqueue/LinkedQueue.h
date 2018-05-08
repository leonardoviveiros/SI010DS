typedef char ItemType;

// Estrutura usada para guardar a informacao e o endereco do proximo
// elemento.

struct NodeType {
    ItemType info;
    NodeType* next;
};

class LinkedQueue {
public:

    LinkedQueue();
    ~LinkedQueue();
    void enqueue(ItemType);
    ItemType dequeue();

    bool isEmpty() const;
    bool isFull() const;

private:
    NodeType* front;
    NodeType* rear;
};