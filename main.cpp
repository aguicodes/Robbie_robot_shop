#include "std_lib_facilities.h"
#include "view.h"
#include "robot_parts.h"
#include "sales_associates.h"
#include "customers.h"
#include "robot_models.h"


int main () {
    

    
    vector <Parts> parts;
    
    vector <Models> models;
 
    string customer[5];
    
    int main_menu_option = 0;
    int create_option = 0;
    //int report_option = 0;
    static int i = 1;
    static int j = 1;
    int size = 100;
    int model_size = 100;
    string input;
    double price = 0;
    int quantity = 0;
    
    while(true){

        cout<<"\nMain Menu ( or press \"q\" to quit)\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n"<<endl;
        main_menu_option = view_menu();
        
        if(main_menu_option == 1){
            int create_option = view_create();
            if (create_option == 5){
                if(i > (parts.size())){
                    size = size*2;
                    parts.resize(size);
                }
                parts[i].create_parts();
                i++;
            }
            else if(create_option == 4){
                if(j > (models.size())){
                    model_size = model_size*2;
                    models.resize(model_size);
                }
                models[j].create_models(parts, i);
                j++;
            }
            else if(create_option == 1){
                cout << "\nPurchasing your robot model!\n";
                cout << "\nPlease make sure you have viewed the model catalog, you can press q n0w to go back, else press enter: ";
                
                cin.ignore(1,'\n');
                getline(cin, input);
                while (true){
                    if(input == "q"){
                        cout<< "\ngoing back...\n\n";
                        break;
                    }
                    cout<< "\nPlease enter your name: ";
                //cin.ignore(1,'\n');
                    getline(cin, customer[0]);
                    cout<< "Please enter your telephone number: ";
                    getline(cin, customer[1]);
                    cout << "Email address: ";
                    getline(cin, customer[2]);
                    cout << "Thank you! Now please enter the robot name you wish to buy: ";
                    
                    int found = 0;
                    
                    while(true){
                        for(int k = 1; k < j; k++){
                        //models[k].name;
                            if(models[k].name == customer[3]){
                            //models[k].view_models();
                                found = 1;
                                break;
                            }
                        }
                        if(found == 1){
                            break;
                        }
                        else{
                            cout << "\nThat robot does not exist, try again: ";
                            getline(cin, customer[3]);
                            
                        }
                    }
                    cout << "Quantity: ";
                    while(true){
                        
                        getline(cin, customer[4]);
                        quantity = atoi((customer[4]).c_str());
                        
                        if(quantity == 0){
                            
                            cout << "That is not a valid input try again: ";
                            if(customer[3] == "q"){
                                cout<< "\nexiting...\n\n";
                                exit(0);
                            }
                            
                        }
                        else{
                            
                            break;
                        }
                        
                    }
                    //getline(cin, customer[4]);
                    break;
                }
                
                for(int k = 1; k < j; k++){
                    //models[k].name;
                    if(models[k].name == customer[3]){
                        models[k].view_models();
                        price = models[k].cost;
                        price = price * quantity;
                        cout << "total: " << price << endl;
                        break;
                    }
                }
               // price = price * quantity;
                //cout << "total: " << price << endl;
                
            }
            /*else if(create_option == 3){
                //code here
            }
            else if(create_option == 4){
               
                //
            }
            ++i;
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
            else if (create_option == 4){
                for(int k = 1; k < j; k++){
                    models[k].view_models();
                }
               // models.view_models();
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
