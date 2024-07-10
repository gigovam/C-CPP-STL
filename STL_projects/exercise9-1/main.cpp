#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <exception>
#include <algorithm>

class MemoryException : public std::exception {
public:
    MemoryException() : std::exception() {}
    const char* what() const noexcept override {
        return "Not enough space!";
    }
};

int main() {
    std::srand(std::time(0));

    int i=0, n1, n2;
    std::vector<int> vec1, vec2;
    while( i != 10) {
        std::cin>>i;
        n1 = std::rand() % 1000 + 1;
        n2 = std::rand() % 1000 + 1;
        vec1.resize(n1);
        vec1.resize(n2);
        std::cout<<"Golemina na vektor 1: "<<n1<<", vektor 2: "<<n2<<std::endl;
        if(n1 < n2) {
            throw MemoryException();
        }
        try {
            std::copy(vec2.begin(), vec2.end(), vec1.begin());
        }
        catch(const MemoryException& e) {
            std::cout<<"An exception has been thrown:"<<e.what()<<std::endl;
        }
    }

    return 0;
}
