
 #ifndef _ROBOT_ARM_H
 #define _ROBOT_ARM_H

class Arm {
    
    public:
    
        void create_arm();
        int counter = 0;
    
    private:
    
    string part_name = "";
    string part_number = "";
    string type = "";
    string description = "";
    string weight = "";
    string cost = "";
    bool torso = false;
    bool battery = false;
    bool arm = false;
    bool locomotor = false;
    string torso_battery_amount = "";
    string locomotor_speed = "";
    string locomotor_power = "";
    string battery_energy = "";
    string arm_power = "";
    
    
};
 #endif
