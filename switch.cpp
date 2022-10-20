#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

   

    //selection control statement:switch case statement
     switch (age)
     {
     case 18:
         /* code */
         cout<<"you are 18"<<endl;
         break;
    
     case 22:
         /* code */
         cout<<"you are 22"<<endl;
         break;
    
     case 5:
         /* code */
         cout<<"you are 5"<<endl;
         break;
    
     default:
     cout<<"No special case"<<endl;
         break;
     }
    return 0;
}
