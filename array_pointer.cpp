#include<iostream>
using namespace std;

int main() {
    string name[2];
    int size=2;
    for (int i = 0; i < size; i++)
    {
        cin>>name[i];
        // scanf("%d", name[i]);
    }
    string* name_ptr = name;

    for (int i = 0; i < size; i++)
    {
        cout<<*(name_ptr+i)<<"\n";
    }

    string new_name[] = {"naman", "vikas", "om"};
    name_ptr = new_name;
    size++;
    *(name_ptr) = "Naman";

    for (int i = 0; i < size; i++)
    {
        cout<<*(name_ptr+i)<<"\n";
    }
    
    return 0;
}
