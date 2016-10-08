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
        
        //number = atoi(input.c_str());
        
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
/*void view_publications(vector<Library> list, int counter){

    for(int j = 1; j <= counter; j++){
        
        cout << "\"" << list[j].title << "\"" << " by " << list[j].author << ", ";
        cout << list[j].year << " ("<< list[j].target_age << " " << list[j].genre << " ";
        cout << list[j].media << ") ISBN: " << list[j].isbn << endl;
        if((list[j].available) == true){
            cout << "Available for checkout.\n";
        }
        else{
            cout << "Checked out to " << list[j].name << " (" << list[j].number << ")\n";
        }
    }
}
int check_it_in(vector<Library> list, int counter, string telephone){
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
