#include<iostream>
using namespace std;
bool checkpalindrome(string str,int i, int j){
    //base case
    if (i>j)
    return true;
    

    if (str[i]!=str[j])
    return false;

// recursive call
else{
    checkpalindrome(str, i+1,j-1);
}
    
    
}
int main(){
    string name ="sakshararadharama";

   // function call
    bool ispalindrome= checkpalindrome(name,0,name.length()-1);


    if(ispalindrome){
        cout<<"its a palindrome";

    }
    else{
        cout<<"its not a palindrome";
    }
    return 0;
}