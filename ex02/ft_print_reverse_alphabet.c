#include <unistd.h>

int main(){
ft_print_reverse_alphabet();

}

void ft_print_reverse_alphabet(void){
char letra='z';

while(letra>='a'){

write(1,&letra,1);
letra--;

}

}
