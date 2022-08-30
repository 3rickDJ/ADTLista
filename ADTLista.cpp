#include <iostream>
using std::string;
class Lista {
    private:
        int lastElm=0;
    public:
        Lista(){
            printf("A list object has been created");
        }
};


int main()
{
   printf("Hello World !\n");
   /* Lista* lista = new Lista(); */
   Lista::list = new Lista();
   return 0;
}
