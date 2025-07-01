#include<iostream>

using namespace std;

class Student{
protected:
    int roll_no;
public:
    void setroll(int a){
        roll_no = a;
    }
    void display_roll(){
        cout<<"Roll no.: "<<roll_no<<endl;
    }
};

class Test : public Student{
protected:
    float Math, Science, Computer;
public:
    void marks(float a, float b, float c){
        Math = a;
        Science = b;
        Computer = c;
    }
    void display_marks(){
        cout<<"Marks in Maths : "<<Math<<endl;
        cout<<"Marks in Science : "<<Science<<endl;
        cout<<"Marks in Computer : "<<Computer<<endl;
    }
};

class Result : public Test{
    float total;
public:
    void display(){
        display_roll();
        display_marks();
        total = Math + Science + Computer;
        cout<<"Total marks : "<<total<<endl<<endl;
    }
};

int main(){
    Result s1, s2;
    s1.setroll(2);
    s1.marks(80.5,77.2,69.5);
    s2.setroll(5);
    s2.marks(70.5,82.2,72.5);
    s1.display();
    s2.display();
    return 0;
}
