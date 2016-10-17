#include "std_lib_facilities.h"
#include "view.h"
#include "robot_parts.h"
#include "sales_associates.h"
#include "customers.h"
#include "orders.h"


int main () {
    

    vector <Parts> parts;
 
    
    int main_menu_option = 0;
    int create_option = 0;
    int report_option = 0;
    int i = 1;
    int size = 10;
    
    while(true){

        cout << "\nMain Menu ( or press \"q\" to quit)\n_ _ _ _ _\n" << endl ;
        main_menu_option = view_menu();
        
        if(main_menu_option == 1){
            int create_option = view_create();
            if (create_option == 5){
                if(i > (parts.size())){
                    parts.resize(size*size);
                    size = size*size;
                }
                parts[i].create_parts();
                i++;
            }
            else if(create_option == 1){
                //order code here
            }
            else if(create_option == 2){
                //code here
            }
            else if(create_option == 3){
                //code here
            }
            else if(create_option == 4){
               
                //
            }
            /*++i;
            if(i > (publications.size())){
                publications.resize(size*size);
                size = size*size;
            }
            publications[i].create_publication();*/
            
        }
        else if(main_menu_option == 2){
            
            int create_option = view_reports();
            
            if (create_option == 5){
                view_parts(parts, i);
            }

            
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
