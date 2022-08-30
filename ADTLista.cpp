#include <iostream>
using std::string;
class Employee {
public:
    string Name;
    string Company;
    int Age;
    int lista[10];
    void IntroduceYourself(){
        std::cout << "Name" << Name << std::endl;
        std::cout << "Company" << Company << std::endl;
        std::cout << "Age" << Age << std::endl;
    }
};


int main()
{
   printf("Hello World !\n");
   /* Lista* lista = new Lista(); */
   Employee employee1;
   employee1.IntroduceYourself();
   employee1.lista[0] = 2;
   std::cout << employee1.lista[0];

   return 0;
}
