
#include <iostream>
#include<string.h>
using namespace std;
class student{
    private:char name[20];
            int usn;
    protected:void setname(char *ptr){strcpy(name,ptr);}
              void setusn(int x){usn=x;}
    
    public: char * getname(){return name;}
            int getusn(){return usn;}
};
class strength : private student{
    
    private:int weight,height;
    
    
    protected:void setheight(int h){height=h;}
              void setweight(int w){weight=w;}
    
    public:int getweight(){return weight;}
           int getheight(){return height;}
           
           char *getstudentname(){
               return getname();
           }
           int getstudentusn(){
               return getusn();
           }

           void setstudent(char *ptr,int r,int w,int h){
               setname(ptr);
               setusn(r);
               weight=w;
               height=h;
           }    
};
int main()
{
    strength s;
    s.setstudent("Sufi",19,176,58);
    cout<<"Name is:-"<<s.getstudentname()<<endl;
    cout<<"USN is:-"<<s.getstudentusn()<<endl;
    cout<<"Heghit is:-"<<s.getheight()<<"cm"<<endl;
    cout<<"weghit is:-"<<s.getweight()<<"kg"<<endl;
    return 0;
}
