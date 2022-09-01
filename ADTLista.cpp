#include <iostream>
#define MAX 10
using std::cout;
using std::endl;

template<class T>
class List {
    int LastElm;
    T lista[MAX];

    public:
    List(){
        this->LastElm = 0;
        cout << "List initialized!!" << endl;
    }
    bool isEmpty(){return LastElm == 0;}
    bool isFull(){return LastElm ==MAX;}
    bool shiftRight(){
        if(isFull()){
            cout << "Error: full List" << endl;
            return false;
        }else{
            if(!isEmpty()){
                for (int i = LastElm-1; i >=0; i--)
                    lista[i+1] = lista[i];
            }
            return true;
        }

    }
    bool shiftLeft(int index){
        if(!isEmpty() && validIndex(index)){
            for (int i = index; i <=LastElm-2; i++)
                lista[i]=lista[i+1];
            return true;
        }else{
            cout << "Error: empty List" << endl;
            return false;
        }
    }
    void deleteElm(int position){
        if(shiftLeft(position)){ LastElm = LastElm - 1; }
    }
    void insertEnd( T elm){
        if(isFull()){
            cout << "Error: full List" << endl;
        }else{
            lista[LastElm] = elm ;
            LastElm  = LastElm + 1;
        }
    }
    void insertStart(T elm){
        if(shiftRight()){
            lista[0] = elm;
            LastElm = LastElm + 1;
        }
    }
    void push(T elm){
        if(isFull() ){
            cout << "Error: full List" << endl;
        }else{
            lista[LastElm] = elm ;
            LastElm  = LastElm + 1;
        }
    }
    T pop(){
        if(isEmpty()){
            cout << "Error: empty List" << endl;
            return 0;
        }else{
            LastElm = LastElm - 1;
            return lista[LastElm];
        }
    }
    void deleteDuplicates(){
        cout << "Not implemented" << endl;
    }
    T getElm(int index ){
        if(isEmpty()){
            cout << "Error: empty List" << endl;
            throw "Error: empty List";
        }
        if(!(validIndex(index))){
            cout << "Error: invalid index"<<endl;
            throw "Error: invalid index ";
        }
        return lista[index];
    }
    T getNext(T elm){
        cout << "Not implemented" << endl;
        return 0;
    }
    T getPrev(T elm){
        cout << "Not implemented" << endl;
        return 0;
    }
    bool validIndex(int index){
        if(index<LastElm && index>=0){
            return true;
        }
        return false;
    }
    void printList(){
        if(!isEmpty()){
            cout << LastElm << " elements of list are:" <<endl;
            cout << "*****************" <<endl;
            for (int i = 0; i <= LastElm-1; i++)
                cout << lista[i] << endl;
            cout << "*****************" <<endl;
        }else {
            cout << "Empty List"<<endl;
        }
    }
};

class People {
    public:
    int age;
    float balance;
    char sex;
};

int main()
{
    List<int> lista2;
    lista2.push(2);
    lista2.printList();
    List<char> lista;
    lista.push('Z');
    lista.printList();
    List<float> lista1;
    lista1.push(20.2);
    lista1.printList();

   /* lista.push('a'); */
   /* lista.push('b'); */
   /* lista.push('c'); */
   /* lista.push('d'); */
   /* lista.push('e'); */
   /* lista.push('f'); */
   /* lista.push('g'); */
   /* lista.push('h'); */
   /* cout << "Is empty? " <<lista.isEmpty() << endl; */
   /* cout << "Is full? " << lista.isFull() << endl; */
   /* lista.insertStart('Z'); */
   /* lista.insertEnd('2'); */
   /* lista.printList(); */
   /* cout << "Is full? " << lista.isFull() << endl; */
   /* /1* cout << lista.pop() << endl; *1/ */
   /* lista.deleteElm(1); */
   /* lista.printList(); */
   /* lista.deleteDuplicates(); */
   /* cout << lista.getElm(8) << endl ; */
   return 0;
}
