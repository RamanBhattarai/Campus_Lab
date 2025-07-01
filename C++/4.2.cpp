#include<iostream>

using namespace std;

class Person{
    char name[30];
    int age;
    public:
    void getdata(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
        void id();
    };
    
    void display(){
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
        cout<<"\nId: "<<id_no;
    };
    public:
    Person () {
        
    }
    Person(int age, char name[12]){
        cout<<"\nName:"<<name;
        cout<<"\nage:"<<age;
    }
    private:
    int id_no;
    void id(){
        cout<<"Enter Id no.: ";
        cin>>id_no;
    }
};

int main(void){
    
    Person g;
    g.getdata();
    g.display();
    char a[10]="Ramesh";
    Person g2(20,a); //"13" => const char *, char []
    return 0;
}
