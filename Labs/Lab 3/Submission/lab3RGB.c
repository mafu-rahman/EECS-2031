/***************************************
* EECS2031AC – Lab3 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York Student #: 217847518
************************************** **/

#include <stdio.h>

#define AlphaVal 100


int main() {

  int r,g,b;
  unsigned int rgb_pack;
  int r_unpack, g_unpack,b_unpack;
  int alpha = AlphaVal;

  printf("enter R value (0~255): ");
  scanf("%d",&r);
  printf("enter G value (0~255): ");
  scanf("%d",&g);
  printf("enter B value (0~255): ");
  scanf("%d",&b);

  while(! (r<0 || g<0 || b <0) )
  {		
    printf("A: %d\t", alpha);  printBinary(alpha); printf("\n");
    printf("R: %d\t", r);  printBinary(r); printf("\n");
    printf("G: %d\t", g);  printBinary(g); printf("\n"); 
    printf("B: %d\t", b);  printBinary(b); printf("\n"); 

    /* do packing */
    rgb_pack = 0;
    rgb_pack = rgb_pack | alpha;
    rgb_pack = rgb_pack << 8;

    rgb_pack = rgb_pack | r;
    rgb_pack = rgb_pack << 8;

    rgb_pack = rgb_pack | g;
    rgb_pack = rgb_pack << 8;

    rgb_pack = rgb_pack | b;

    //printf("\nPacked: value %d\t", rgb_pack); printBinary(rgb_pack);printf("\n");
    printf("\nPacked:\t"); printBinary(rgb_pack);printf(" (%d)\n", rgb_pack);
    printf("\nUnpacking  ......\n");  
    r=g=b=-1;

    /* do unpacking */

    int i;
    b_unpack = g_unpack = r_unpack = rgb_pack;  // copying from rgb_pack

    // b_unpack = b_unpack << 24;
    // b_unpack = b_unpack >> 24;

    // g_unpack = g_unpack << 16;
    // g_unpack = g_unpack >> 24;

    // r_unpack = r_unpack << 8;
    // r_unpack = r_unpack >> 24;


    for(i=8; i<32; i++){
      b_unpack = b_unpack & ~(1<<i);  // turning off all bits left of the 8th bit
    }

    for(i=16; i<32; i++){
      g_unpack = g_unpack & ~(1<<i);  // turning off all bits left of the 16th bit
    }
    g_unpack = g_unpack >> 8; // right shifting by 8bits

    for(i=24; i<32; i++){
      r_unpack = r_unpack & ~(1<<i);  // turning off all bits left of the 24th bit
    }
    r_unpack = r_unpack >> 16;  // right shifting by 16bits

    printf("R: "); printBinary(r_unpack); printf(" (%d, %#o, %#X)\n", r_unpack, r_unpack, r_unpack);
    printf("G: "); printBinary(g_unpack); printf(" (%d, %#o, %#X)\n", g_unpack, g_unpack, g_unpack);
    printf("B: "); printBinary(b_unpack); printf(" (%d, %#o, %#X)\n", b_unpack, b_unpack, b_unpack);
    printf("------------------------------------\n"); 

    printf("\nenter R value (0~255): ");
    scanf("%d",&r);
    printf("enter G value (0~255): ");
    scanf("%d",&g);
    printf("enter B value (0~255): ");
    scanf("%d",&b);
  }
}