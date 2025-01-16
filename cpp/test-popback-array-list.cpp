#include <iostream>
#include <chrono>
#include "array_list.hpp"

int main() {
    unsigned int n;
    std::cin >> n;
    array_list l1;
    for (unsigned int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        l1.push_back(x);
    }
    auto beg = std::chrono::high_resolution_clock::now();
    unsigned int m, removed;
    std::cin >> m;
    for (int i = 0; i < m; ++i) {
        int x;
        std::cin >> x;
        l1.pop_back();
        removed++;
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = end - beg;
    std::cerr << "[INFO] " << "Elapsed time for "
        << removed << " remove_at success : "
        << elapsed.count() << std::endl;
    std::cout << removed << std::endl;
    return 0;
}