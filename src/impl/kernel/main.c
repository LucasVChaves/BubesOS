#include "print.h"

void kernel_main(){
     print_clear();
     print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
     print_str("                                   #######  #####  \n#####  #    # #####  ######  ####  #     # #     # \n#    # #    # #    # #      #      #     # #       \n#####  #    # #####  #####   ####  #     #  #####  \n#    # #    # #    # #           # #     #       # \n#    # #    # #    # #      #    # #     # #     # \n#####   ####  #####  ######  ####  #######  #####  \n");
     print_str("|------------------------------------------------------------------------------|");
     print_str("  A brand new computer head... \n");
     print_set_color(PRINT_COLOR_LIGHT_GREEN, PRINT_COLOR_BLACK);
     print_str("\nUser: ");
     block_del_pos = input_pos;
     test_input();
}