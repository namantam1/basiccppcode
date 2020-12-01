#include <iostream>
using namespace std;

int main()
{
    char flag = 'n';
    int init_user = 2;
    string password[init_user], super_user_passwd = "naman";
    for (int i = 0; i < init_user; i++)
    {
        password[i] = "";
    }
    string* password_ptr = password;

    do
    {

        string temp = "";
        int user = 0;

        cout << "Who are you??\n(1) malik\n(2) karmachari\n--> ";
        cin >> user;
        if (user == 1)
        {
            cout << "Enter your password - ";
            cin >> temp;
            if (temp != super_user_passwd)
            {
                cout << "Invalid password\n\n";
                continue;
            }
            // malik
            cout << "You are superuser and logged in successfully.\n";
            cout << "What do you want to do - \n";
            cout<<"(1) create or update user password\n";
            cout<<"(2) Delete user\n";
            cout<<"(3) chnage number of user\n";
            cout<<"(4) Display user and password\n";
            cout<<"(5) Change password\n";
            cout<<"(6) Default\n--> ";
            int condition = 0;
            cin >> condition;
            switch (condition)
            {
            case 1:
            {
                int id;
                cout << "Enter karmchari' id(0-" << init_user - 1 << ") - ";
                cin >> id;
                if (id >= 0 and id < init_user)
                {
                    string temp_passwd;
                    cout << "Enter karmchari' password - ";
                    cin >> temp_passwd;
                    *(password_ptr+id) = temp_passwd;

                    cout << "Password saved successfully for user id " << id << " with password " << *(password+id) << "\n\n";
                }
                else
                {
                    cout << "Invalid user id\n\n";
                }
                break;
            }

            case 2:
            {
                int id=-1;
                cout << "Enter karmchari' id(0-" << init_user - 1 << ") - ";
                cin >> id;
                if (id >= 0 and id < init_user)
                {
                    *(password+id) = "";
                    cout << "Deleted user id " << id << "\n\n";
                }
                else
                {
                    cout << "Invalid user id\n\n";
                }
                break;
            }

            case 3:
            {                
                int new_users;
                cout<<"Enter number of new users - ";
                cin>>new_users;
                string new_password[new_users];
                for (int i = 0; i < new_users; i++)
                {
                    if (i < init_user)
                    {   
                        new_password[i] = *(password_ptr+i);
                    }
                    else
                    new_password[i] = "";
                    
                }
                password_ptr = new_password;
                init_user = new_users;
                break;
            }

            case 4:
            {
                for (int i = 0; i < init_user; i++)
                {
                    cout<<"user id - "<<i<<" and password is - "<<*(password+i)<<"\n";
                    // printf("userid - %d and password is %d", i, password);
                }

                cout<<"Total users are - "<<init_user<<"\n\n";
                break;
                
            }

            case 5:
            {
                string tmp_pass;
                cout << "Enter new password - ";
                cin >> tmp_pass;
                super_user_passwd = tmp_pass;
                cout << "Your password changed successfully\n\n";
                break;
            }

            default:
                break;
            }
            cout << "Do you want to close program - ";
            cin >> flag;
        }
        else if (user == 2)
        {
            // karmachari
            int id;
            cout << "Enter your id - ";
            cin >> id;
            if (id >= 0 and id < init_user)
            {
                cout << "Enter your password - ";
                cin >> temp;
                if (password and temp != *(password_ptr+id))
                {
                    cout << "Invalid id or password\n\n";
                    continue;
                }
                cout << "You are user and logged in successfully and your id is " << id << ".\n\n";
            }
            else
            {
                cout << "invalid user id\n\n";
            }
        }
        else
        {
            cout << "invalid user\n\n";
        }
    } while (flag != 'y');

    return 0;
}
