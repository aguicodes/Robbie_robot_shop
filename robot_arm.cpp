#include "std_lib_facilities.h"
#include "robot_arm.h"
#include "view.h"

void Arm::create_arm(){
    
    
    cout << "\nCreate part name: ";
    cin.ignore(1,'\n');
    getline(cin, part_name);
    
    cout << "Create part number: ";
    getline(cin, part_number);
    
    /*cout << "Part type: ";
    getline(cin, type);*/
    
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
    cout << "Part weight: ";
    getline(cin, weight);
    
    cout << "Cost: ";
    getline(cin, cost);
    
    cout << "Brief description ";
    getline(cin, description);

    
}
