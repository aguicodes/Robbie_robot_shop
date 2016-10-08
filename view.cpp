#include "std_lib_facilities.h"
#include "view.h"

int view_menu(){
    
    string input;
    
    int number;
    
    bool error_check = true;
    
    cout << "1: Create\n2: Report\n";
    cout << "3: Save\nEnter here: ";
 
    
    while(error_check){
        
        cin >> input;
        
        if(input == "q"){
            cout<< "\nexiting...\n";
            exit(0);
        }
        
        number = atoi(input.c_str());
        
        if((number < 1) ||(number > 3) ){
            
            cout<< "That is not a valid input please try again: ";
        }
        else{
            error_check = false;
        }
    }
    
    return number;
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
