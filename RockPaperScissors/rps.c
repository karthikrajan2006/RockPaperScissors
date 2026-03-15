#include <string.h>

char* rpsResult(char* player1, char* player2)
{
    if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0)
        return "Player1";

    return "";
}