#include <stdio.h>
#include <stdlib.h>
#include "../include/utiles.h"

void execute_system_command(const char *command)
{
   printf("\nExécution de la commande: %s\n", command);
   system(command);
}
