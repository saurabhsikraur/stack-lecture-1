#include <iostream>
#include<stack>
using namespace std;
// class Stack{
// private:
//  int *arr;
//  int top;
//  int size;
// public:
//  Stack(int size){
//    arr=new int[size];
//    this->size=size;
//    top=-1;
//  }

// //functions
//  void push(int data){
//   if(size-top>1){
//     //space available
//     //insert
//     top++;
//     arr[top]=data;
//   }
//   else{
//     //space is not available
//     cout<<"Stack Overflow"<<endl;
//   }
//  }
//  void pop(){
//   if(top==-1){
//     //stack is empty
//     cout<<"Stack Underflow can't delete"<<endl;
//   }
//   else{
//     //stack is not empty
//     top--;
//   }
//  }

//  int getTop() {
//          if(top == -1) {
//                  cout << "There is not element in Stack " << endl;
//            return -1;
//          }
//          else {
//                  return arr[top];
//          }
//  }


//  int getSize(){
//   //number of valid elements in stack
//   return top+1;
//  }
//  bool isEmpty(){
//    if(top==-1){
//      return true;
//    }
//   else{
//     return false;
//   }
//  }
//  };
// int main() {
//   //stack keval top based accesing hoti hai index base accessing nahi hoti hai
  
//   // //creation
//   // stack<int> st;

//   // //insertion
//   // st.push(10);
//   // st.push(30);
//   // st.push(20);
//   // st.push(140);
  
//   // //remove
//   // st.pop();

//   // //check element on top
//   // cout<<"Element on top is "<<st.top()<<endl;

//   // //size 
//   // cout<<"size of stack is "<<st.size()<<endl;

//   // //check stack empty or not
//   // if(st.empty()) 
//   //   cout<<"Stack is empty"<<endl;
//   // else
//   //   cout<<"Stack is not empty"<<endl;

//   // //print stack
//   // stack<int>s;
//   // s.push(11);
//   // s.push(14);
//   // s.push(20);

//   // while(!s.empty()){
//   //   cout<<s.top()<<" ";
//   //   s.pop();
//   // }
//   // cout<<endl;

//   Stack s(10);
//   //insertion
//   s.push(10);
//   s.push(20);
//   s.push(5);
//   cout<<"size of stack"<<s.getSize()<<endl;
//   while(!s.isEmpty()){
//     cout<<s.getTop()<<" ";
//     s.pop();
//   }
//   cout<<"size of stack"<<s.getSize()<<endl;
//   s.pop();
// }


//2 stack create in one array

// class Stack{
// public:
//  int *arr;
//  int size;
//  int top1;
//  int top2;

//  Stack(int size){
//    arr=new int[size];
//    this->size=size;
//    top1=-1;
//    top2=size;
//  }

//  //functions
//  void push1(int data){
//    if(top2-top1==1){
//      cout<<"Overflow"<<endl;
//    }
//    else{
//      top1++;
//      arr[top1]=data;
//    }
//  }
//  void pop1(){
//     if(top1==-1){
//       cout<<"Underflow"<<endl;
//     }
//    else{
//      //only look for delete
//      arr[top1]=0;
//      top1--;
//    }
//  }
//  void push2(int data){
//    if(top2-top1==1){
//       cout<<"Overflow"<<endl;
//     }
//     else{
//       top2--;
//       arr[top2]=data;
//     }
//  }
//  void pop2(){
//    if(top2==size){
//      cout<<"Underflow"<<endl;
//    }
//    else{
//      //only for deletelooking not use permanent
//      arr[top2]=0;
//      top2++;
//    }
//  }

// //only check printing stack
// void print(){
//   cout<<endl;
//   cout<<"top1:"<<top1<<endl;
//   cout<<"top2:"<<top2<<endl;
//   for(int i=0; i<size; i++){
//     cout<<arr[i]<<" ";
//   }cout<<endl;
// }
// };

// int main(){
//   Stack s(10);

//   s.push1(10);
//   s.print();
//   s.push1(20);
//   s.print();
//   s.push1(30);
//   s.print();
//   s.push1(40);
//   s.print();
//   s.push1(50);
//   s.print();

//   s.push2(100);
//   s.print();
//   s.push2(200);
//   s.print();
//   s.push2(300);
//   s.print();
//   s.push2(400);
//   s.print();
//   s.push2(500);
//   s.print();
//   //overflow
//   s.push2(90);
//   // s.print();

//   s.pop1();
//   s.print();
//   s.pop1();
//   s.print();
//   s.pop1();
//   s.print();
//   s.pop1();
//   s.print();
//   s.pop1();
//   s.print();
//   //underflow
//   s.pop1();
//   s.print();

//   s.pop2();
//   s.print();
//   s.pop2();
//   s.print();
//   s.pop2();
//   s.print();
//   s.pop2();
//   s.print();
//   s.pop2();
//   s.print();
 
// }


void printMiddle(stack<int> &s, int totalsize){
  //base case
  if(s.size()==totalsize/2+1){
    cout<<"Middle element is "<<s.top()<<endl;
    return;
  }

  int temp=s.top();
  s.pop();

  //recursive call;
  printMiddle(s,totalsize);

  //backtrack
  s.push(temp);
}
int main(){
  // // string str="abcd";
  // string str;
  // cin>>str;
  // // getline(cin,str);
  // stack<char>s;
  // for(int i=0; i<str.length(); i++){
  //   s.push(str[i]);
  // }

  // while(!s.empty()){
  //   cout<<s.top()<<" ";
  //   s.pop();
  // }
  // cout<<endl;


  //print middle element of stack
  stack<int>s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);
  s.push(70);

  int totalsize=s.size();
  printMiddle(s,totalsize);
}