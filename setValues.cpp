#include <iostream>
using namespace std;

class Student
{
    private:
       string name="unknown";
       int age=0;
       int mark=0;
      public:
      void setValues()
      {
         cout<<"Enter your Data: "<<endl;
         cout<<"Enter your name: "<<endl;
         cin>>name;
         cout<<"Enter your age: "<<endl;
         cin>>age;
         cout<<"Enter your mark: "<<endl;
         cin>>mark;

      }

};

int main()
{
    Student ob1, ob2, ob3, ob4, ob5;

    ob1.setValues();
    ob2.setValues();
    ob3.setValues();
    ob4.setValues();
    ob5.setValues();



    return 0;
}