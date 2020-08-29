/*The function call operator () can be overloaded for objects of class type.
When you overload ( ), you are not creating a new way to call a function.
Rather, you are creating an operator function that can be passed an arbitrary number of parameters.
syntax:
   return_type operator()(parameter_list)

*/
#include <iostream>

using namespace std;
class Marks{
int mark;
public:
    Marks(int m){
        cout << "constructor is called"<<endl;
    mark = m;
    }

    void whatsYourMark(){
    cout << "hey i got "<< mark <<" marks" << endl;
    }

    Marks operator()(int mk){
        mark = mk;
         cout << "operator function is called"<<endl;
        return *this;
    }

};
int main()
{
    Marks aks(90);
    aks.whatsYourMark();

    aks(95);
    aks.whatsYourMark();
    return 0;
}