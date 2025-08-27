#include <stdio.h>

// Common operators;
// & and 
// | or 
// ^ = XOR --- Exclusive OR
// << left shift
// >> right shitf

// int main(){
//     int x = 6; // 0000110
//     int y = 12; // 00001100
//     int z = 0;  // 000001110 ----------- 0000001010

//     // z = x & y;
//     // printf("AND= %d\n", z);

//     // z = x|y;
//     // printf("OR = %d\n", z);
    
//     z = x^y;
//     printf("XOR = %d\n", z);
//     z = x >> 2;
//     printf("Shift Left = %d\n", z);

//     return 0;
// }

//////////// Memory Addresses /////////
// Memory = an array of byted within RAM
// Memory block = a single unit (byte) within memory, used to hold some values
// Memory address = The address of where a memory block is located (house address)
// int main(){
// // char a = "X";
// // char b = "Y";
// // char c = "Z";
// char a = "X";
// char b = "Y";
// char c = "Z";

// printf("%d bytes \n", sizeof(a));
// printf("%d bytes \n", sizeof(b));
// printf("%d bytes \n", sizeof(c));

// printf("%p\n" , &a);
// printf("%p\n", &b);
// printf("%p\n", &c);


// return 0;


// }



// void printAge(int *pAge){
//     printf("You are %d years old", *pAge); // dereference

// }


// int main(){
//     int age = 21;
//     int *pAge = &age;

//     // printf("Address of age: %p\n", &age);
//     // printf("Value of pAge: %p\n", pAge );

//     // printf("Value of Age: %d\n", age);
//     // printf("Value at stored address: %d\n", *pAge);

//     // printf("size of age: %d bytes\n", sizeof(age));
//     // printf("size of pAge: %d bytes\n", sizeof(pAge));

//     printAge(pAge);
//     return 0;
// }


// int main(){
//     FILE *pF = fopen("test.txt", "a");
//     fprintf(pF, "Patrick Star");
//     fprintf(pF, "\n");

//     fprintf(pF, "La vida es muy sabrosa comiendo un caldo de gallina:" );
//     fprintf(pF, "\n");


//     fclose(pF);
//     return 0;
// }

//Deleting a File

// int main(){
//     if(remove("test.txt") == 0 ){
//         printf("That file was not deleted successfully");
//     }
//     else{
//         printf("That file was NOT deleted ");
//     }

//     return 0;

// }



// int main(){
//     FILE *pF = fopen("D:\\FILE\\text.txt", "w");

//     printf(pF, "Hola File Ive aproached you");

//     fclose(pF);

//     return 0;

// }

///////// To read a file (you need to create a pointer) ////////////

int main()
{
    FILE *pF = fopen("C:\\Users\\byron\\Desktop\\Poem.py", "r");
    char buffer[400];

    if (pF == NULL)
    {
        printf("Unable to open file!\n");
    }


    while (fgets(buffer, 225, pF) ) //Putting the null is important 
    {
        printf("%s", buffer);

    }
    fclose(pF);


    //Buffer
    
    return 0;

}
