 #ifndef _ROBOT_PARTS_H
 #define _ROBOT_PARTS_H

class Parts {
    
    public:
        //int number;
        //Parts(int input): number(input) {}
        void create_parts();
        void set_option(string input);
    
        //int option;
        int number = 0;
        string part_name = "";
        string part_number = "";
        string type = "";
        string description = "";
        string weight = "";
        string cost = "";
 
        string torso_battery_amount = "";
        string locomotor_speed = "";
        string locomotor_power = "";
        string battery_energy = "";
        string arm_power = "";
    private:
    
        bool torso = false;
        bool battery = false;
        bool arm = false;
        bool locomotor = false;
    
};
 #endif
