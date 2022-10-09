/**
* main - This program is dubbed a fish feed calculator. The fish feed calculator
* is a program that is used to calculate the respective amount of the content of an
* age based fish feed of a certain total amount.
*
* Return: 0 when succesful
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double total_feed;
    int age;

    printf("INSTRUCTION: Dear User, Fish feed calculator is \n a program that helps you calculate the amount (in kg)\n of each ingredient you will use to prepare your fish feed.\n Kindly enter the total feed amount that you will like to produce,\n and the age of your fish to help us determine percentage protein.\n");
    printf("Enter age of fish (in weeks): \n");
    scanf("%d", &age);
    printf("Enter total amount of feed (in kg): \n");
    scanf("%lf", &total_feed);

    /*In this program, fish type is generally divided into 3 groups with
    *each class having a different protein requirements.*/
    /*The first group of which is categorized as juvenile from week 0 to 12*/

    if(age >= 0 && age <= 12){
            printf("soybean meal: %fkg\n", ((51.05 / 100) * total_feed));
            printf("cottonseed meal: %fkg\n", ((10.00 / 100) * total_feed));
            printf("animal protein: %fkg\n", ((10.00 / 100) * total_feed));
            printf("corn grain: %fkg\n", ((20.00 / 100) * total_feed));
            printf("wheat meadlings: %fkg\n", ((05.50 / 100) * total_feed));
            printf("corn glutten feed: %fkg\n", ((00.00 / 100) * total_feed));
            printf("Dicalcium phosphate: %fkg\n", ((00.25 / 100) * total_feed));
            printf("Lysine: %fkg\n", ((00.00 / 100) * total_feed));
            printf("animal fat: %fkg\n", ((03.00 / 100) * total_feed));
    }
    /*The second group of fish is classified growout from age 12+ to 48 weeks.*/
    else if(age > 12 && age <= 48){
            printf("soybean meal: %fkg\n", ((44.10 / 100) * total_feed));
            printf("cottonseed meal: %fkg\n", ((10.00 / 100) * total_feed));
            printf("animal protein: %fkg\n", ((05.00 / 100) * total_feed));
            printf("corn grain: %fkg\n", ((20.00 / 100) * total_feed));
            printf("wheat meadlings: %fkg\n", ((18.20 / 100) * total_feed));
            printf("corn glutten feed: %fkg\n", ((00.00 / 100) * total_feed));
            printf("Dicalcium phosphate: %fkg\n", ((00.50 / 100) * total_feed));
            printf("Lysine: %fkg\n", ((00.00 / 100) * total_feed));
            printf("animal fat: %fkg\n", ((02.00 / 100) * total_feed));
    }
    /*The last age group is classified as broodstock from age 48 weeks and above*/
    else if(age > 48){
            printf("soybean meal: %fkg\n", ((33.25 / 100) * total_feed));
            printf("cottonseed meal: %fkg\n", ((25.00 / 100) * total_feed));
            printf("animal protein: %fkg\n", ((00.00 / 100) * total_feed));
            printf("corn grain: %fkg\n", ((18.21 / 100) * total_feed));
            printf("wheat meadlings: %fkg\n", ((00.00 / 100) * total_feed));
            printf("corn glutten feed: %fkg\n", ((20.00 / 100) * total_feed));
            printf("Dicalcium phosphate: %fkg\n", ((01.00 / 100) * total_feed));
            printf("Lysine: %fkg\n", ((00.34 / 100) * total_feed));
            printf("animal fat: %fkg\n", ((02.00 / 100) * total_feed));
    }
    else{
        printf("Invalid age");
    }
    return 0;
}


