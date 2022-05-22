#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct contact
{
  char name[50];
  unsigned long int phone_number;
  char address[50];
} contact;
// printing details by using name
void print_by_name(contact *contacts)
{
  // printing the details of contact
  printf("Record found by name is:");
  printf("\nName \t phone number \t\t address"
         "\n%s   \t %ld          \t %s \n",
         contacts->name, contacts->phone_number, contacts->address);
}
// printing details by using phonenumber
void print_by_phone_number(contact *contacts)
{
  // printing the details of contact
  printf("Record found by phone number is:");
  printf("\n\nName   \t\t\t phone number \t\t address"
         "\n%s  \t %ld   \t %s\n",
         contacts->name, contacts->phone_number, contacts->address);
}
// check the validation of phonenumber
bool contact_is_valid_phonenumber(long int phone_number)
{
  if (phone_number > 0)
    return &phone_number;
  else
    return NULL;
}
// printing valid phone number
void print_valid_phonenumber(long int phone_number)
{
  if (phone_number > 0)
  {
    printf("\nphone number is valid\n");
  }
  else
    printf("\nnot valid phone number\n");
}
// search by phone number
contact *find_by_phone_number(contact *contacts, long int phone_number, int len)
{
  for (int i = 0; i < len; i++)
  {
    if (contacts[i].phone_number == phone_number)
      return &contacts[i];
  }
  return NULL;
}
// check the validation of name
bool contact_is_valid_name(char *name)
{
  if (name == NULL)
    return false;
  bool is_alpha = true;
  bool is_right_length = false;
  int name_len = strlen(name);

  if (name_len < name[50])
    is_right_length = true;
  else
    return false;
}
// printing valid name
void print_valid_name(char *name)
{
  int name_len = strlen(name);
  if (name == NULL)
  {
    printf("\nname  is not valid\n");
  }
  else
    printf("\nname is valid\n");
}
// search by name
contact *find_by_name(contact *contacts, char name[], int len)
{
  for (int i = 0; i < len; i++)
  {
    if ((strcmp(contacts[i].name, name) == 0))
    {
      return &contacts[i];
    }
  }
  return NULL;
}
int main()
{
  char name[50];
  unsigned long int phone_number;
  char address[50];
  contact contacts[3];
  // contact search()
  while (1)
  {
    int option;
    printf("\nSearch by:\n1.Add contact\n2.Show list\n3.Name\n4.Phone number\n5.Exit\nSelect an Option:  ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
      // to add the contacts to phone book
      for (int i = 0; i < 2; i++)
      {
        printf("Enter Name:	");
        scanf("%s", contacts[i].name);
        printf("\nEnter Address: ");
        scanf("%s", contacts[i].address);
        printf("\nEnter Contact: ");
        scanf("%ld", &contacts[i].phone_number);
        printf("\n");
      }
      break;
    case 2:
      // to show the list of contacts
      for (int i = 0; i < 2; i++)
      {
        printf("\n%s \t %ld \t %s\n", contacts[i].name, contacts[i].phone_number, contacts[i].address);
      }
      break;
    case 3:
      // searching by name
      printf("\nenter name:");
      scanf("%s", name);
      contact_is_valid_name(name);
      print_valid_name(name);
      contact *nani = find_by_name(contacts, name, 3);
      if (nani == NULL)
      {
        printf("\nrecord not find by name\n");
        break;
      }
      else
        print_by_name(nani);
      break;
    case 4:
      // searching by phone number
      printf("\nenter phone number:");
      scanf("%ld", &phone_number);
      contact_is_valid_phonenumber(phone_number);
      print_valid_phonenumber(phone_number);
      contact *number = find_by_phone_number(contacts, phone_number, 3);
      if (number == NULL)
      {
        printf("\nrecord not find by number\n");
      }
      else
        print_by_name(number);

      break;
    case 5:
      // to exit the program
      printf("\nExit the code\n");
      exit(1);
      break;
    }
  }
}