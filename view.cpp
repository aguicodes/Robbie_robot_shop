#include "std_lib_facilities.h"
#include "view.h"
int view_menu(){
    
    string input;
    
    int number;
    
    bool error_check = true;
    
    cout << "1 (C)reate\n2 View (R)eports\n\nEnter command here: ";
 
    
    while(error_check){
        
        cin >> input;
        
        if(input == "q"){
            cout<< "\nexiting...\n";
            exit(0);
        }
        
        //number = atoi(input.c_str());
        
        else if((input == "C") || (input == "R") ){

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
    
    cout << "\n1.1 (O)rder\n1.2 (C)ustomer\n1.3 (S)ales Associate\n";
    cout << "1.4 Robot (M)odel\n1.5 Robot Com(P)onent\n\nEnter command here: ";
    
    
    while(error_check){
        
        cin >> input;
        
        if(input == "q"){
            cout<< "\nexiting...\n";
            exit(0);
        }
        
        else if((input == "O") || (input == "C") || (input == "S") || (input == "M") || (input == "P")){
            
            if(input == "O"){
                number = 1;
            }
            else if (input == "C") {
                number = 2;
            }
            else if (input == "S") {
                number = 3;
            }
            else if (input == "M") {
                number = 4;
            }
            else{
                number = 5;
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
    
    cout << "\n1.1 (O)rders\n1.2 (C)ustomers\n1.3 (S)ales Associates\n";
    cout << "1.4 Robot (M)odels\n1.5 Robot(P)arts\n\nEnter command here: ";
    
    
    while(error_check){
        
        cin >> input;
        
        if(input == "q"){
            cout<< "\nexiting...\n";
            exit(0);
        }
        
        else if((input == "O") || (input == "C") || (input == "S") || (input == "M") || (input == "P")){
            
            if(input == "O"){
                number = 1;
            }
            else if (input == "C") {
                number = 2;
            }
            else if (input == "S") {
                number = 3;
            }
            else if (input == "M") {
                number = 4;
            }
            else{
                number = 5;
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
    
    //cout<< "size: " << list.size() << endl;

    for(int i = 1; i < counter; i++){
        
        cout << "\nPart type: "<< list[i].type;
        cout << "\nPart name: " << list[i].part_name;
        cout << "\nPart number: " << list[i].type << endl;
        //cout << list[j].media << ") ISBN: " << list[j].isbn << endl;
        if(list[i].torso){
            cout << "Battery amount: " << list[i].torso_battery_amount << endl;
        }
        else if(list[i].arm){
            cout << "Power consumption (in watts): " << list[i].arm_power << endl;
        }
        else if(list[i].locomotor){
            cout << "Max speed: " << list[i].locomotor_speed << "Power Consumption: ";
            cout << list[i].locomotor_power << endl;
        }
        else if(list[i].battery){
            cout << "\nBattery energy:  " << list[i].battery_energy << endl;
        }
        /*cout << list[j].media << ") ISBN: " << list[j].isbn << endl;
        cout << list[j].media << ") ISBN: " << list[j].isbn << endl;
        cout << list[j].media << ") ISBN: " << list[j].isbn << endl;*/

    }
}
/*int check_it_in(vector<Library> list, int counter, string telephone){
    for(int i = 1; i <= counter; i++){
        if(!(list[i].number).compare(telephone)){
            return i;
        }
    }
    return -1;
}
int check_it_out(vector<Library> list, int counter, string idnum){
    for(int i = 1; i <= counter; i++){
        if(!(list[i].isbn).compare(idnum)){
            return i;
        }
    }
    return -1;
}*/
