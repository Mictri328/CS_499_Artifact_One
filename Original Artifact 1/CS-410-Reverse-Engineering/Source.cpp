#include<iostream>
#include <string>
#include <cstdlib>

using namespace std;



const char* clients[5] = { "Bob Jones", "Sara Davis", "Amy Friendly","Johnny Smith", "Carol Spears" }; //Array instead of individual user inputs better for adding later

int services[5] = { 1,2,1,1,2 }; //Arry for services if more employees added later



int CheckUserPermissionAccess() {
    // Usernames should be stored with passwords in seperate dictionary, list, array, etc

    string user_name = "";
    string password = "";


    cout << "Enter Your User Name:" << endl;
    cin >> user_name;


    cout << "Enter Your Password:" << endl;
    cin >> password;

    while (password != "123") {
        if (password == "123") {
            return 0;
        }
        else {

            cout << "Invalid Password. Please try again" << endl;

        }
        return 1;
    }
}

int DisplayInfor() {

    cout << "Client's Name  Service Selected (1 = Brokerage, 2 = Retirement)" << endl;
    int num1 = services[0];
    cout << "1. " << clients[0] << "Selected Option " << num1 << endl;

    int num2 = services[1];
    cout << "2. " << clients[1] << "Selected Option " << num2 << endl;

    int num3 = services[2];
    cout << "3. " << clients[2] << "Selected Option " << num3 << endl;

    int num4 = services[3];
    cout << "4. " << clients[3] << "Selected Option " << num4 << endl;

    int num5 = services[4];
    cout << "5. " << clients[4] << "Selected Option " << num5 << endl;

    return 0;;
}


void ChangeCustomerChoice() {

    int newChoice = 0;

    cout << "Enter the number of the client that you wish to change" << endl;
    cin >> newChoice;

    cout << "Please Enter The Clients new Service(1 = Brokerage, 2 = Retirement)" << endl;
    int newService = 0;

    cin >> newService;

    if (newChoice == 1) {
        services[0] = newService;
    }
    else if (newChoice == 2) {
        services[1] = newService;
    }
    else if (newChoice == 3) {
        services[2] = newService;
    }
    else if (newChoice == 4) {
        services[3] = newService;
    }
    else if (newChoice == 5) {
        services[4] = newService;
    }
}




int main(int argc, char** argv) {


    cout << "Hello! Welcome to our Investment Company" << endl;

    int login = CheckUserPermissionAccess();


    // should also have attempt limit to close program after X amount of attempts 
    while (login == 1) {

        login = CheckUserPermissionAccess();

    }



    int choice = 0;

    while (choice != 3) {

        cout << "What would you Like to do?" << endl;
        cout << "Display The client list (enter 1)" << endl;
        cout << "Change a client's choice (enter 2)" << endl;
        cout << "Exit (enter 3)" << endl;

        cin >> choice;
       

            if (choice == 1) {
                cout << "You Chose 1" << endl;
                DisplayInfor();

            }
            else if (choice == 2) {

                cout << "You Chose 2" << endl;
                ChangeCustomerChoice();

            }
            else if (choice == 3) {

                cout << "You Chose 3" << endl;

            }

        }
        return 0;
    }
