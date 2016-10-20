#include "std_lib_facilities.h"
#include "view.h"
#include "robot_parts.h"
#include "robot_models.h"


int main () {
    
    vector <Parts> parts;
    
    vector <Models> models;
 
    string customer[5];
    
    int main_menu_option = 0;
    int create_option = 0;
    static int i = 1;
    static int j = 1;
    int size = 100;
    int model_size = 100;
    string input;
    double price = 0;
    int quantity = 0;
    int main = 0;
    double total = 0;
    
    while(true){

        cout<<"\nMain Menu ( or press \"q\" to quit)\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n"<<endl;
        main_menu_option = view_menu();
        
        if(main_menu_option == 1){
            int create_option = view_create();
            if (create_option == 1){
                if(i > (parts.size())){
                    size = size*2;
                    parts.resize(size);
                }
                parts[i].create_parts();
                i++;
            }
            else if(create_option == 2){
                if(j > (models.size())){
                    model_size = model_size*2;
                    models.resize(model_size);
                }
                models[j].create_models(parts, i);
                j++;
            }
            else if(create_option == 3){
                cout << "\nPurchasing your robot model!\n";
                cout << "\nPlease make sure you have viewed the model catalog, you can press q n0w to go back, else press enter: ";
                
                cin.ignore(1,'\n');
                getline(cin, input);
                main = 0;
                while (true){
                    if(input == "q"){
                        cout<< "\ngoing back...\n\n";
                        main = 1;
                        break;
                    }
                    cout<< "\nPlease enter your name: ";
                    getline(cin, customer[0]);
                    cout<< "Please enter your telephone number: ";
                    getline(cin, customer[1]);
                    cout << "Email address: ";
                    getline(cin, customer[2]);
                    cout << "Thank you! Now please enter the robot name you wish to buy: ";
                    getline(cin, customer[3]);
                    int found = 0;
                    
                    while(true){
    
                        if(customer[3] == "q"){
                            cout<< "\nexiting...\n\n";
                            exit(0);
                        }
                        
                        for(int k = 1; k < j; k++){
                            if(models[k].name == customer[3]){
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
                    break;
                }
                
                for(int k = 1; k < j; k++){
                    if (main == 1){
                        break;
                    }
                    if(models[k].name == customer[3]){
                        models[k].view_models();
                        price = models[k].cost;
                        price = price * quantity;
                        
                        cout << "\n\nThank for your purchase!\n";
                        cout << "Customer info:\n" << customer[0] << "\n" << customer[1] << endl;
                        cout << customer[2] << endl;
                        cout << "Price: " << price << endl;
                        cout << "Sales tax 8%\n";
                        total = (price* 0.08) + price;
                        cout << "Total price: " << total << endl ;
     
                        break;
                    }
                }
            }
        }
        else if(main_menu_option == 2){
            
            int create_option = view_reports();
            
            if (create_option == 1){
                view_parts(parts, i);
            }
            else if (create_option == 2){
                for(int k = 1; k < j; k++){
                    models[k].view_models();
                }
            }
        }
    }
    
    return 0;
}
