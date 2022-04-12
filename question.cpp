#include<iostream>
#include<string.h>
#include<fstream>
#include <vector>
using namespace std;

/*int main(){
    int age=18;
    if (age>16)
    {
        cout<<"You can vote";
    }
    else
    cout<<"You cannot vote";

    return 0;
int main(){
    int a, b,ch,add,subtract, multi;
   cout<<"Enter two number: ";
    cin>> a >> b;
    cout<<"Enter choice";
    cin>>ch;


    if (ch==1)
    {
        add=a+b;
        cout<<add;
    }
    else if (ch==2)
    {
        subtract=a-b;
        cout<<subtract;
    }

    else if (ch==3)
    {
        multi=a*b;
        cout<<multi;
    }
    else
    cout<<"Invalid task";
    return 0;
}
    /*if (a>b)
    {
        cout<<"a="<<a;

    }
    else
    cout<<"b="<<b;
    return 0;*/
    /*max=(a>b)?a:b;
    cout<<max;
    return 0;
int main(){
    int ch;
    cout<<"Enter user choice:";
    cin>>ch;
    switch (ch)
    {
    case 0:
        cout<<"Sunday";
        break;
    case 1:
    cout<<"MOnday";
    break;

    case 2:
    cout<<"Tuesday";
    break;

    case 3:
    cout<<"wednesday";
    break;
    
    
    default:
    cout<<"Invalid choice";
    }
  return 0;
int main(){
    int num,count=0;
    cout<<"Enter Number:";
    cin>>num;

    while (num>0)
    {
       num=num/10;
       count++;
    }
    cout<<count;
    return 0;
}

int main(){

    int age;
    cout<<"Enter your age";
    cin>>age;
    if (age>=18)
    goto Vote;
    else
    goto notVote;

    Vote:
    cout<<"Eligible for vote";
    return 0;

    notVote:
    cout<<"Not Eligible for vote";
    return 0;
int main(){
 
    int a[2][2], i,j;
    cout<<"Enter Array Element";
    for ( i = 0; i <= 1; i++)
    {
       for (j = 0; j <=1; j++)
       {
           cin>>a[i][j];
       }
       
    }
     cout<<"\nArray Element";
    for ( i = 0; i <= 1; i++)
    {
       for (j = 0; j <=1; j++)
       {
           cout<<a[i][j];
       }
       cout<<endl;
       
    }
    
     return 0;
}

int main(){
  char str[]="RAshid";
  cout<<str<<endl;
  int r=strlen(str);
  cout<<r;
}
int main(){


int a=5;
int*p;
p=&a;
cout<<a<<endl;
cout<<p<<endl;
cout<<*p;

return 0;
}

struct stu
{
    int marks;
    float avg;
    double salary;

};

int main(){
    struct stu s;
    cout<<"structure size="<<sizeof(s)<<endl; 
}
#define num 3
#define count(a,b) ((a>b)?b:a)
int main()
{
    cout<<count(126,236)<<endl;
    cout<<count(267,236)<<endl;
    cout<<count(336,236)<<endl;
    return 0;
}
int main (){

    ofstream newFile("C:\\Users\\Md Rashid\\CPP.txt");
    cout<<"File created..";
    newFile<<"dont loose focuse and consistency..";

    newFile.close();
    return 0;
}
int main(){
    string str;
    ifstream newFile("C:\\Users\\Md Rashid\\CPP.txt");

    while (getline(newFile, str))
    {
      cout<<str<<endl;
    }
    newFile.close();
    return 0;

}
// class 
class print
{
    public:
    void show()
    {
        cout<<"Dont get distracted";
    }
};
int main(){
    print obj;
    obj.show();
    return 0;
}

class person
{
    //int run;=state
   // string msg;=state
    public:
    //void play()=Behaviour
    {
        run= 50;
        cout<<"Today i scored"<<run<<"runs"<<endl;
    }
    //void walked(){==Behaviour
        msg="I walked 5 kilometer everyday";
        cout<<msg;
    }

};
int main()
{
    //person obj;==Identity
    obj.play();=
    obj.walked();
}
//constructor.....
class A
{
 int a, b;
 public:
 A()//default constructror
 {
     a=19,b=5;
     cout<<a<<endl<<b;
 }
};
int main(){
    A m;
}
class A
{
 int a, b;
 public:
 A(int a,int b)//parameterised constructror
 {
     
     cout<<a<<endl<<b;
 }
};
int main(){
    A m(6,8);
}
class A
{
 int x, y;
 public:
 A(int a,int b)//copy constructror
 {
     x=a; y=b;
     
     cout<<x<<ends<<y<<endl;
 }
   A(A &ref)
   {
       x=ref.x;
       y=ref.y;
       cout<<x<<ends<<y;
   }
};

int main(){
    A m(6,8);
    A r=m;
}
//Destructor.....

int count=0;
class A
{
public:
A()
{
    cout<<"object"<<++count<<"created"<<endl;
}
~A()
{
    cout<<"object"<<count--<<"deleted"<<endl;
}

};

int main(){
    A obj,obj1;
}
class rashid
{
private:
    string tv;
public:
    void show()
    {
        tv="IPL final 2022";
    }
    friend void dilbar(rashid r);
};
 void dilbar(rashid r)
 {
     cout<<"Watching final"<<r.tv;
 }
  int main()
 {
    rashid a;
    a.show();
    dilbar(a);
     return 0;
 }
 class A
 {
 int a, b;
 public:
 void input()
 {
    a=2,b=3;
 }
 friend class B;
  
    
 };
 class B
 {
     int c;
     public:
     void add(A r)
     {
     c=r.a+r.b;
     cout<<c;
     }

 };

 int main(){
     A a;
     a.input();
     B obj;
     obj.add(a);
     return 0;
 }
 Data abstaraction....

 class myBank
 {
 private:
 int atmPin,Balance;
    
 public:
 string bName,IFSC;
 int accNumber;

 void input()
 {
     atmPin=1234;
     Balance=10087;
     bName="phonepay";
     IFSC="phone1234";
     accNumber=12345678;
 }
     void output()
     {
      cout<<atmPin<<endl;
      cout<<Balance<<endl;
      cout<<bName<<endl;
      cout<<IFSC<<endl;
      cout<<accNumber<<endl;
     }
 
 };

 int main(){
     myBank m;
     m.input();
     m.output();

     cout<<"Dilbar trying to access my account"<<endl;
     // cout<<m.atmPin<<endl;// cannot acccess
     // cout<<m.Balance<<endl;// cannot acccess
      cout<<m.bName<<endl;
      cout<<m.IFSC<<endl;
      cout<<m.accNumber<<endl;
     return 0;
 }
 // Encapsulation ....
 class Thief
 {
     string name,address;
     int mob;

     public:
     
         void input()
     {    
         name="Soldier";
         address="Neemchak bathani";
         mob=12345678;

     }
     void output()
     {
         cout<<name<<endl;
         cout<<address<<endl;
         cout<<mob<<endl;

     }
 };
 class Police:public Thief
 {
  
 };

 int main()
 {
  Police p;
  p.input();
  p.output();
  return 0;
 }
 class Mama
 {
     protected:
     int amount;
     
     public:
     void input()
     {
         amount=100500;
     }
 };

 class Sister:public Mama
 {
     int money = 5000;
     public:
     void show()
     {

     
     cout<<money<<endl;
     cout<<amount<<endl;
     }
 };
 int main()
 {
     Sister p;
     p.input();
     p.show();
     return 0;
     
 }
 // Mulitilevel inheritance.....
 class A
 {
     protected:
     int a, b;
     public:
     void input(){
         cout<<"enter two number";
         cin>>a>>b;
     }
     

 };
 class B:public A
 {
     int c;
     public:
     void add(){
         c=a+b;
         cout<<"addition"<<c<<endl;
     }
 };
 class C:public B{
     int d, e;
     public:
     void multiply(){
         d=a*b;
         cout<<"multiply"<<d<<endl;
        }
         void division(){
             e=a/b;
         cout<<"division"<<endl<<e;
         }

     
 };

 int main(){
     C obj;
     obj.input();
     obj.add();
     obj.multiply();
     obj.division();
     return 0;
 }
 class A
 {
  int num1,num2,s,m;
  public:
  void person()
  {
      cout<<"enter two number";
      cin>>num1>>num2;
      s=num1+num2;
      cout<<"Addition "<<s<<endl;
  }
  public:

  void person(int a,int b)
  {
      m=num1*num2;
      cout<<"multiplication"<<m<<endl;
  }

 };
 int main(){
     A obj;
     obj.person();
     obj.person(10,20);
     return 0;
 }
 class Solution{
    public:
    void helloWorld()
    {
        cout<<"Hello World";
    
        
    }
};

int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        cout<<s<<endl;
    
    Solution obj;
    obj.helloWorld();
    }
    return 0; 

template <class M1=int,class M2=float,class M3=char>

class A{
    public:
    M1 a;
    M2 b;
    M3 c;
    A(M1 x,M2 y,M3 z){
    a=x;
    b=y;
    c=z;
}
    void display(){
        cout<<"The sum of "<<(a+b)<<endl;
        cout<<"The value of c"<<" "<<c;


    }


};
int main(){
    A<> h(4,5.2,'r');
    h.display();
    return 0;
}*/

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main (){
    vector<int> vec1;
    int element;
    for (int i = 0; i < 4; i++)
    {
        cout<<"Enter an element to add this number";
        cin>>element;
        vec1.push_back(element);

    }display(vec1);
    
}


 


 
 
 

 
 
 
 
 














    










