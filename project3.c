#include <stdio.h>

//Build project 3 here:

int main(void){
    double a_chocolate = 0;
    double b_starwars = 0;
    double c_coffee = 0;
    double d_vanilla = 0;
    char choice = 'y';
    char userIn;
    double totalVotes;
    float apercentage = 0.0;
    float bpercentage = 0.0;
    float cpercentage = 0.0;
    float dpercentage = 0.0;
    
   
    while (choice == 'y'){
        printf("What is your favorite Icecream flavor?: A. Chocolate B. Star Wars C. Coffee D. Vanilla");
        scanf("%s",&userIn);
        totalVotes++;
        if (userIn == 'a'|| userIn == 'A'){
            a_chocolate++;
            printf("%f",a_chocolate);
        }
        if (userIn == 'b' || userIn == 'B'){
            b_starwars++;
            printf("%f",b_starwars);
        }
            
        if (userIn == 'c' || userIn == 'C'){
            c_coffee++;
            printf("%f",c_coffee);
        }
        
        if (userIn == 'd' || userIn ==  'D' ){
            d_vanilla++;
            printf("%f",d_vanilla);
        }
        apercentage = a_chocolate / totalVotes * 100;
        printf("\n\nThe percentage of Chocolate voted is %f", apercentage);

        bpercentage = b_starwars / totalVotes * 100;
        printf("\n\nThe percentage of Star Wars voted is %f", bpercentage);

        cpercentage = c_coffee / totalVotes * 100;
        printf("\n\nThe percentage of coffee voted is %f", cpercentage);

        dpercentage = d_vanilla / totalVotes * 100;
        printf("\n\nThe percentage of vanilla voted is %f", dpercentage);
        
        
        printf("Would you like to vote again?");
        scanf("%s",&choice);
        
        
            
        //increase the choice selected by 1
    }


    // char money = printf("Put in your answer (answer as a, b, c, or d):");
    // char input = scanf(money);



    return 0;
}
