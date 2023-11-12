#include <stdio.h>

void displayFireworksImpact()
{
    printf("Understanding the Impact of Fireworks on the Environment:\n");
    printf("- Air Pollution: Fireworks release harmful pollutants into the air.\n");
    printf("- Noise Pollution: Loud noises from fireworks can disturb wildlife and pets.\n");
    printf("- Chemical Residue: Fireworks leave behind chemical residues that can harm soil and water.\n");
    printf("- Waste Generation: Fireworks packaging contributes to waste.\n");
}

void suggestAlternativeCelebrations()
{
    printf("Celebrate Diwali in an Environmentally Friendly Way:\n");
    printf("- Organize community events with cultural performances instead of individual fireworks.\n");
    printf("- Use eco-friendly decorations made from recycled materials.\n");
    printf("- Contribute to a local charity instead of spending on fireworks.\n");
    printf("- Spread awareness about eco-friendly celebrations among friends and family.\n");
}

int main()
{
    printf("Welcome to the Diwali Awareness Program!\n");
    printf("------------------------------\n");

    int choice;

    for (;;)
    {
        printf("Choose an option:\n");
        printf("1. Learn about the Impact of Fireworks on the Environment\n");
        printf("2. Discover Alternative Ways to Celebrate Diwali\n");
        printf("0. Exit\n");

        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exiting the program. Let's celebrate a greener Diwali!\n");
            break;
        }
        else if (choice == 1)
        {
            displayFireworksImpact();
        }
        else if (choice == 2)
        {
            suggestAlternativeCelebrations();
        }
        else
        {
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }
    return 0;
}
