
 #ifndef _ROBOT_HEAD_H
 #define _ROBOT_HEAD_H

class Head {
    
    protected:
    
        void create_part();
        int counter = 0;
    
        bool available = true;
        string name = "Available for checkout.";
    
    private:
        int torso_max_speed = 0;
        int torso_power = 0;
        int arm_power = 0;
        int battery_energy = 0;
    
};
 #endif
