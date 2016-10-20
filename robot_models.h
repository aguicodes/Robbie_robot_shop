
 #ifndef _ROBOT_MODELS_H
 #define _ROBOT_MODELS_H
#include "robot_parts.h"
class Models {
    
    public:
    
        void create_models(vector<Parts>list, int size);
    
        void view_models ();
    
        int model_quantity ();
    
        double total_cost(int quantity, double price);
    
        void print_head(string s[6]);
        void print_arm(string s[7]);
        void print_torso(string s[7]);
        void print_loco(string s[8]);
        void print_battery(string s[7]);
        void robot_name(string s);
        string getName();
        void set_quantity(string s);
        void add_to_price(string s);
        //void add_battery_price(string s);
        string name;
        double cost = 0;
    
    private:
        string head [6];
        string arm_1 [7];
        string arm_2 [7];
        string torso[7];
        string locomotor [8];
        string battery [7];
    
    
        //double cost = 0;
        int quantity;
    
    
};
 #endif
