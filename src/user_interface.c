#include <stdio.h>
#include "../include/user_interface.h"
#include "../include/ss_commands.h"

int get_user_choice()
{
   int choice;
   printf("Enter your choice: ");
   scanf("%d", &choice);
   return choice;
}

void display_tcp_menu()
{
   int choice;
   while (1)
   {
      printf("\n--- TCP Connections Menu ---\n");
      printf("1. Show all TCP connections\n");
      printf("2. Show established TCP connections\n");
      printf("3. Show TCP connections in TIME-WAIT state\n");
      printf("4. Show TCP connections on a specific port\n");
      printf("5. Return to Main Menu\n");

      choice = get_user_choice();
      if (choice == 5)
         break;
      execute_tcp_command(choice);
   }
}

void display_udp_menu()
{
   int choice;
   while (1)
   {
      printf("\n--- UDP Connections Menu ---\n");
      printf("1. Show all UDP connections\n");
      printf("2. Show UDP connections on a specific port\n");
      printf("3. Return to Main Menu\n");

      choice = get_user_choice();
      if (choice == 3)
         break;
      execute_udp_command(choice);
   }
}

void display_listening_menu()
{
   int choice;
   while (1)
   {
      printf("\n--- Listening Sockets Menu ---\n");
      printf("1. Show all listening sockets\n");
      printf("2. Show listening TCP sockets\n");
      printf("3. Show listening UDP sockets\n");
      printf("4. Return to Main Menu\n");

      choice = get_user_choice();
      if (choice == 4)
         break;
      execute_listening_command(choice);
   }
}

void display_summary_menu()
{
   int choice;
   while (1)
   {
      printf("\n--- Summary & Statistics Menu ---\n");
      printf("1. Show overall socket summary\n");
      printf("2. Show TCP socket summary\n");
      printf("3. Show UDP socket summary\n");
      printf("4. Show network statistics\n");
      printf("5. Return to Main Menu\n");

      choice = get_user_choice();
      if (choice == 5)
         break;
      execute_summary_command(choice);
   }
}

void display_advanced_filters_menu()
{
   int choice;
   while (1)
   {
      printf("\n--- Advanced Filters Menu ---\n");
      printf("1. Show TCP connections filtered by source port\n");
      printf("2. Show TCP connections filtered by destination port\n");
      printf("3. Show UDP connections filtered by source port\n");
      printf("4. Show UDP connections filtered by destination port\n");
      printf("5. Show TCP connections filtered by state\n");
      printf("6. Return to Main Menu\n");

      choice = get_user_choice();
      if (choice == 6)
         break;
      execute_advanced_filter_command(choice);
   }
}
