#include "std_lib_facilities.h"
#include "robot_parts.h"
#include "view.h"






void Parts::set_option(string input){
    
    if ( type == "torso"){
        torso = true;
    }
    else if ( type == "arm"){
        arm = true;
        //cout<< "set\n";
    }
    else if ( type == "battery"){
        battery = true;
    }
    else if ( type == "locomotor"){
        locomotor = true;
    }
}
void Parts::create_parts(){
    
    cout << "\nPart type: ";
    cin.ignore(1,'\n');
    getline(cin, type);
    //cout<< "this word: " << type << endl;
    
    set_option(type);
    
    cout << "Create part name: ";
    //`
    getline(cin, part_name);
    
    cout << "Create part number: ";
    getline(cin, part_number);
    
    if(torso){
        cout << "Please specify the amount of batteries this torso should hold: ";
        getline(cin, torso_battery_amount);
    }
    else if(battery){
        cout << "Please specify battery energy (in kilowatt hours): ";
        getline(cin, battery_energy);
    }
    else if(arm){
        cout << "Please specify the power consumption (in watts): ";
        getline(cin, arm_power);
    }
    else if(locomotor){
        cout << "Power consumed when operating (in watts): ";
        getline(cin, locomotor_power);
        cout << "Maximum operating speed (in MPH): ";
        getline(cin, locomotor_speed);
    }
    cout << "Part weight(in lbs): ";
    getline(cin, weight);
    
    cout << "Price: ";
    getline(cin, cost);
    
    cout << "Brief description: ";
    getline(cin, description);

    
}
