#include <iostream>

template<class T>
class List {
    int LastElm;
    int Age;
    T lista[10];
    public:
    void setAge(int Age){
        this->Age = Age;
    }
    List(){
        this->Age = 12;
        this->LastElm = 0;
        std::cout << "List initialized!!" << std::endl;
    }
    void push(T elm){
        lista[LastElm] = elm ;
    };
    T pop(){
        return this->lista[LastElm];
    }
};


int main()
{
   List<char> employee1;
   employee1.setAge(20);
   employee1.push('a');
   std::cout << employee1.pop();

   return 0;
}
