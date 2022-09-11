#include <iostream>
using namespace std;


int IsOperand(char op){
    if (op == '(')
        return 4;
    else if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    
    else
        return 0;
}

string in_to_post(string infix){
    char stack[10] ="";
    int top = -1;
    //string infix = "a+b";
    int j=0;
    string postfix;

    for (int i=0; i<infix.length();i++){
        if (IsOperand(infix[i]) == 0){
            postfix[j++] += i; //= infix[i];
        }
        else{
            if (top == -1){
                stack[++top] = infix[i];
            }
        }
        postfix[j++] = stack[top--];
    }
    return postfix;

}


int main(){
    
    // char stack[10] ="";
    // int top = -1;
    // string infix = "a+b";
    // int j=0;
    // string postfix;

    // for (int i=0; i<infix.length();i++){
    //     if (IsOperand(infix[i]) == 0){
    //         postfix[j++] += i; //= infix[i];
    //     }
    //     else{
    //         if (top == -1){
    //             stack[++top] = infix[i];
    //         }
    //     }
    //     postfix[j++] = stack[top--];
    // }
    // //postfix[j++] = stack[top--];
    // ////postfix[j] = "\0";

    //cout << postfix << endl;
    cout << in_to_post("a+b") << endl;

}
