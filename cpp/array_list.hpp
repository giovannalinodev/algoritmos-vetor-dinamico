#ifndef __ARRAY_LIST_IFRN__
#define __ARRAY_LIST_IFRN__

#include <iostream>

class array_list{
private:
    int* data;
    unsigned int size_, capacity_;
    void increase_capacity(){ capacity_ = capacity_ * 2; }

public:
    array_list(){
        capacity_ = 8;
        size_ = 0;
        data = new int[8];
    }

    ~array_list() { delete[] data; }
    
    unsigned int size() { return size_; }
    
    unsigned int capacity(){ return capacity_; }
    
    double percent_ocupied(){ return (size_ * 1.0) / capacity_; }
  
    bool insert_at(unsigned int index, int value){ // adicionando um valor em um índice especifico. O(n);
        if (index <= size_){
            if (size_ < capacity_){
                if (index == size_){
                    data[index] = value;
                    size_++;
                }else if (index < size_){
                    for (int i = size_; i != index; i--){ data[i] = data[i - 1]; }
                    data[index] = value;
                    size_++;
                }
            }else{   
                if (index == size_){
                    increase_capacity();
                    int* newdata = new int[capacity_];
                    for (int i = 0; i < size_; i++){ newdata[i] = data[i]; }
                    newdata[index] = value;
                    delete[] data;
                    data = newdata;
                    size_++;
                }else{
                    increase_capacity();
                    int* newdata = new int[capacity_];
                    int i = 0;
                    for (; i < index; i++){ newdata[i] = data[i]; }
                    newdata[index] = value;
                    for (; i < size_; i++){ newdata[i + 1] = data[i]; }
                    delete[] data;
                    data = newdata;
                    size_++;
                }
            }
        return true;
        }else{
            return false;   
        }
    }
    
    bool remove_at(unsigned int index){ // removendo o elemento no index. O(1);
        if (index >= this->size_)
            return false; // não removeu
        for (int i = index + 1; i < this->size_; ++i) {
            this->data[i - 1] = this->data[i];
        }
        this->size_--;
        return true; // removeu
    }
    
    int get_at(unsigned int index){ // retorna o elemento no index, -1 para índice inválido. O(1);
        if (size_ > 0 && index >= 0 && index < size_){ 
            return data[index];
        }
        return -1;
    }
    
    void clear(){  // remove todos os elementos, deixando o vetor no estado inicial. O(1);
        int* newdata = new int[8];
        delete[] data;
        data = newdata;
        size_ = 0;
    }
    
    void push_back(int value){ // adiciona o elemento na última posição da lista. O(n);
        if (size_ < capacity_){
            data[size_] = value;
            size_++;
        }else{
            increase_capacity();
            int* newdata;
            newdata = new int[capacity_];
            for (int i = 0; i < size_; i++){
                newdata[i] = data[i];
            }
            newdata[size_] = value;
            delete[] data;
            data = newdata;
            size_++;
        }
    }
    
    void push_front(int value){ // adiciona o elemento na primeira posição da lista. O(n);
        if (size_ == 0){
            data[size_] = value;
            size_++;
        }else if (size_ < capacity_){
            for (int i = size_; i != 0; i--){
                data[i] = data[i - 1];
            }
            data[0] = value;
            size_++;
        }else if (size_ == capacity_){
            increase_capacity();
            int* newdata;
            newdata = new int[capacity_];
            for (int i = 0; i < size_; i++){
                newdata[i + 1] = data[i];
            }
            newdata[0] = value;
            delete[] data;
            data = newdata;
            size_++;
        }
    }
    
    void pop_back(){ // remove o último elemento da lista. O(1);
        if (size_ == 0) {
            size_ = 0;
            throw std::out_of_range("A lista está vazia.");
        }else {
            size_--;
        }
    }
    
    void pop_front(){ // remove o primeiro elemento da lista. O(n);
        if (size_ == 0) {
            size_ = 0;
            throw std::out_of_range("A lista está vazia.");
        }else {
            for (int i = 0; i < size_; i++) {
                data[i] = data[i + 1];
            }
            size_--;
        }
    }
    
    int back(){ // retorna o último elemento da lista. O(1);
        if (size_ == 0) {
            throw std::out_of_range("A lista está vazia.");
        }else {
        return data[size_ - 1];
        }
    }
    
    int front(){ // retorna o primeiro elemento da lista. O(1);
        if (size_ == 0) {
            throw std::out_of_range("A lista está vazia.");
        }else {
        return data[0];
        }
    }
    
    bool remove(int value){ // remove a primeira aparição do elemento na lista. O(n);
        for (int i = 0; i < size_; i++){
            if (data[i] == value){
                if (i + 1 == size_){
                    size_--;
                    return true;
                }
                else{
                    for (; i < size_; i++){
                        data[i] = data[i + 1];
                    }
                    size_--;
                    return true;
                }
            }
        }
        return false;
    }
    
    int find(int value){ // retorna se o valor ocorre na lista. O(n);
        for (int i = 0; i < size_; i++){
            if (data[i] == value){ return 1; }
        }
        return -1;
    }
    
    int count(int value){ // retorna quantas vezes o valor occorre na lista. O(n);
        int find = 0;
        for (int i = 0; i < size_; i++){
            if (data[i] == value){ find++; }
        }
        return find;
    }
    
    int sum(){ // retorna a soma de todos os elementos da lista. O(n);
        int soma = 0;
        for (int i = 0; i < size_; i++) { soma += data[i]; }
        return soma;
    }

    
    void show(){ // mostra a lista formatada entre "[]". O(n);
        std::cout << '[';
        for (int i = 0; i < size_; i++) {
            if (i == size_ - 1) { std::cout << data[i]; }
            else { std::cout << data[i] << ", "; }
        }
        std::cout << ']' << std::endl;
    }
};


#endif // __ARRAY_LIST_IFRN__