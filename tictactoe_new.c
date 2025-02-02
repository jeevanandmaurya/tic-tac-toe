#include <stdio.h>
#include <windows.h>

// Tic Tac Toe for Terminal
/*
Board-
_ _ _
_ _ _
_ _ _

O X X
X O O
X O O

O WINS

 P1-O
 P2-X

*/
// Zoom terminal for better experience

// Initialization of variables
int inplay = 1; // 0-None 1-P1 2-P2 Player Currently InPlay
int n = 3;
int gamestate = 1;
int state[3][3] = {0};

void printBoard(int *entries, char *playerChar, int entriCount, int charCount)
{
}

int checkWinner(int *entries, int entriCount)
{
}

int main()
{

    system("cls");
    // Initialization of variables
    // int inplay = 1; // 0-None 1-P1 2-P2 Player Currently InPlay
    // int n = 3;
    // int gamestate = 1;
    // int state[3][3] = {0};

    // Introduction and Instruction for the Game
    printf("\n\n            TIC TAC TOE      \n\n");
    printf("      Player 1->O   Player 2->X\n");
    // Seperation margin
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        // Left Margin
        for (int j = 0; j < 15; j++)
        {
            printf(" ");
        }
        // Board
        for (int j = 0; j < n; j++)
        {
            switch (state[i][j])
            {
            case 1:
                printf("O ");
                break;
            case 2:
                printf("X ");
                break;

            default:
                printf("_ ");
                break;
            }
        }
        // NEXTLINE
        printf("\n");
    }

    // Seperation margin
    printf("\n\n");

    // Player Move
    int pInput;
    for (int i = 0; i < 6; i++)
    {
        printf(" ");
    }
    printf("Enter Your Move(1-9):\n");
    for (int i = 0; i < 6; i++)
    {
        printf(" ");
    }
    printf("Player %d->\n\n", inplay);

    for (int i = 0; i < 6; i++)
    {
        printf(" ");
    }

    printf("GameState ->Ongoing \n");
    while (gamestate)
    {
        // Player Input
        scanf("%d", &pInput);
        if (!state[pInput / 3][pInput % 3 - 1])
        {

            // Updating State
            state[pInput / 3][pInput % 3 - 1] = inplay;
            // Switching InPlaying
            inplay = 3 - inplay;
            main();
        }
       
    }

    // Bottom Margin
    for (int i = 0; i < 12; i++)
    {
        printf("\n");
    }

    return 0;
}