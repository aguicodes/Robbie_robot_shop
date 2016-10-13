#include "std_lib_facilities.h"
#include "view.h"
#include "robot_parts.h"
#include "sales_associates.h"
#include "customers.h"
#include "orders.h"


int main () {
    

    vector <Parts> parts;
    /*string input;
    string isbn_input;
    string name;
    string tele_num;*/
    
    int main_menu_option = 0;
    int create_option = 0;
    int report_option = 0;
    int i = 1;
    
    string type = "";
    
    //cout << "\nMain Menu ( or press \"q\" to quit)\n_ _ _ _ _\n" << endl ;
    
    while(true){
        //cout << "\nPlease select 1 of the 5 options or q to quit: " << endl ;
        cout << "\nMain Menu ( or press \"q\" to quit)\n_ _ _ _ _\n" << endl ;
        main_menu_option = view_menu();
        
        if(main_menu_option == 1){
            int create_option = view_create();
            if (create_option == 5){
                
                cout << "Part type: ";
                getline(cin, type);
                
                //parts.push_back(Arm());
                
                if ( type == "torso"){
                    parts.push_back(Parts(true, false, false, false));
                }
                else if ( type == "arm"){
                    parts.push_back(Parts(false, true, false, false));
                }
                else if ( type == "battery"){
                    parts.push_back(Parts(false, false, true, false));
                }
                else if ( type == "locomotor"){
                    parts.push_back(Parts(false, false, false, true));
                }
                else{
                    parts.push_back(Parts(false, false, false, false))
                }
 
                parts[i].create_parts();
                i++;
            }
            /*++i;
            if(i > (publications.size())){
                publications.resize(size*size);
                size = size*size;
            }
            publications[i].create_publication();*/
            
        }
        else if(main_menu_option == 2){
            
            //view_publications(publications, i);
            cout << "you picked report\n";
        }
        /*else if(option == 3){
            cout << "You picked save\n";
            cin >> input;
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
            }
            
        }
        else if(option == 4){
            
            cout << "you wanna quit";
            
            cin >> isbn_input;
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
            }
        }
        else if (option == 5){
            cout << "Welcome!!!\nFirst off... if you would like to quit the program at anytime just press q to quit.\n";
            cout << "follow the menu for the command you would like to proceed with. Notice that \n";
            cout << "when you choose command 2 to view the publications, you will be able to see if its\n";
            cout << "checked out or not, directly under the publication information\nPlease, enjoy the program\n";
            
        }*/
    }
    
    return 0;
}
