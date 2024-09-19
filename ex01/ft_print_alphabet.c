#include <unistd.h>



void ft_print_alphabet(void){

char letras;

for(letras='a';letras<='z';letras++){
write(1,&letras,1);
}

}
