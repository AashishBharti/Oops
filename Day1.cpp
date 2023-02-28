#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
        int age;
        int height;
};

int main()
{
    //statically 

    Student s1,s6;
    s1.age=24;
    s1.height=5;

    cout<<s1.age<<" "<<s1.height<<endl;

    s6.age=101;
    s6.height=6;

    cout<<s6.age<<" "<<s6.height;

    //dyanmically
    Student *s2=new Student;
    (*s2).age=800;
    (*s2).height=890;

    cout<<(*s2).age<<" "<<(*s2).height;

    

    


    
}
