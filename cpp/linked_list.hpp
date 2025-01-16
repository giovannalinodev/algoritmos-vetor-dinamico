#ifndef __LINKED_LIST_IFRN__
#define __LINKED_LIST_IFRN__

#include <iostream>

class linked_list {
private:
    struct int_node {
        int value;
        int_node* next, * prev;
    };
    int_node* head, * tail;
    unsigned int size_;
public:
    linked_list() { // constructor. O(1); verified
        this->head = 0;
        this->tail = 0;
        this->size_ = 0;
    }
    
    ~linked_list() { // destructor. O(n);
        int_node* current = this->head;
        while (current != nullptr) {
            int_node* to_remove = current;
            current = current->next;
            delete to_remove;
        }
        size_ = 0;
    }
    
    unsigned int size() { return size_; } // retorna o current size da lista O(1); 
    
    unsigned int capacity() { return size_; } 
    
    double percent_occupied() { // retorna o current capacity da lista O(1); 
        if (size_ == 0) { return 0; }
        return 1;
    }
    
    bool insert_at(unsigned int index, int value) { // insere um elemento no index na lista. O(n);
        if (index > size_){ return false; }
        if (index == 0){
            push_front(value);
            return true;
        }
        if (index == size_){
            push_back(value); 
            return true;
        }
        int_node* current = head;
        for (int i = 0; i < index; i++){
            current = current->next;
        }
        int_node* new_node = new int_node;
        new_node->value = value;
        new_node->next = current;
        new_node->prev = current->prev;
        new_node->prev->next = new_node;
        current->prev = new_node;
        size_++;
        return true;
    }
    
    bool remove_at(unsigned int index) { // retorna se o index da lista foi removido. O(n);
        if (index >= size_){ return false; }
        if (index == 0){ 
            pop_front();
            return true;
        }
        if (index == size_ - 1) {
            pop_back();
            return true;
        }
        int_node* current = head;
        for (int i = 0; i < index; i++){
            current = current->next;
        }
        current->next->prev = current->prev;
        current->prev->next = current->next;
        delete current;
        size_--;
        return true;
    }
    
    int get_at(unsigned int index) { // retorna o valor do index 
        if (index >= size_) return -1;
        int_node* current = head;
        for (int i = 0; i < index; i++){
            current = current->next;
        }
        return current->value;
    }
    
    void clear() { // remove todos os elementos da lista O(n);
        int_node* current = this->head;
        while (current != nullptr) {
            int_node* to_remove = current;
            current = current->next;
            delete to_remove;
        }
        size_ = 0;
    }
    
    void push_back(int value) { // adiciona um elemento na última posição da lista. O(1);
        int_node* new_node = new int_node;
        new_node->value = value;
        new_node->next = nullptr; // ponteiro para null porque é o último elemento da lista
        if (size_ == 0){
            new_node->prev = nullptr;
            head = new_node;
        }else{
            new_node->prev = tail;
            tail->next = new_node;
        }
        tail = new_node;
        size_++;
    }
    
    void push_front(int value) { // adiciona um elemento na primeira posição da lista. O(1);
        int_node* new_node = new int_node;
        new_node->value = value;
        new_node->prev = nullptr; // ponteiro para null porque é o primeiro elemento da lista.
        if (this->size_ == 0){
            new_node->next = nullptr;
            tail = new_node;
        }else{
            new_node->next = head;
            head->prev = new_node;
        }
        head = new_node;
        size_++;
    }
    
    bool pop_back() { // remove o último elemento na lista e retorna se foi removido. O(1);
        if(head == nullptr){ 
            return false; 
        }
        if(head == tail){
            delete head;
            head = nullptr; 
            tail = nullptr; 
            size_--;
            return true; 
        }
        tail = tail->prev;
        delete tail->next;
        tail->next = nullptr;
        size_--;
        return true;
    }
    
    bool pop_front() { // remove o primeiro elemento da lista e retorna se foi removido. O(1);
        if(head == nullptr){ 
            return false; 
        }
        if(head == tail){
            delete head;
            head = nullptr; 
            tail = nullptr; 
            size_--;
            return true; 
        }
        head = head->next;
        delete head->prev;
        head->prev = nullptr;
        size_--;
        return true;
    }
    
    int front() { return head->value; } // retorna o primeiro elemento. O(1);
    
    int back() { return tail->value; } //retorna o último elemento. O(1);
    
    bool remove(int value) { // remover a primeira ocorrência de um valor específico da lista. O(n); 
        int_node* current = head;
        for (int i = 0; i < size_; i++){
            if (current->value == value){
                if (i == 0){
                    current->next->prev = nullptr;
                    head = current->next;
                    delete current;
                    size_--;
                    return true;
                }
                if (i == size_ - 1){
                    current->prev->next = nullptr;
                    tail = current->prev;
                    delete current;
                    size_--;
                    return true;
                }
                current->next->prev = current->prev;
                current->prev->next = current->next;
                delete current;
                size_--;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    
    int find(int value) { // return se o valor estiver na lista. O(n);
        int_node* current = head;
        for (int i = 0; i < size_; i++){
            if (current->value == value){ return 1; }
            current = current->next;
        }
        return -1;
    }
    
    int count(int value) { // retorna quantas vezes o valor aparece na lista. O(n);
        int count = 0;
        int_node* current = head;
        for (int i = 0; i < size_; i++){
            if (current->value == value){ count++; }
            current = current->next;
        }
        return count;
    }
    
    int sum() { // retorna a soma de todos os elementos. O(n);
        int sum;
        int_node* current = this->head;
        for (int i = 0; i < size_; i++){
            sum += current->value;
            current = current->next;
        }
        return sum;
    }
    
    void show() { // mostra a lista formatada. O(n);
        int_node* current = head;
        if (size_ == 0){
            std::cout << "NULL <=> NULL" << std::endl;
            return;
        }
        std::cout << "NULL <- ";
        for (int i = 0; i < size_; i++){
            if (i == size_ - 1) {
                std::cout << current->value;
                break;
            }
            std::cout << current->value << " <=> ";
            current = current->next;
        }
        std::cout << " -> NULL" << std::endl;
    }
};

#endif // __LINKED_LIST_IFRN__