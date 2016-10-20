#include "std_lib_facilities.h"
#include "view.h"
int view_menu(){
    
    string input;
    
    int number;
    
    bool error_check = true;
    
    cout << "1 (C)reate\n2 View Cat(A)logs\n\nEnter command here: ";
 
    
    while(error_check){
        
        cin >> input;
        
        if(input == "q"){
            cout<< "\nexiting...\n\n";
            exit(0);
        }
        
        else if((input == "C") || (input == "A") ){

            if(input == "C"){
                number = 1;
            }
            else {
                number = 2;
            }
            error_check = false;
            return number;
        }
        else{
            cout<< "That is not a valid input please try again: ";
        }
    }
}

int view_create(){
    
    string input;
    
    int number;
    
    bool error_check = true;
    
    cout << "\n1.1 Robot Com(P)onent\n1.2 Robot (M)odel\n1.3 (O)rder\n\n";
    cout << "Enter command here: ";
    
    
    while(error_check){
        
        cin >> input;
        
        if(input == "q"){
            cout<< "\nexiting...\n\n";
            exit(0);
        }
        
        else if((input == "O") || (input == "M") || (input == "P")){
            
            if(input == "O"){
                number = 3;
            }
            else if (input == "M") {
                number = 2;
            }
            else{
                number = 1;
            }
            error_check = false;
            return number;
        }
        else{
            cout<< "That is not a valid input please try again: ";
        }
    }
}
int view_reports(){
    string input;
    
    int number;
    
    bool error_check = true;
    

    cout << "1.1 Robot(P)arts\n1.2 Robot(M)odels\n\nEnter command here: ";
    
    
    while(error_check){
        
        cin >> input;
        
        if(input == "q"){
            cout<< "\nexiting...\n\n";
            exit(0);
        }
        
        else if((input == "M") || (input == "P")){
            
            if(input == "P"){
                number = 1;
            }
            else{
                number = 2;
            }
            error_check = false;
            return number;
        }
        else{
            cout<< "That is not a valid input please try again: ";
        }
    }
}
void view_parts(vector<Parts> list, int counter){
    
    for(int i = 1; i < counter; i++){
        
        cout << "\n*************************\nPart type: "<< list[i].type;
        cout << "\n*************************\nPart name: " << list[i].part_name;
        cout << "\nPart number: " << list[i].type << endl;

        if(list[i].torso){
            cout << "Battery amount: " << list[i].torso_battery_amount << endl;
        }
        else if(list[i].arm){
            cout << "Power consumption (in watts): " << list[i].arm_power << endl;
        }
        else if(list[i].locomotor){
            cout << "Max speed: " << list[i].locomotor_speed << "\nPower Consumption: ";
            cout << list[i].locomotor_power << endl;
        }
        else if(list[i].battery){
            cout << "Battery energy:  " << list[i].battery_energy << endl;
        }
        cout << "Part weight(in lbs): " << list[i].weight << endl;
        cout << "Price: " << list[i].cost <<"\nDescription: "<< list[i].description << endl;
        cout << "*************************" << endl;

    }
}

