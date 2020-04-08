#include "atm.h"

unsigned int get_money(unsigned short int money){

unsigned short int remaining_money = money;
int notes = 0x00000000;
int denominations[] = {2000, 500, 100, 50, 20, 10, 5, 1};

if(remaining_money > 31999) return notes;

for(int index = 0;index < 8;index++ ){

  notes = notes << 4;
  notes = notes | remaining_money / denominations[index];
  remaining_money = remaining_money % denominations[index];
}

return notes;

}
