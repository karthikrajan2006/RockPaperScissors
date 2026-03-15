#include <string.h>

char* rpsResult(char* player1, char* player2)
{
    if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0)
        return "Player1";

    if (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Rock") == 0)
        return "Player2";

    if (strcmp(player1, player2) == 0)
        return "Draw";

    if (strcmp(player1, "Rock") != 0 && strcmp(player1, "Paper") != 0 && strcmp(player1, "Scissors") != 0)
        return "Invalid";

    if (strcmp(player2, "Rock") != 0 && strcmp(player2, "Paper") != 0 && strcmp(player2, "Scissors") != 0)
        return "Invalid";

    return "";
}