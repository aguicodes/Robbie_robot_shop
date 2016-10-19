#include "std_lib_facilities.h"
#include "robot_models.h"
#include "robot_parts.h"
#include "view.h"

void Models::create_models(vector<Parts>list, int size){
    
    string input;
    bool part_exist = true;
    
    
    cout << "\n******************************\nWelcome to creating a robot\n";
    cout << "******************************\n";
    
    //cout<< "Give it a name: ";
   // cin.ignore(1,'\n');
   // getline(cin, input);
    
    //robot_name(input);
    
    cout << "\n\n******************************\nHead parts to choose from\n";
    cout << "******************************\n";
    
    for(int i = 1; i < size; i++){
        
        if(list[i].type == "head"){
            
            cout << "Part name: " << list[i].part_name << endl;
            cout << "Part number: " << list[i].part_number << endl;
            cout << "Description: " << list[i].description << endl;
            cout << "\n";
          
        }
    }
    while(part_exist){
            
        cout<< "Please enter head part number: ";
        //cin.ignore(1,'\n');
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
                //add_to_price(head [4]);
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
    for(int i = 1; i < size; i++){
        
        if(list[i].type == "arm"){
            
            cout << "Part name: " << list[i].part_name << endl;
            cout << "Part number: " << list[i].part_number << endl;
            cout << "Description: " << list[i].description << endl;
            cout << "\n";
            
        }
    }
    while(part_exist){
        
        cout<< "Please enter part number for first arm: ";
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
                //add_to_price(arm_1[5]);
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
        //cin.ignore(1,'\n');
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
                //add_to_price(arm_2[5]);
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
        //cin.ignore(1,'\n');
        getline(cin, input);
        
        for(int i = 0; i < size; i++){
            
            if(list[i].part_number == input){
                torso [0] = list[i].type;
                torso [1] = list[i].part_name;
                torso [2] = list[i].part_number;
                torso [3] = list[i].torso_battery_amount;
                //set_quantity(torso[3]);
                torso [4] = list[i].weight;
                torso [5] = list[i].cost;
                //add_to_price(torso[5]);
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
        //cin.ignore(1,'\n');
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
                //add_to_price(locomotor[6]);
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
        //cin.ignore(1,'\n');
        getline(cin, input);
        
        for(int i = 0; i < size; i++){
            
            if(list[i].part_number == input){
                battery [0] = list[i].type;
                battery [1] = list[i].part_name;
                battery [2] = list[i].part_number;
                battery [3] = list[i].battery_energy;
                
                battery [4] = list[i].weight;
                battery [5] = list[i].cost;
                //add_battery_price(battery[5]);
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

}
void Models::view_models(){
    
    //cout << "name: "<< name << endl;
    cout<< "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";
    
    print_head(head);
    print_arm(arm_1);
    print_arm(arm_2);
    print_torso(torso);
    print_loco(locomotor);
    print_battery(battery);
    
}
void Models::print_head(string s[6]){
    
    cout << "*************************\nPart type: "<< s[0];
    cout << "\n*************************\nPart name: " << s[1];
    cout << "\nPart number: " << s[2] << endl;
    cout << "Part weight(in lbs): " << s[3] << endl;
    cout << "Price: " << s[4] <<"\nDescription: "<< s[5]<<  endl;
    cout << "*************************" << endl;
    
}

void Models::print_arm(string s[7]){
    
    cout << "\n*************************\nPart type: "<< s[0];
    cout << "\n*************************\nPart name: " << s[1];
    cout << "\nPart number: " << s[2] << endl;
    cout << "Power consumption (in watts): " << s[3] << endl;
    cout << "Part weight(in lbs): " << s[4] << endl;
    cout << "Price: " << s[5] <<"\nDescription: "<< s[6]<<  endl;
    cout << "*************************" << endl;

    
}

void Models::print_torso(string s[7]){
    
    cout << "\n*************************\nPart type: "<< s[0];
    cout << "\n*************************\nPart name: " << s[1];
    cout << "\nPart number: " << s[2] << endl;
    cout << "Battery amount: " << s[3] << endl;
    cout << "Part weight(in lbs): " << s[4] << endl;
    cout << "Price: " << s[5] <<"\nDescription: "<< s[6]<<  endl;
    cout << "*************************" << endl;


    
}

void Models::print_loco(string s[8]){
    
    cout << "\n*************************\nPart type: "<< s[0];
    cout << "\n*************************\nPart name: " << s[1];
    cout << "\nPart number: " << s[2] << endl;
    cout << "Max speed: " << s[3] << endl;
    cout << "Power consumpion: " << s[4] << endl;
    cout << "Part weight(in lbs): " << s[5] << endl;
    cout << "Price: " << s[6] <<"\nDescription: "<< s[7]<<  endl;
    cout << "*************************" << endl;

    
}

void Models::print_battery(string s[7]){
    
    cout << "\n*************************\nPart type: "<< s[0];
    cout << "\n*************************\nPart name: " << s[1];
    cout << "\nPart number: " << s[2] << endl;
    cout << "Battery energy: " << s[3] << endl;
    cout << "Part weight(in lbs): " << s[4] << endl;
    cout << "Price: " << s[5] <<"\nDescription: "<< s[6]<<  endl;
    cout << "*************************" << endl;
    
    cout<< "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";


    
}
void Models::robot_name(string s){
    
    name = s;
}

void Models::set_quantity(string s){
    
    
}
void Models::add_to_price(string s){
    
    
}






































