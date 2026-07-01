class Student{
public:
    Student(){
        cout<<"Default Constructor"<<endl;
    }

    Student(string name){
        cout<<name<<endl;
    }

    Student(string name,int age){
        cout<<name<<" "<<age<<endl;
    }
};