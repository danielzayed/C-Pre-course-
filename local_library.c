#include "local_library.h"

#include <stddef.h>

Book books[] = {
 {1001, "Sun Don't Shine", 40, ADULT,DRAMA,{.DRAMA.quailty=3,.DRAMA.plot_quailty=22}},
 {1002, "Irma la dos", -100, DOCUMENTARY,THRILLER,{.thrilling_factor=3.5}},
 {1003, "Starship Troopers: Invasion", -68, KIDS,COMEDY,{.COMEDY.humor_type='N',.COMEDY.quailty_of_humor=556}},
 {1004, "Year of the Jellyfish", 5, ADULT,NON_FICTION,{.NON_FICTION_field="HIST"}},
 {1005, "After Life", -95, DOCUMENTARY,NON_FICTION,{.NON_FICTION_field="HIST"}},
 {1006, "Rest Stop", 20, HIGHSCHOOL,DRAMA,{.DRAMA.quailty=12,.DRAMA.plot_quailty=56}},
 {1007, "Wuthering Heights", 56, KIDS,THRILLER,{.thrilling_factor=2.5}},
 {1008, "New Adventures of Pippi Longstocking", 11, HIGHSCHOOL,NON_FICTION,{.NON_FICTION_field="HIST"}},
 {1009, "She Does Not Drink, Smoke or Flirt", 23, KIDS,DRAMA,{.DRAMA.quailty=12,.DRAMA.plot_quailty=80}},
 {1010, "F.I.S.T.", 97, HIGHSCHOOL,NON_FICTION,{.NON_FICTION_field="HIST"}},
 {1011, "Cruise", -97, HIGHSCHOOL,NON_FICTION,{.NON_FICTION_field="HIST"}},
 {1012, "Letter to Elia, A", 54, KIDS,DRAMA,{.DRAMA.quailty=25,.DRAMA.plot_quailty=80}},
 {1013, "To Be and to Have", -57, ADULT,THRILLER,{.thrilling_factor=5}},
 {1014, "Get Hard", -66, HIGHSCHOOL,THRILLER,{.thrilling_factor=1.2}},
 {1015, "A Nation's Battle for Life", 51, ADULT,NON_FICTION,{.NON_FICTION_field="HIST"}},
 {1016, "Place Called Chiapas", 76, COMICS,THRILLER,{.thrilling_factor=1.6}},
 {1017, "A Drama of the Wilderness", 55, COMICS,COMEDY,{.COMEDY.humor_type='N',.COMEDY.quailty_of_humor=546}},
 {1018, "Ladies Man", 46, ADULT,COMEDY,{.COMEDY.humor_type='N',.COMEDY.quailty_of_humor=12}},
 {1019, "Film Geek", -100, COMICS,COMEDY,{.COMEDY.humor_type='N',.COMEDY.quailty_of_humor=269}},
 {1020, "Raining Stones", -83, DOCUMENTARY,NON_FICTION,{.NON_FICTION_field="HIST"}}
};



 const Book * get_pointer() {
    return (&books[0]);
}

int get_num_Of_Books(){
return sizeof(books)/(sizeof(books[0]));
}

char* get_name (long int _int_Book_Number) {
 int len=get_num_Of_Books();
int  i=0;
 while (i< len ){
    if(books[i].int_Book_Number==_int_Book_Number) {
        return books[i].name;
    }
    i++;
 }
return NULL;
}

int get_Index(long int int_Book_Num) {
    int len=get_num_Of_Books();
    int i=0;
    while (i<len) {
        if(books[i].int_Book_Number==int_Book_Num) {
            return i;
        }
        i++;
    }

return -1 ;

}
