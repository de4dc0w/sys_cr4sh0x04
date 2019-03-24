#include <stdio.h>         
#include <stdlib.h>           
#include <string.h>
                                       
const signed char *key_seq = "Hell Is Empty And All The Devils Are Here.";
                                       
int chk_input(char *pass){             
                                       
    if(strlen(pass) == 11){           
        puts("[*]Checking..");         
                                      
        if( (pass[0] == key_seq[29]) &&
            (pass[1] == key_seq[19]) &&
            (pass[2] == key_seq[29]) &&
            (pass[3] == key_seq[28]) &&
            (pass[4] == key_seq[27]) &&
            (pass[5] == key_seq[5]) &&
            (pass[6] == key_seq[15]) &&
            (pass[7] == key_seq[0]) &&
            (pass[8] == key_seq[27]) &&
            (pass[9] == key_seq[2]) &&
            (pass[10] == key_seq[2])               
          ){ return 1337; }
    }
    return 911;                    
}
int main(int argc, char *argv[]){
                                             
    if(argc != 2){
        fprintf(stderr,"Usage: %s <key>", argv[0]);
        _exit(1);
    }
    if(chk_input(argv[1]) == 1337){
        puts("Great! .. Devils are out.");
    }else{
        fprintf(stderr,"Error: %s", key_seq);
        _exit(2);
    }
    return 0;
}
