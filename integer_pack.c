//*****************************************************
//      * Compresses given 8bits into one integer.
//      * Returns specified 8bit integer.
//      * Inserts (or replaces) specified 8bit integer. ++TODO++
//      * Prints specified integer.
//      Created by Samuel Barratt
//*****************************************************




#include <stdio.h>
#include <stdint.h>

uint32_t create_compressed_int (uint32_t A, uint32_t B, uint32_t C, uint32_t D)
{
    uint32_t integer;

    (A << 12);
    (B << 8);
    (C << 4);
    integer = (A < 24) | (B << 16) | (C << 8) | D;

    return integer;
    
} 
    print_int(3, var,"\n");



uint32_t get_int(int i, uint32_t integer)
{

    uint32_t tmp;

    if (i == 0) //if not value specified, then return null.
    {
        return 0;
    }

    if (i == 1) //if first value specified then return the first value.
    {
        tmp = 0;

        tmp = (integer & 0xFF);
        return tmp;

    }

    if (i == 2)
    {
        tmp = 0;
        tmp = (integer >> 8 & 0xFF);
        return tmp;
    }

    if (i == 3)
    {
        tmp = 0;
        tmp = (integer >> 16) & 0xFF;
        return tmp;

    }

    if (i == 4)
    {
        tmp = 0;
        tmp = (integer >> 24);
        return tmp;

    }


    return 0;

}


void  print_int (int i, uint32_t integer)
{

    uint32_t tmp;
    
   if (i == 0) //if not value specified, then return null.
    {
        return;
    }

   else if (i == 1) //if first value specified then return the first value.
    {
        tmp = 0;
        tmp = (integer & 0xFF);
        printf("%d\n", tmp);

        return;

    }

   else if (i == 2)
    {
        tmp = 0;
        tmp = (integer >> 8 ) & 0xFF;
        printf("%d\n", tmp);

        return;
    }

   else if (i == 3)
    {
        tmp = 0;
        tmp = (integer >> 16) & 0xFF;
        printf("%u\n", tmp);
        return;

    }

   else if (i == 4)
    {
        tmp = 0;
        tmp = (integer >> 24);
        printf("%u\n",tmp);
        return;

    }

return;
}
