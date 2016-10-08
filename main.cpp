#include "std_lib_facilities.h"
#include "view.h"
#include "robot_arm.h"
#include "robot_head.h"
#include "robot_torso.h"
#include "robot_locomotor.h"


int main () {
    
    /*static int i = 0;
    int size = 10;
    vector<robot_parts> parts;
    string input;
    string isbn_input;
    string name;
    string tele_num;*/
    int option = 0;
    
    int create = 0;
    
    //cout << "\nMain Menu ( or press \"q\" to quit)\n_ _ _ _ _\n" << endl ;
    
    while(true){
        //cout << "\nPlease select 1 of the 5 options or q to quit: " << endl ;
        cout << "\nMain Menu ( or press \"q\" to quit)\n_ _ _ _ _\n" << endl ;
        option = view_menu();
        
        if(option == 1){
            /*++i;
            if(i > (publications.size())){
                publications.resize(size*size);
                size = size*size;
            }
            publications[i].create_publication();*/
            int create = view_create();
            
            
        }
        else if(option == 2){
            
            //view_publications(publications, i);
            cout << "you picked report\n";
        }
        else if(option == 3){
            cout << "You picked save\n";
            /*cin >> input;
            if(input == "q"){
                cout << "exiting...\n";
                exit(0);
            }
            int position = check_it_in(publications, i, input);
            
            if(position == -1){
                cout << "\nThere is not a publication checked out under that telephone number\n";
            }
            else{
                publications[position].available = true;
                cout << "\nThe publication has been checked in, Thank you.\n";
                publications[position].name = "Available for checkout.";
            }*/
            
        }
        else if(option == 4){
            
            cout << "you wanna quit";
            
            /*cin >> isbn_input;
            if(isbn_input == "q"){
                cout << "exiting...\n";
                exit(0);
            }
            int position = check_it_out(publications, i, isbn_input);
            
            if(position == -1){
                cout << "\nThere is not a publication under that ISBN\n";
            }
            else{
                publications[position].available = false;
                cout << "The publication has been found, please enter your name: ";
                cin.ignore(1,'\n');
                getline(cin, name);
                publications[position].name = name;
                
                cout << "Please enter your telephone number: ";
                getline(cin, tele_num);
                publications[position].number = tele_num;
            }*/
        }
        /*else if (option == 5){
            cout << "Welcome!!!\nFirst off... if you would like to quit the program at anytime just press q to quit.\n";
            cout << "follow the menu for the command you would like to proceed with. Notice that \n";
            cout << "when you choose command 2 to view the publications, you will be able to see if its\n";
            cout << "checked out or not, directly under the publication information\nPlease, enjoy the program\n";
            
        }*/
    }
    
    return 0;
}
