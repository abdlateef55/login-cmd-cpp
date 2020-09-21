#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
   string email = "";
   string user_password = "";
   int try_again = 0;
   printf("\t\t\t\t Welcome to maerefa please sign in to start \n \n \n");
   do{
    //Email address
    cout<<"Enter your Email : ";
    cin>>email;
    //password
   cout<<"Enter your password : ";
   cin>>user_password;
if(email == "as@mail.com" && user_password == "99775511"){
     cout<<"\t\t\t------------------- \n ";
      printf("\t\t\tWelcome 'A.Sanussi'\n");
      cout<<"\t\t\t------------------- ";
    try_again = 1;
}else if(email == "gh@mail.ru" && user_password == "9751"){
    cout<<"\t\t\t------------------- \n ";
    cout<<"\t\t\tWelcome Admin\n";
    cout<<"\t\t\t------------------- ";
    try_again = 1;
}else{
    cout<<"!!!! Wrong email or password , please try again \a \a " << endl;}
   }while(try_again != 1);
}

