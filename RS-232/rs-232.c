#include"setup.h"

#int_rda
void rda_kesmesi()
{
   char* data = getchar();
   if(data == 'A')
   {
      fprintf(RS_232_1,"LEDLER YANIYOR\n");
      output_high(MAIN_LED_1);
      clear_interrupt(int_rda);
   }
   
   else if(data == 'B')
   {
      fprintf(RS_232_1,"LEDLER SONUYOR\n");
      output_low(MAIN_LED_1);
      clear_interrupt(int_rda);
   }
   
   else if(data == 'C')
   {
      fprintf(RS_232_1,"LEDLER YANIP SONUYOR\n");
      for(int i=0;i<20;i++)
      {
         output_toggle(MAIN_LED_1);
         delay_ms(100);
      }
      clear_interrupt(int_rda);
   }
}

void main()
{   
   enable_interrupts(GLOBAL);
   enable_interrupts(int_rda); 
   delay_ms(10);
   fprintf(RS_232_1,"START = A\n");
   fprintf(RS_232_1,"STOP = B\n");
   fprintf(RS_232_1,"TOGGLE = C\n");
   while(TRUE);
}
