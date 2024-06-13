#include <iostream>
using namespace std;
class studt
{
            string  name;
            int rollNo;
            int height;
            int weight;
      public:
      studt(string n,int r,int h,int w)
        {
          name=n;
          rollNo=r;
          height=h;
          weight=w;
        }
        studt(studt &ob)
        {
          name=ob.name;
          rollNo=ob.rollNo;
          height=ob.height;
          weight=ob.weight;
        }
            void display(void);
            ~studt();
};
void studt::display(void)
{
      cout << "Student details:\n";
      cout << "Name:"<< name <<"\n"<< "Roll Number:" << rollNo <<"\n"<< "Height:" << height <<"\n"<< "Weight:" << weight<<"\n";
}
studt :: ~studt()
{
      cout<<"\n";
}
int main()
{
      studt std("prakhar",6353,5.8,65);          
      studt std1=std;
      std.display();
      std1.display();
      return 0;
}
