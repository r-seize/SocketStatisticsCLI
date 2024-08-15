#include <stdio.h>
#include <stdlib.h>
#include "../include/ss_commands.h"
#include "../include/user_interface.h"
#include "../include/version.h"

void display_main_menu()
{
   printf("\n--- Welcome to Socket Statistics CLI - Version %s ---\n", PROJECT_VERSION);
   printf("This tool allows you to monitor and filter network socket statistics easily.\n\n");
   printf("Main Menu:\n");
   printf("1. TCP Connections\n");
   printf("2. UDP Connections\n");
   printf("3. Listening Sockets\n");
   printf("4. Summary & Statistics\n");
   printf("5. Advanced Filters\n");
   printf("0. Exit\n");
}

int main()
{
   int choice;

   while (1)
   {
      display_main_menu();
      choice = get_user_choice();

      if (choice == 0)
      {
         printf("Exiting...\n");
         break;
      }

      switch (choice)
      {
      case 1:
         display_tcp_menu();
         break;
      case 2:
         display_udp_menu();
         break;
      case 3:
         display_listening_menu();
         break;
      case 4:
         display_summary_menu();
         break;
      case 5:
         display_advanced_filters_menu();
         break;
      default:
         printf("Invalid choice! Please try again.\n");
      }
   }

   return 0;
}
