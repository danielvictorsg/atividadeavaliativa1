#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS_PER_POSITION 2
#define NUM_POSITIONS 6
#define MAX_TEAM_NAME_LENGTH 30

struct Player {
    char name[MAX_TEAM_NAME_LENGTH];
    char position;
    int strength;
};
struct Team {
    char name[MAX_TEAM_NAME_LENGTH];
    struct Player players[MAX_PLAYERS_PER_POSITION * NUM_POSITIONS];
};
float calculateTeamStrength(struct Team team) {
    float strength = 0;
    for (int i = 0; i < MAX_PLAYERS_PER_POSITION * NUM_POSITIONS; i++) {
        strength += team.players[i].strength;
    }
    return (8 * strength) / 100;
}

int main() {
    struct Team team1, team2;

    printf("Time 1:\n");
    scanf("%s", team1.name);

    for (int i = 0; i < MAX_PLAYERS_PER_POSITION * NUM_POSITIONS; i++) {
        scanf("%s %c %d", team1.players[i].name, &team1.players[i].position, &team1.players[i].strength);
    }

    printf("Time 2:\n");
    scanf("%s", team2.name);

    for (int i = 0; i < MAX_PLAYERS_PER_POSITION * NUM_POSITIONS; i++) {
        scanf("%s %c %d", team2.players[i].name, &team2.players[i].position, &team2.players[i].strength);
    }

    float forca_ponderada_time1 = calculateTeamStrength(team1);
    float forca_ponderada_time2 = calculateTeamStrength(team2);


    printf("%s: %.2f de força\n", team1.name, forca_ponderada_time1);
    printf("%s: %.2f de força\n", team2.name, forca_ponderada_time2);

    if (forca_ponderada_time1 > forca_ponderada_time2) {
        printf("%s eh mais forte\n", team1.name);
    } else if (forca_ponderada_time1 < forca_ponderada_time2) {
        printf("%s eh mais forte\n", team2.name);
    } else {
        printf("Ambos os times tem a mesma força\n");
    }

    return 0;
}