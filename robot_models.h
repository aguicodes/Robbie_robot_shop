
 #ifndef _ORDERS_H
 #define _ORDERS_H
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
    
    private:
        string head [6];
        string arm_1 [7];
        string arm_2 [7];
        string torso[7];
        string locomotor [8];
        string battery [7];
        string name;
    
        double cost;
        int quantity;
        int battery_quantity;
    
};
 #endif
