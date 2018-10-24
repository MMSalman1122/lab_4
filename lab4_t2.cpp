#include <iostream>
#include<vector>
#include<string>
#include <conio.h>
using namespace std;
class templ
{
public:

    bool stack_empty()
    {
       return v1.empty();

    }
    void Stack_push(string x)
    {
        v1.push_back(x);
    }
    void remove_top()
    {
        v1.pop_back();
    }
    string get_top()
    {
     return v1.back();
    }
    void get_vector()
    {
        for(unsigned int i=0;i<v1.size();i++)
        {
            cout<<v1[i];
        }

    }

private:
    vector<string>v1;

};
int main()
{
    char l;
    string str;
    templ ob;
    cout<<"Enter key key: \n A: Add string \n c: Check the elements in vecctor \n P:print the vector \n e:exit \n r:Remove top.\n t:See recently added item. \n" ;
    while (l!='e')
    {l=getch();
    switch(l)
    {
    case 'c':
        if(ob.stack_empty()==1)
            {cout<<"vector is empty. \n";
            }
        else
            cout<<"Vector is not empty. \n";
        break;
    case 'a':
        cout<<"Enter the string: \n";
        cin>>str;
        ob.Stack_push(str);
        break;
    case 'p':
        ob.get_vector();
        cout<<"\n";
    break;
    case 'r':
        ob.remove_top();
        break;
    case 't':
        cout<<ob.get_top()<<"\n";
        break;
    case 'e':
        return 0;
        break;
    default:
        cout<<"Enter valid character. \n";
        }



    }

    return 0;
}
