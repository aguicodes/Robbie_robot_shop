#include "std_lib_facilities.h"
#include "robot_models.h"
#include "robot_parts.h"
#include "view.h"

void Models::create_models(vector<Parts>list, int size){
    
    string input;
    bool part_exist = true;
    
    cout << "\n******************************\nHead parts to choose from\n";
    cout << "******************************\n";
    
    for(int i = 0; i < size; i++){
        
        if(list[i].type == "head"){
            
            cout << "Part name: " << list[i].part_name << endl;
            cout << "Part number: " << list[i].part_number << endl;
            cout << "Description: " << list[i].description << endl;
            cout << "\n";
          
        }
    }
    while(part_exist){
            
        cout<< "Please enter head part number: ";
        cin.ignore(1,'\n');
        getline(cin, input);
            
        for(int i = 0; i < size; i++){
                
            if(list[i].part_number == input){
                //cout << "works\n and this is the part: ";
                head [0] = list[i].type;
                //cout << head[0] << endl;
                head [1] = list[i].part_name;
                head [2] = list[i].part_number;
                head [3] = list[i].weight;
                head [4] = list[i].cost;
                head [5] = list[i].description;
                part_exist = false;
                break;
            }
        }
        if(!part_exist){
                
            continue;
                
        }
            
        cout << "That part does not exist please try again.\n";
        cout<< " ******************************************\n";
    }
    
    cout << "\n******************************\nArm parts to choose from\n";
    cout << "******************************\n";
    part_exist = true;
    for(int i = 0; i < size; i++){
        
        if(list[i].type == "arm"){
            
            cout << "Part name: " << list[i].part_name << endl;
            cout << "Part number: " << list[i].part_number << endl;
            cout << "Description: " << list[i].description << endl;
            cout << "\n";
            
        }
    }
    while(part_exist){
        
        cout<< "Please enter part number for first arm: ";
        cin.ignore(1,'\n');
        getline(cin, input);
        
        for(int i = 0; i < size; i++){
            
            if(list[i].part_number == input){
                //cout << "works\n and this is the part: ";
                arm_1 [0] = list[i].type;
                //cout << head[0] << endl;
                arm_1 [1] = list[i].part_name;
                arm_1 [2] = list[i].part_number;
                arm_1 [3] = list[i].arm_power;
                arm_1 [4] = list[i].weight;
                arm_1 [5] = list[i].cost;
                arm_1 [6] = list[i].description;
                part_exist = false;
                break;
            }
        }
        if(!part_exist){
            
            continue;
            
        }
        
        cout << "That part does not exist please try again.\n";
        cout<< " ******************************************\n";
    }
    cout << "\n******************************\nArm parts to choose from\n";
    cout << "******************************\n";
    
    part_exist = true;
    for(int i = 0; i < size; i++){
        
        if(list[i].type == "arm"){
            
            cout << "Part name: " << list[i].part_name << endl;
            cout << "Part number: " << list[i].part_number << endl;
            cout << "Description: " << list[i].description << endl;
            cout << "\n";
            
        }
    }
    while(part_exist){
        
        cout<< "Please enter part number for second arm: ";
        cin.ignore(1,'\n');
        getline(cin, input);
        
        for(int i = 0; i < size; i++){
            
            if(list[i].part_number == input){
                arm_2 [0] = list[i].type;
                //cout << head[0] << endl;
                arm_2 [1] = list[i].part_name;
                arm_2 [2] = list[i].part_number;
                arm_2 [3] = list[i].arm_power;
                arm_2 [4] = list[i].weight;
                arm_2 [5] = list[i].cost;
                arm_2 [6] = list[i].description;

                part_exist = false;
                break;
            }
        }
        if(!part_exist){
            
            continue;
            
        }
        
        cout << "That part does not exist please try again.\n";
        cout<< " ******************************************\n";
    }
    cout << "\n******************************\nTorso parts to choose from\n";
    cout << "******************************\n";
    part_exist = true;
    for(int i = 0; i < size; i++){
        
        if(list[i].type == "torso"){
            
            cout << "Part name: " << list[i].part_name << endl;
            cout << "Part number: " << list[i].part_number << endl;
            cout << "Description: " << list[i].description << endl;
            cout << "\n";
            
        }
    }
    while(part_exist){
        
        cout<< "Please enter torso part number: ";
        cin.ignore(1,'\n');
        getline(cin, input);
        
        for(int i = 0; i < size; i++){
            
            if(list[i].part_number == input){
                torso [0] = list[i].type;
                torso [1] = list[i].part_name;
                torso [2] = list[i].part_number;
                torso [3] = list[i].torso_battery_amount;
                
                torso [4] = list[i].weight;
                torso [5] = list[i].cost;
                torso [6] = list[i].description;

                part_exist = false;
                break;
            }
        }
        if(!part_exist){
            
            continue;
            
        }
        
        cout << "That part does not exist please try again.\n";
        cout<< " ******************************************\n";
    }
    
    cout << "\n******************************\nLocomotor parts to choose from\n";
    cout << "******************************\n";
    part_exist = true;
    for(int i = 0; i < size; i++){
        
        if(list[i].type == "locomotor"){
            
            cout << "Part name: " << list[i].part_name << endl;
            cout << "Part number: " << list[i].part_number << endl;
            cout << "Description: " << list[i].description << endl;
            cout << "\n";
            
        }
    }
    while(part_exist){
        
        cout<< "Please enter Locomotor part number: ";
        cin.ignore(1,'\n');
        getline(cin, input);
        
        for(int i = 0; i < size; i++){
            
            if(list[i].part_number == input){
                locomotor [0] = list[i].type;
                locomotor [1] = list[i].part_name;
                locomotor [2] = list[i].part_number;
                locomotor [3] = list[i].locomotor_speed;
                locomotor [4] = list[i].locomotor_power;
                
                locomotor [5] = list[i].weight;
                locomotor [6] = list[i].cost;
                locomotor [7] = list[i].description;
                
                part_exist = false;
                break;
            }
        }
        if(!part_exist){
            
            continue;
            
        }
        
        cout << "That part does not exist please try again.\n";
        cout<< " ******************************************\n";
    }
    cout << "\n******************************\nBattery parts to choose from\n";
    cout << "******************************\n";
    part_exist = true;
    for(int i = 0; i < size; i++){
        
        if(list[i].type == "battery"){
            
            cout << "Part name: " << list[i].part_name << endl;
            cout << "Part number: " << list[i].part_number << endl;
            cout << "Description: " << list[i].description << endl;
            cout << "\n";
            
        }
    }
    while(part_exist){
        
        cout<< "Please enter battery part number: ";
        cin.ignore(1,'\n');
        getline(cin, input);
        
        for(int i = 0; i < size; i++){
            
            if(list[i].part_number == input){
                battery [0] = list[i].type;
                battery [1] = list[i].part_name;
                battery [2] = list[i].part_number;
                battery [3] = list[i].battery_energy;
                
                battery [4] = list[i].weight;
                battery [5] = list[i].cost;
                battery [6] = list[i].description;
                
                part_exist = false;
                break;
            }
        }
        if(!part_exist){
            
            continue;
            
        }
        
        cout << "That part does not exist please try again.\n";
        cout<< " ******************************************\n";
    }


    
    /*bool part_exist = true;
    
    int option = 0;
    
    string input "";
    
    for(int i = 0; i < size; i++){
            
        if(list[i].type == "head"){
            
            cout << "Part name: " << list[i].part_name << endl;
            cout << "Part number: " << list[i].part_number << endl;
            cout << "Description: " << list[i].description << endl;
        }
    }
    
    while(part_exist){
        
        cout<< "Please enter head part number: ";
        
        getline(cin, input);
        
        for(int i = 0; i < size; i++){
            
            if(list[i].part_number == input){
                selection[0] = i;
                part_exist = false;
                continue;
            }
        }
        
        cout << "That part does not exist please try again.\n";
        cout<< " ******************************************\n";
    }*/

}
