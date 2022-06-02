#include <iostream>
using namespace std;

/*//trust the function
//print hello n times

void say_hello(int n){
    if(n==0){            //stoppin case base case
       return ; //stops
    }

    cout<<"Hello"<<n<<endl; //printed once already 
    say_hello(n-1);            //n - 1 more times
    
}
int main(){
    say_hello(5);
}*/

/*void say_hello(int n){
    if(n==0){
        return;
    }
    say_hello(n-1);
    cout<<"Hello"<<" "<<n<<endl;
}

int main(){
    say_hello(6);
}*/

/*int sum_num(int n){
    if(n==0){
        return 0;
    }
    int left_part1=sum_num(n-1);
    return left_part1 + n;
}

int main(){
    cout<<sum_num(5);
}*/

/*int sum_digit(int n){
    if (n==0)
    {
        return 0;
    }
    int last_digit=n%10;
    int reamaining1=n/10;
    return sum_digit(reamaining1)+last_digit;
}
int main() {
    cout<<sum_digit(1234);
}*/
/*int print_pattern(int n){
    if (n==1)
    {
     return n;
    }
    for (int i = 1; i <=n; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    print_pattern(n-1);
    for (int i = 1; i < n; i++)
    {
       cout<<i<<" ";
    }
    cout<<endl;
    
    
    
}

int main(){
    print_pattern(9); 
    return 0; 
}

int fib(int n){
    if (n==0)
    return 0;
    if(n==1)
        return 0;
    if (n==2)
       return 1;
    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n);
}
// reverse string importan question.....
void reverse(string s){
    if(s.length()==0){
        return ;
    }
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0];
}
int main(){
    reverse("binod");

}*/

