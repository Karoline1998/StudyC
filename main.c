#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#define Class struct

Class Person {
    char name[10];
    uint8_t age;
    uint8_t height;
     void(*show ) (Class Person *);

};

void person_print(Class Person *self) {
   printf("Nome: %s  age: %d  height: %d\n", self -> name, self -> age, self -> height);
}
Class Person * newPerson(char name [ ],  uint8_t age, uint8_t height) {
     Class Person *self =
     (Class self  *) malloc(sizeof(Class Person));
     strcpy(self -> name, "Karoline");
    self -> age  = 23;
    self -> height = 172;

  self -> show = &person_print;

  return self;

}

int main() {
   Class Person *person2 = (Class Person *) newPerson("Karoline", 23, 172);

   person2 -> show(person2);
    return ;
}
