#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/ss_commands.h"
#include "../include/utiles.h"
#include "../include/user_interface.h"

void execute_tcp_command(int choice)
{
   char command[256];
   int port;

   switch (choice)
   {
   case 1:
      strcpy(command, "ss -t");
      break;
   case 2:
      strcpy(command, "ss -t state established");
      break;
   case 3:
      strcpy(command, "ss -t state time-wait");
      break;
   case 4:
      printf("Enter the port number: ");
      scanf("%d", &port);
      snprintf(command, sizeof(command), "ss -at '( sport = :%d or dport = :%d )'", port, port);
      break;
   case 5:
      return;
   default:
      printf("Invalid choice!\n");
      return;
   }

   execute_system_command(command);
}

void execute_udp_command(int choice)
{
   char command[256];
   int port;

   switch (choice)
   {
   case 1:
      strcpy(command, "ss -u");
      break;
   case 2:
      printf("Enter the port number: ");
      scanf("%d", &port);
      snprintf(command, sizeof(command), "ss -au '( sport = :%d or dport = :%d )'", port, port);
      break;
   case 3:
      return;
   default:
      printf("Invalid choice!\n");
      return;
   }

   execute_system_command(command);
}

void execute_listening_command(int choice)
{
   char command[256];

   switch (choice)
   {
   case 1:
      strcpy(command, "ss -l");
      break;
   case 2:
      strcpy(command, "ss -lt");
      break;
   case 3:
      strcpy(command, "ss -lu");
      break;
   case 4:
      return;
   default:
      printf("Invalid choice!\n");
      return;
   }

   execute_system_command(command);
}

void execute_summary_command(int choice)
{
   char command[256];

   switch (choice)
   {
   case 1:
      strcpy(command, "ss -s");
      break;
   case 2:
      strcpy(command, "ss -t -s");
      break;
   case 3:
      strcpy(command, "ss -u -s");
      break;
   case 4:
      strcpy(command, "ss -i");
      break;
   case 5:
      return;
   default:
      printf("Invalid choice!\n");
      return;
   }

   execute_system_command(command);
}

void execute_advanced_filter_command(int choice)
{
   char command[256];
   int port;
   char state[32];

   switch (choice)
   {
   case 1:
      printf("Enter the source port number: ");
      scanf("%d", &port);
      snprintf(command, sizeof(command), "ss -at sport = :%d", port);
      break;
   case 2:
      printf("Enter the destination port number: ");
      scanf("%d", &port);
      snprintf(command, sizeof(command), "ss -at dport = :%d", port);
      break;
   case 3:
      printf("Enter the source port number: ");
      scanf("%d", &port);
      snprintf(command, sizeof(command), "ss -au sport = :%d", port);
      break;
   case 4:
      printf("Enter the destination port number: ");
      scanf("%d", &port);
      snprintf(command, sizeof(command), "ss -au dport = :%d", port);
      break;
   case 5:
      printf("Enter the TCP state (e.g., ESTABLISHED, TIME-WAIT, etc.): ");
      scanf("%s", state);
      snprintf(command, sizeof(command), "ss -at state %s", state);
      break;
   case 6:
      return;
   default:
      printf("Invalid choice!\n");
      return;
   }

   execute_system_command(command);
}
