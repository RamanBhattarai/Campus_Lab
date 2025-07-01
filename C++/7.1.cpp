#include<iostream>

using namespace std;

class Course{
protected:
    char A='I';
    int std_id;
public:
    void display_course(){
        cout<<"Course : "<<A<<endl;
    }
};

class Mathematics: public Course{
protected:
    float marks;
public:
    void get_data(int a, float b){
        std_id = a;
        marks = b;
    }
    void display_data(){
        cout<<"Student Id : "<<std_id<<endl;
        cout<<"Marks in Mathematics : "<<marks<<endl<<endl;
    }
};

class Science: public Course{
protected:
    char sec;
    float marks;
public:
    void get_sec(char d){
        sec = d;
    }
    void display_sec(){
        cout<<"Section : "<<sec<<endl;
    }
    void get_data(int a, float b){
        std_id = a;
        marks = b;
    }
    void display_data(){
        cout<<"Student Id : "<<std_id<<endl;
        cout<<"Marks in Engineering : "<<marks<<endl<<endl;
    }
};

class Engineering: public Course{
protected:
    float marks;
public:
    void get_data(int a, float b){
        std_id = a;
        marks = b;
    }
    void display_data(){
        cout<<"Student Id : "<<std_id<<endl;
        cout<<"Marks in Engineering : "<<marks<<endl<<endl;
    }
};
class Physics: public Science{
protected:
    float marks;
public:
    get_sec();
    void get_data(int a, float b){
        std_id = a;
        marks = b;
    }
    void display_data(){
        display_sec();
        cout<<"Student Id : "<<std_id<<endl;
        cout<<"Marks in Physics : "<<marks<<endl<<endl;
    }
};
class Chemistry: public Science{
protected:
    float marks;
public:
    void get_data(int a, float b){
        std_id = a;
        marks = b;
    }
    void display_data(){
        display_sec();
        cout<<"Student Id : "<<std_id<<endl;
        cout<<"Marks in Chemistry : "<<marks<<endl<<endl;
    }
};


int main(){
    char a='A',b='B';
    Mathematics s1;
    Engineering s2;
    Physics s3;
    Chemistry s4;
    Science s5;
    s1.get_data(2,70.5);
    s2.get_data(3,50);
    s3.Science::get_sec('A');
    s3.get_data(4,70);
    s4.Science::get_sec('B');
    s4.get_data(5,60.3);
    s5.get_data(10,50.55);
    s1.display_data();
    s2.display_data();
    s3.display_data();
    s4.display_data();
    s4.Science::display_sec();
    s5.display_data();
    return 0;
}
