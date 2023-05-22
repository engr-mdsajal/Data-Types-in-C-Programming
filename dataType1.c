
#include<stdio.h>
int main(){

   //integer data type
   int integer_value;

   printf("Enter Your Integer Value= ");
   scanf("%d",&integer_value);
   printf("Integer Value is= %d\n",integer_value);
   printf("Size of Integer Value= %d\n",sizeof(integer_value));

   short int short_Int_value;

   printf("Enter Your Short Integer Value= ");
   scanf("%d",&short_Int_value);
   printf("Integer Value is= %d\n",short_Int_value);
   printf("Size of Integer Value= %d\n",sizeof(short_Int_value));


   long int long_int_value;

   printf("Enter Your long Integer Value= ");
   scanf("%ld",&long_int_value);
   printf("Long Integer Value is= %ld\n",long_int_value);
   printf("Size of Long Integer Value= %ld\n",sizeof(long_int_value));

   long long int long_long_int_value;

   printf("Enter Your long long Integer Value= ");
   scanf("%lld",&long_long_int_value);
   printf("Long Long Integer Value is= %lld\n",long_long_int_value);
   printf("Size of Long Long Integer Value= %lld\n",sizeof(long_long_int_value));

   //float & double data type
   float float_value;

   printf("Enter Your Float Value= ");
   scanf("%f",&float_value);
   printf("Float Value is= %f\n",float_value);
   printf("Size of float Value= %d\n",sizeof(float_value));

   double double_value;

   printf("Enter Your Double Value= ");
   scanf("%lf",&double_value);
   printf("Double Value is= %lf\n",double_value);
   printf("Size of float Value= %d\n",sizeof(double_value));

   long double long_double_value;

   printf("Enter Your Long Double Value= ");
   scanf("%Lf",&long_double_value);
   printf("Long Double Value is= %Lf\n",long_double_value);
   printf("Size of long double Value= %d\n",sizeof(long_double_value));

   //char data type
   char ch_value;

   printf("Enter Your Character Value= ");
   scanf("%c",&ch_value);
   printf("Character Value is= %c\n",ch_value);
   printf("Size of Character Value= %d\n",sizeof(ch_value));







return 0;
}
