#include <iostream>
#include "./tree.cpp"

int main()
{
 int ch;
   cout<<"1) adding element to the tree"<<endl;
   cout<<"2) use Level Order Traversal to display the data"<<endl;
   cout<<"3) use preorder to display the data"<<endl;
   cout<<"4) use inorder to display the data"<<endl;
   cout<<"5) use postorder to display the data"<<endl;
   cout<<"6) Quit"<<endl;
 
 while( ch!=6 )
   {
   cout<<"Enter your choice : ";
   cin>>ch;
   switch (ch) {

      case 1: 
      {
      	int val;
      	cout << "**********************\n enter the value : ";
      	cin >> val ;
      	insert_node(Root, val); 
         break;
      }

      case 2: levelTraversal();
         break;

      case 3: preorder(Root);
         break;

      case 4: inorder(Root);
         break;

      case 5: postorder(Root);
         break;   

      case 6: cout<<"thanks for using my prog; have a nice day \n Exit."<<endl;
         break;

      default: cout<<"Invalid choice"<<endl;
               }
   }


}