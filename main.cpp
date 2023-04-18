#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Details
{
    public:

        static string name;
        static int age;
        int phone;
        static string address;
        static int id;
        char arr[100];

        void information()
        {
            cout<<"\nEnter the customer's ID: ";
            cin>>id;
            cout<<"\nEnter the customer's NAME: ";
            cin>>name;
            cout<<"\nEnter the customer's AGE: ";
            cin>>age;
            cout<<"\nEnter the customer's PHONE: ";
            cin>>phone;
            cout<<"\nEnter the customer's ADDRESS: ";
            cin>>address;

            cout<<"Details saved successfully!"<<endl;

        }
};

int Details::id;
string Details::name;
int Details::age;
string Details::address;

class registration
{
    public:
        static int choice;
        int firstChoice;
        int back;
        static float charges;

        void flights()
        {
            string flightN[]={"Dubai", "Canada", "Europe"};
            
            for(int i = 0; i < 3; i++)
            {
                cout<<(i+1)<<". flight to "<<flightN[i]<<endl;
            }

            cout<<"\nWelcome! - Airline Company"<<endl;
            cout<<"Press the number of the country of wich you want to book a flight: ";
            cin>>choice;

            switch (choice)
            {
            case (1):
                {
                    cout<<"__________Welcome to Dubai Emirates__________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                    cout<<"Disponible flights: \n"<<endl;
                    cout<<"1. DUB - 428"<<endl;
                    cout<<"\t04-05-2023 08:00AM 10h 1500Lei"<<endl;
                    cout<<"2. DUB - 438"<<endl;
                    cout<<"\t05-05-2023 08:00AM 10h 1400Lei"<<endl;
                    cout<<"3. DUB - 448"<<endl;
                    cout<<"\t06-05-2023 08:00AM 10h 1100Lei"<<endl;
                    cout<<"\nSelect the flight number you want to book: ";
                    cin>>firstChoice;

                    if(firstChoice == 1)
                    {
                        charges = 1500;
                        cout<<"\nYou have successfully booked the flight DUB - 428"<<endl;
                        cout<<"You can go back to menu and take the ticket."<<endl;
                    }else if(firstChoice == 2)
                        {
                            charges = 1400;
                        cout<<"\nYou have successfully booked the flight DUB - 438"<<endl;
                        cout<<"You can go back to menu and take the ticket."<<endl;
                        }else if(firstChoice == 3)
                            {
                                charges = 1100;
                                cout<<"\nYou have successfully booked the flight DUB - 438"<<endl;
                                cout<<"You can go back to menu and take the ticket."<<endl;
                            }else
                                {
                                  cout<<"Invalid input, shifting to the previous menu."<<endl;
                                  flights();  
                                }

                    cout<<"Press any key to go back to Main Menu."<<endl;
                    cin>>back;
                    mainMenu();
                    break;              
                }
                
            case (2):
                {
                    cout<<"__________Welcome to Canadian Airlines__________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                    cout<<"Disponible flights: \n"<<endl;
                    cout<<"1. CA - 428"<<endl;
                    cout<<"\t07-01-2023 08:00AM 10h 2500Lei"<<endl;
                    cout<<"2. CA - 438"<<endl;
                    cout<<"\t07-02-2023 08:00AM 10h 2400Lei"<<endl;
                    cout<<"3. CA - 448"<<endl;
                    cout<<"\t06-02-2023 08:00AM 10h 2100Lei"<<endl;
                    cout<<"\nSelect the flight number you want to book: ";
                    cin>>firstChoice;

                    if(firstChoice == 1)
                    {
                        charges = 2500;
                        cout<<"\nYou have successfully booked the flight CA - 428"<<endl;
                        cout<<"You can go back to menu and take the ticket."<<endl;
                    }else if(firstChoice == 2)
                        {
                            charges = 2400;
                        cout<<"\nYou have successfully booked the flight CA - 438"<<endl;
                        cout<<"You can go back to menu and take the ticket."<<endl;
                        }else if(firstChoice == 3)
                            {
                                charges = 2100;
                                cout<<"\nYou have successfully booked the flight CA - 438"<<endl;
                                cout<<"You can go back to menu and take the ticket."<<endl;
                            }else
                                {
                                  cout<<"Invalid input, shifting to the previous menu."<<endl;
                                  flights();  
                                }

                    cout<<"Press any key to go back to Main Menu."<<endl;
                    cin>>back;
                    mainMenu();    
                    break;         
                }

            case (3):
                {
                    cout<<"__________Welcome to Europe Airlines__________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                    cout<<"Disponible flights: \n"<<endl;
                    cout<<"1. EU - 428"<<endl;
                    cout<<"\t04-05-2023 08:00AM 10h 1500Lei"<<endl;
                    cout<<"2. EU - 438"<<endl;
                    cout<<"\t05-05-2023 08:00AM 10h 1400Lei"<<endl;
                    cout<<"3. EU - 448"<<endl;
                    cout<<"\t06-05-2023 08:00AM 10h 1100Lei"<<endl;
                    cout<<"\nSelect the flight number you want to book: ";
                    cin>>firstChoice;

                    if(firstChoice == 1)
                    {
                        charges = 1500;
                        cout<<"\nYou have successfully booked the flight EU - 428"<<endl;
                        cout<<"You can go back to menu and take the ticket."<<endl;
                    }else if(firstChoice == 2)
                        {
                            charges = 1400;
                        cout<<"\nYou have successfully booked the flight EU - 438"<<endl;
                        cout<<"You can go back to menu and take the ticket."<<endl;
                        }else if(firstChoice == 3)
                            {
                                charges = 1100;
                                cout<<"\nYou have successfully booked the flight EU - 438"<<endl;
                                cout<<"You can go back to menu and take the ticket."<<endl;
                            }else
                                {
                                  cout<<"Invalid input, shifting to the previous menu."<<endl;
                                  flights();  
                                }

                    cout<<"Press any key to go back to Main Menu."<<endl;
                    cin>>back;
                    mainMenu(); 
                    break;          
                }    

            
            default:
                cout<<"Invalid input, shifting to Main Menu."<<endl;
                mainMenu();  
                break;
            }


        }
};

float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
    public:

        void bill()
        {
            string destination = "";
            ofstream fout("ticket.txt");
            {
                fout<<"                 Airline Company\n"<<endl;
                fout<<"____________________TICKET____________________"<<endl;
                fout<<"______________________________________________"<<endl;
                fout<<"___________________Customer___________________"<<endl;
                fout<<"Customer ID: \t\t"<<Details::id<<endl;
                fout<<"Customer Name: \t\t"<<Details::name<<endl;
                fout<<"Customer Age: \t\t"<<Details::age<<endl;
                fout<<"\n________________Description___________________"<<endl<<endl;

                if(registration::choice == 1)
                {
                    destination = "Dubai";
                }else if(registration::choice == 2)
                    {
                        destination = "Canada";
                    }else if(registration::choice == 3)
                        {
                            destination = "Europe";
                        }

                fout<<"Destination: \t\t"<<destination<<endl;       
                fout<<"Flight price: \t\t"<<registration::charges<<endl; 
                fout<<"______________________________________________"<<endl;
            }

            fout.close();
        }

            

            void displayBill()
            {
                ifstream fin("ticket.txt");
                {
                    if(!fin)
                    {
                        cout<<"File error!"<<endl;
                    }

                    while(!fin.eof())
                    {
                        fin.getline(arr, 100);
                        cout<<arr<<endl;
                    }
                }

                fin.close();
            }


};

void mainMenu()
{
    int userChoice;
    int schoice;
    int back;

    cout<<endl;
    cout<<"                 Airline Company\n              "<<endl;
    cout<<"____________________Main Menu____________________"<<endl;

    cout<<"_________________________________________________"<<endl;
    cout<<"|                                               |"<<endl;
    cout<<"| Press 1 to add the Customer Details           |"<<endl;
    cout<<"| Press 2 to for flight registration            |"<<endl;
    cout<<"| Press 3 for Tickets and Charges               |"<<endl;
    cout<<"| Press 4 to Exit                               |"<<endl;
    cout<<"|                                               |"<<endl;
    cout<<"-------------------------------------------------"<<endl;

    cout<<"Please enter your choice: ";
    cin>>userChoice;

    Details d;
    registration r;
    ticket t;

    switch(userChoice)
    {
        case(1):
            {
               cout<<"__________Customers__________\n"<<endl;
               d.information();
               cout<<"Press any key to go back to Main Menu.";
               cin>>back;
               mainMenu();
               break;
            }

        case(2):
            {
                cout<<"__________Book a fliight using this system__________\n"<<endl;
                r.flights();
                break;
            }

        case(3):
            {
                cout<<"__________Get your ticket__________\n"<<endl;
                t.bill();

                cout<<"Your ticket is printed, you can get it.\n";

                cout<<"Press 1 to display your ticket.\nOR press any key to get back to Main Menu.";
                cin>>back;

                if(back == 1)
                {
                    t.displayBill();
                    cout<<"Press any key to go back to Main Menu.";
                    cin>>back;
                    mainMenu();  
                }else
                    {
                        mainMenu();
                    }
                break;    
            } 

        case(4):
            {
                cout<<"\n\n______________Thank you!______________\n...exit"<<endl;
                break;
            }

        default: 
            {
                cout<<"Invalid input, please try again!\n";
                mainMenu();
                break;
            }               
    }

}

int main()
{
    mainMenu();
    return 0;
}