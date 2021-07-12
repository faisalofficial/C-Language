/*
There are in total 21 match sticks to start the game. First we ask the user to pick either 1 or 2 or 3 or 4 matches per pick.
Once the user makes his/her pick, computer makes the picking(same rules apply to the computer i.e., it can pick either 
1 or 2 or 3 or 4 matches per pick). The trick is, computers pick is always 5 minus the pick of the user. For example, 
if computers pick is variable c and user pick is stored in variable p, then:
c = 5 – p;
This makes sure computer always wins the game. That is, the last pick will always be of the user.
*/

#include <stdio.h>

int main()
{
    int userPick, computerPick, totalMatchSticks = 21;

    while (1)
    {
        printf("Current Number of Matchsticks : %d\n", totalMatchSticks);
        printf("User Pick Any between 1, 2, 3 or 4 : %d\n", userPick);
        scanf("%d", &userPick);

        // If user picks any number outer than range
        if (userPick > 4 || userPick < 1)
        {
            printf("Enter a valid pick");
            continue;
        }
        totalMatchSticks = totalMatchSticks - userPick;
        computerPick = 5 - userPick;
        printf("Computer Picked : %d", computerPick);
        totalMatchSticks = totalMatchSticks - computerPick;
        
        if (totalMatchSticks == 1)
        {
            printf("Remaining Match Sticks : %d\n", totalMatchSticks);
            printf("You dumbo picking the last stick, haahaa, You lost the game");
            break;
        }
    }
    return 0;
}
