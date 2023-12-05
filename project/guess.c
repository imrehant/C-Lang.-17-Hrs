#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame(int, int, int, int ); // Function Declaration.

int main()
{
    int lowestNum, highestNum, level, maxAttempts,score= 0;
    printf("          __      __  ___________ .____      _________   ________       _____    ___________         ___________ ________\n");
    printf("         /  \\    /  \\ \\_   _____/ |    |     \\_   ___ \\  \\_____  \\     /     \\   \\_   _____/         \\__    ___/ \\_____  \\\n");
    printf("  ______ \\   \\/\\/   /  |    __)_  |    |     /    \\  \\/   /   |   \\   /  \\ /  \\   |    __)_            |    |     /   |   \\\n");
    printf(" /_____/  \\        /   |        \\ |    |___  \\     \\____ /    |    \\ /    Y    \\  |        \\           |    |    /    |    \\\n");
    printf("           \\__/\\  /   /_______  / |_______ \\  \\______  / \\_______  / \\____|__  / /_______  /           |____|    \\_______  /\n");
    printf("                \\/            \\/          \\/         \\/          \\/          \\/          \\/                              \\/\n");

    printf("  /\\     ________   ____ ___  ___________   _________   _________             ________     _____       _____    ___________   /\\  \n");
    printf(" /  \\   /  _____/  |    |   \\ \\_   _____/  /   _____/  /   _____/            /  _____/    /  _  \\     /     \\   \\_   _____/  /  \\ \n");
    printf(" \\/\\/  /   \\  ___  |    |   /  |    __)_   \\_____  \\   \\_____  \\    ______  /   \\  ___   /  /_\\  \\   /  \\ /  \\   |    __)_   \\/\\/ \n");
    printf("       \\    \\_\\  \\ |    |  /   |        \\  /        \\  /        \\  /_____/  \\    \\_\\  \\ /    |    \\ /    Y    \\  |        \\      \n");
    printf("        \\______  / |______/   /_______  / /_______  / /_______  /            \\______  / \\____|__  / \\____|__  / /_______  /      \n");
    printf("               \\/                     \\/          \\/          \\/                    \\/          \\/          \\/          \\/       \n");
    
    printf("=================================================================================================================================\n");
    printf("---------------------------------------------------------+-----------------------------------------------------------------------\n");
    printf("\n");
    printf("----Choose the range of number you want to guess----\n\n");
    printf("Enter the Lowest Number: ");
    scanf("%d", &lowestNum);
    printf("Enter the Highest Number: ");
    scanf("%d", &highestNum);

    printf("Choose the level (1-5): ");
    scanf("%d", &level);

    switch (level)
    {
    case 1:
        maxAttempts = 15;
        printf("Your Maximum Attempts = %d\n", maxAttempts);
        break;
    case 2:
        maxAttempts = 12;
        printf("Your Maximum Attempts = %d\n", maxAttempts);
        break;
    case 3:
        maxAttempts = 8;
        printf("Your Maximum Attempts = %d\n", maxAttempts);
        break;
    case 4:
        maxAttempts = 5;
        printf("Your Maximum Attempts = %d\n", maxAttempts);
        break;
    case 5:
        maxAttempts = 3;
        printf("Your Maximum Attempts = %d\n", maxAttempts);
        break;
    default:
        printf("oh ! Invalid Level. Default level 1.\n");
        maxAttempts = 15;
        printf("Your Maximum Attempts = %d\n", maxAttempts);
    }

    playGame(lowestNum, highestNum, maxAttempts,score); // Call the function
    return 0;
}
// Function Definition.
void playGame(int lowestNum, int higestNum, int maxAttempts, int score)
{
    int rNum, guess, attempts = 0;
    srand(time(NULL));
    rNum = rand() % (higestNum - lowestNum + 1) + lowestNum;
    // printf("the correct number =%d",rNum);
    printf("Try to guess the number between %d and %d.\n", lowestNum, higestNum);

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == rNum)
        {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
            score= maxAttempts - attempts+1;
            printf("Your total Score = %d\n", score);
            break;
        }
        else if (attempts == maxAttempts)
        {
            printf("\nBetter Luck Next Time !\n");
            printf("Yours Remaining attempts = %d\n", (maxAttempts - attempts));
            printf("Your total Score = 0\n");
            printf("The correct number = %d.\n\n", rNum);
            
        }
        else if (guess<lowestNum || guess>higestNum){
            printf("oh!, Invalid Guess !\n\n");
            printf("Yours Remaining attempts = %d\n", maxAttempts);
            attempts-- ;
        }
        else if (guess < rNum)
        {
            printf("Nice try but Too low. Try again.\n\n");
            printf("Yours Remaining attempts = %d\n", (maxAttempts - attempts));

        }
        else
        {
            printf("Whoa! Too high. Try again.\n\n");
            printf("Yours Remaining attempts = %d\n", (maxAttempts - attempts));

        }
        
    } while (attempts < maxAttempts);
}