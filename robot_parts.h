 #ifndef _ROBOT_PARTS_H
 #define _ROBOT_PARTS_H

class Parts {
    
    public:
        void create_parts();
        void set_option(string input);
        void set_price();
        void set_quantity();

    
        string part_name;
        string part_number;
        string type;
        string description;
        string weight;
        string cost;
 
        string torso_battery_amount;
        string locomotor_speed;
        string locomotor_power;
        string battery_energy;
        string arm_power;
    
        double price = 0;
        int quantity = 0;
        bool torso = false;
        bool battery = false;
        bool arm = false;
        bool locomotor = false;
    
};
 #endif
