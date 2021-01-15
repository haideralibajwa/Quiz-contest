#include<iostream>
#include<Windows.h>
#include <stdlib.h> 
using namespace std;
class node{
	public:
		string data;
		node *next;
};

class ListInsertion

{

private:

    node *head,*tail;

public:

    ListInsertion()

    {

        head = NULL;

        tail = NULL;

    }

 

    void add_node(string n)

    {

        node *tmp = new node;

              tmp->data= n;

        tmp->next = NULL;

 

        if(head == NULL)

        {

            head = tmp;

            tail = tmp;

        }

        else

        {

            tail->next = tmp;

            tail = tail->next;

        }

    }

       void display()

    {
    	if(head!=NULL)
        {
        		char x=219;
        	cout<<"\n\n\n\n\n\n\t\t\t\t";
	for(int i=1;i<=85;i++)
	cout<<x;
	Sleep(1000);
		cout<<"\n\t\t\t\t"<<x<<x<<"                                                                                  "<<x<<x<<endl;   
	cout<<"\t\t\t\t"<<x<<x<<"             Wellcome to the Quiz                                                 "<<x<<x<<endl;
	cout<<"\t\t\t\t"<<x<<x<<"                                                                                  "<<x<<x<<endl;
	cout<<"\t\t\t\t"<<x<<x<<"             PRESS SELECT 1 OPTION FROM IN UNDER FOLLOWING 4 OPTIONS (a, b, c, d) "<<x<<x<<endl;
	cout<<"\t\t\t\t"<<x<<x<<"                                                                                  "<<x<<x<<endl;
	cout<<"\t\t\t\t";
	 
	for(int i=1;i<=85;i++)
	cout<<x;  
	Sleep(1000);  

            cout << head->data << endl;
            head= head->next;

        }

    }
    
    void Final_Res(string name, string passoward)
    {   char x=219;
        cout<<"\n\n\n\n\n\n\t\t\t\t\t";
    	for(int i=1;i<=62;i++)
	cout<<x;
	Sleep(1000);
	cout<<"\n\t\t\t\t\t"<<x<<x<<"                                                          "<<x<<x<<endl;
	cout<<"\t\t\t\t\t"<<x<<x<<"//////////////////////////////////////////////////////////"<<x<<x<<endl;   
	cout<<"\t\t\t\t\t"<<x<<x<<"             FINAL RESULT                                 "<<x<<x<<endl;
	cout<<"\t\t\t\t\t"<<x<<x<<"//////////////////////////////////////////////////////////"<<x<<x<<endl;
	cout<<"\t\t\t\t\t"<<x<<x<<"                                                          "<<x<<x<<endl;
    cout<<"\t\t\t\t\t";
	for(int i=1;i<=62;i++)
	cout<<x;
	Sleep(1000);

	
	
	
    	                  
    	cout<<"\n\n\n\t\t\t\t//////////////////////////////////////////////////////////";
    	cout<<"\n\t\t\t\t| YOUR Name IS      :       |"<< name;
    	cout<<"\n\t\t\t\t| YOUR Passoward IS :       |"<< passoward;
    	cout<<"\n\t\t\t\t//////////////////////////////////////////////////////////";
    	
	}
};
int main()
{
	string ans[10]={"a","c","a","b","b","a","b","a","c","a"};
	string get[10];
	ListInsertion a;

	
    string b="\n\n\t\t\t\t\t\tQuestion no : 1\n\n\t\t\tHow many types of Linked List have.\n\t\t\t (a) Three\t\t(b) Five\t\t(c) Six\t\t(d) None of the above\n";
    a.add_node(b);
    
    string c="\n\n\t\t\t\t\t\tQuestion NO : 2\n\n\t\t\tWhich of the following is not a type of Linked List ?.\n\t\t\t (a) Doubly Linked List (b) Circular Linked List (c) Hybrid Linked List (d) Singly Linked List	\n";
    a.add_node(c);
        string d="\n\n\t\t\t\t\t\tQuestion NO : 3\n\n\t\t\tThe first node from where the tree originates is called as a___.\n\t\t\t (a) Root Node\t(b) Parent Node\t(c) Child Node\t(d) Internal Node\n";
    a.add_node(d);
        string e="\n\n\t\t\t\t\t\tQuestion NO : 4\n\n\t\t\tThe node which does not have any child is called__.\n\t\t\t (a) Parent Node\t(b) Leaf Node\t(c) Level of Tree\t(d) Internal Node\n";
    a.add_node(e);
        string f="\n\n\t\t\t\t\t\tQuestion NO : 5\n\n\t\t\tThe connecting link between any two nodes is called\n\t\t\t (a) Subling\t(b) Edge \t(c) Parent Node\t(d) Root Node\n";
    a.add_node(f);
        string g="\n\n\t\t\t\t\t\tQuestion NO : 6\n\n\t\t\tThe node which has a branch from it to any other node is called\n\t\t\t (a) Parent Node\t(b) Child Node\t(c) Root Node\t(d) None of the above\n";
    a.add_node(g);
        string h="\n\n\t\t\t\t\t\tQuestion NO : 7\n\n\t\t\tNodes which belong to the same parent are called as__.\n\t\t\t (a) Internal Node\t(b) Sibling\t(c) Leaf Node\t(d) None of the above\n";
    a.add_node(h);
        string i="\n\n\t\t\t\t\t\tQuestion NO : 8\n\n\t\t\tTotal number of edges from root node to a particular node is called__. \n\t\t\t (a) Depth of that node  (b) Level of a Tree  (c)  Height of that node  (d) None of the above\n";
    a.add_node(i);
        string j="\n\n\t\t\t\t\t\tQuestion NO : 9\n\n\t\t\tA binary tree in which every node has either 0 or 2 children is called___. \n\t\t\t (a) Full binary tree  (b) Strictly Binary Tree  (c) Both (a) And (b)  (d) None of the above\n";
    a.add_node(j);
        string k="\n\n\t\t\t\t\t\tQuestion NO : 10\n\n\t\t\tA tree is a connected graph without any circuits.\n\t\t\t (a) True\t\t(b) False\n";
    a.add_node(k);
	
    
    
    
	system("color 03F");
	cout<<"\n\n\n\n\n\n";
	cout<<"\t\t\t\t\tAssalam-O-Alaikum!!!\n\n\t\t\t\t\t";
	Sleep(1000);
	system("color 03F");
	cout<<"\n\n\n\n";
	cout<<"\t\t\t\t\tLOADING.......\n\n\t\t\t\t\t";
	char x=219;
	for(int i=0;i<25;i++)
	{   
	    
		cout<<x;
		Sleep(100);
	}
	system("color 0B9");
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n";
	for(int i=0;i<168;i++)
	{
		cout<<"*";         
		Sleep(10);
	}
	Sleep(2000);
	system("color 0A");
	cout<<"\n\n\n";
		                                                                         
	cout<<"\t\t\t      ###            ###  ### ### ###   ###          ### ###      ### ###       ###         ###  ### ### ###     \t\t\t\t\t\n";       
	cout<<"\t\t\t      ###            ###  ###           ###        ###         ###       ###    ### ###     ###  ###            \t\t\t\t\t\n";
	cout<<"\t\t\t      ###   ###      ###  ### ### ###   ###        ###         ###        ###   ###    ###  ###  ### ### ###     \t\t\t\t\t\n";
	cout<<"\t\t\t      ###  ###  ###  ###  ###           ###        ###         ###        ###   ###         ###  ###            \t\t\t\t\t\n";
	cout<<"\t\t\t      ###            ###  ### ### ###   ### ### ###   ### ###     ###  ###      ###         ###  ### ### ###      \t\t\t\t\t\n";
	cout<<"\n";
	for(int i=0;i<168;i++)
	{
		cout<<"*";
		Sleep(10);
	}
	cout<<"\n\n\t\t\t\t\t\t\t";
	cout<<" Riphah Internatioanl University"<<endl;
	
	cout<<"\t\t\t\t\t\tProject Name  :       Quiz Contest"<<endl;
	cout<<"\t\t\t\t\t\tDeveloper     :       Haider Ali"<<endl;
	cout<<"\t\t\t\t\t\tSAP ID        :       14452"<<endl;
	cout<<"\t\t\t\t\t\tSubmitted TO  :       Sir Marwat Hussain"<<endl;
	for(int i=0;i<168;i++)
	{
		cout<<"*";
		Sleep(10);
	}
	Sleep(5000);
	go:
	system("cls");
	system("color 0B1");
	cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t";
	for(int i=1;i<=50;i++)
	cout<<x;
	Sleep(1000);
	
		cout<<"\n\t\t\t\t\t\t\t"<<x<<x<<"                                              "<<x<<x<<endl;   
	cout<<"\t\t\t\t\t\t\t"<<x<<x<<"             User Login                       "<<x<<x<<endl;
	cout<<"\t\t\t\t\t\t\t"<<x<<x<<"                                              "<<x<<x<<endl;
	cout<<"\t\t\t\t\t\t\t";
	
    string name,passoward;
    string y,z;
    name="Haider";
    passoward="12345";
    

	for(int i=1;i<=50;i++)
	cout<<x;
	Sleep(1000);
	cout<<"\n\t\t\t\t\t\t\t"<<x<<x<<"                                              "<<x<<x<<endl;  
	cout<<"\t\t\t\t\t\t\t"<<x<<x<<"              Enter UserName                  "<<x<<x<<endl;
	cout<<"\t\t\t\t\t\t\t"<<x<<x<<"              Enter Passoward                 "<<x<<x<<endl;
	cout<<"\t\t\t\t\t\t\t"<<x<<x<<"                                              "<<x<<x<<endl;
	cout<<"\t\t\t\t\t\t\t"<<x<<x<<"                                              "<<x<<x<<endl;
	cout<<"\t\t\t\t\t\t\t"<<x<<x<<"                                              "<<x<<x<<endl;
	cout<<"\t\t\t\t\t\t\t"<<x<<x<<"                                              "<<x<<x<<endl;
	cout<<"\t\t\t\t\t\t\t";
	for(int i=1;i<=50;i++)
	cout<<x;
	Sleep(1000);
    cout<<"\n\n\n\t\t\t\t\t\t\t\t        Enter UserName  : ";
    cin>>y;
    cout<<"\n\t\t\t\t\t\t\t                Enter Passoward : ";
    
	 cin>>z;
	 cout<<"\n";
	for(int i=1;i<=168;i++)
	cout<<x;  
	Sleep(1000);  
	cout<<x;
	 if(y==name && z==passoward)
	 {
	 	cout<<"\n\n\t\t\t\t\t\t\t";
	 	cout<<"Your username and passoward is correct \n";
	 
	 
	 	
	 cout<<"\n\t\t\t\t\t\t\tDo you want to take Quiz..... "<<endl;
	 cout<<"\n\t\t\t\t\t\t\tYES/NOT"<<endl;
	 cout<<"\n";
	 for(int i=1;i<=168;i++)
	cout<<x;  
	Sleep(1000);  
	cout<<x;
	 cout<<"\n\t\t\t\t\t\t\tIf YES Press 1 or NOT press 0 : ";
	
	 string c;
	 cin>>c;
	 system("cls");
	 if(c=="1"){
	 	system("cls");
	 	system("color 0B1");
        cout<<"\n\n\n\n\n\n\n\n\n";
	    for(int i=0;i<168;i++)
	    {
		cout<<"*";         
		Sleep(10);
	    }
	    system("cls");
	    for(int i=0;i<10;i++){
	     system("cls");
	     a.display(); 
	     cout<<"\n\n\t\t\tEnter correct option ::";
	     cin>>get[i];
	    }
	    int grad=0;
	    for(int i=0;i<10;i++){
	    	if(ans[i]==get[i]){
	    		grad++;
			}
		}
		system("cls");
		a.Final_Res(name,passoward);
			cout<<"\n\n\n\t\t\t\t\t  Your Marks obtained out of 10 ";
		cout<<"\n\n\n\t\t\t\t\t  Your Marks obtained are  :: "<<grad<<endl;
		cout<<"\n\n\t\t\t\t\tThank you\n\n";
		cout<<"\n";
		for(int i=1;i<=168;i++)
	cout<<x;  
	Sleep(1000);  
	cout<<x;
	 }
	 else{
	 	cout<<"\n\n\n\n\t\t\t\t\t\t\tYou not attemp quiz\n";
	 	cout<<"\n\n\n\n\t\t\t\t\t\t\tReturning to Main Page\n";
	 	system("pause");
	 	goto go; 
	 }
	 
	 }
	 else{
	 	cout<<"\n\n\n\n\t\t\t\t\t\t\tyour username and passoward is incorrect\n\n";
	 	cout<<"\t\t\t\t\t\t\t";
	 	system("pause");
	 	goto go;
	 }	return 0;

}
